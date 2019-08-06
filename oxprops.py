#!/usr/bin/env python3

# This will:
#
# Convert [MS_OXPROPS].pdf to txt using pdftotext if text file does not exist
# Scan the file looking for sequences of:
#
# Canonical name: PidTagSmtpAddress
# Property ID: 0x39FE
#   or
# Property long ID (LID): 0x00008029
# Data type: PtypString, 0x001F
# Alternate names: PR_SMTP_ADDRESS, PR_SMTP_ADDRESS_A, PR_SMTP_ADDRESS_W
# Description: Contains the SMTP address of the Message object.

# When it gets to the next Canonical name (or end of file), write out stuff suitable
# for a header file, something like:
# /* Description: $DESCRIPTION
#  * Alternate Names: $NAMES
#  * Proptype: $PROPTYPE
#  */
# #define $PROPNAME $PROPID
#
# For PROPNAME Use whatever it found in Canonical name and Alternate names
# giving priority to dispid* and PR_*
# Where there are multiple PR_* use the shortest, eg. PR_SMTP_ADDRESS
# PROPID should just be the 4 digits, 0x39FE

# See https://stanford.edu/~mgorkove/cgi-bin/rpython_tutorials/Scraping_PDFsText_Files_in_Python_Using_Regular_Expressions.php for getting started on a simple scraper

import argparse
from pathlib import Path
import subprocess
import re

class PropertyValues:
    propid=''
    datatypename=''
    datatypevalue=''
    names=[]
    description=''

    def __init__(self, outstream):
        self.outstream = outstream

    def clear(self):
        self.propid=''
        self.datatypename=''
        self.datatypevalue=''
        self.names=[]
        self.description=''

    def process(self):
        # print("TODO...", vars(self))
        if self.names and self.propid:
            name = self.makeBestName()
            self.names.remove(name)
            # print('Processing...', name, self.names)
            self.outstream.write('/*\n'
                                 ' * Description: {description}\n'
                                 ' * Alternate Names: {altnames}\n'
                                 ' * Property Type: {proptype}\n'
                                 ' */\n'
                                 '#ifndef {propname}\n'
                                 '#define {propname} 0x{propid}{datatype}\n'
                                 '#endif\n'.format(description=self.description,
                                                   altnames=','.join(self.names),
                                                   proptype=self.datatypename,
                                                   propname=name,
                                                   propid=self.propid,
                                                   datatype=self.datatypevalue))

        self.clear()


    def makeBestName(self):
        # Scan names, preferring dispid* or PR_*
        bestDispid=''
        bestPR=''
        bestOther=''
        for n in self.names:
            if n.startswith('dispid'):
                if not bestDispid or (len(n) < len(bestDispid)):
                    bestDispid = n
            elif n.startswith('PR_'):
                if not bestPR or (len(n) < len(bestPR)):
                    bestPR = n
            elif not bestOther or (len(n) < len(bestOther)):
                bestOther = n

        if bestDispid:
            return bestDispid
        elif bestPR:
            return bestPR
        else:
            return bestOther

    def close(self):
        self.process()


argparser = argparse.ArgumentParser(description='Convert MS_OXPROPS to a header file')
#argparser.add_argument('infile', nargs='?', type=argparse.FileType('r'), default='[MS-OXPROPS].pdf')
#argparser.add_argument('outfile', nargs='?', type=argparse.FileType('w'), default='ms-oxprops.h')
argparser.add_argument('infile', nargs='?', default='[MS-OXPROPS].pdf')
argparser.add_argument('outfile', nargs='?', default='ms-oxprops.h')
args = argparser.parse_args()

print('infile=', args.infile)
print('outfile=', args.outfile)

txtfile = Path(args.infile).with_suffix('.txt')
print('txtfile=', txtfile)
if not Path(txtfile).is_file():
    print("Converting {} to text {}".format(Path(args.infile).name, Path(txtfile).name))
    subprocess.run(args=['pdftotext', args.infile, txtfile])

headerguard = re.sub(r'[\W]', '_', Path(args.outfile).name.upper())

print("Headerguard=", headerguard)

with open(args.outfile, 'w') as outstream:

    # Write the output file start
    outstream.write('/*\n'
                    ' * DO NOT EDIT\n'
                    ' *\n'
                    ' * Generated from {inputname} using {scriptname}\n'
                    ' */\n\n'
                    '#ifndef {headerguard}\n'
                    '#define {headerguard}\n'.format(scriptname=Path(__file__).name, inputname=Path(args.infile).name, headerguard=headerguard)
                    )



    values = PropertyValues(outstream)

    reCanonical=re.compile(r'^\s*Canonical name: ([\w]+)\s*$')
    reDescription=re.compile(r'^\s*Description:\s*(.*)\s*$')
    rePropid=re.compile(r'^\s*Property ID:\s*0x([0-9A-Za-z]{4})\s*$')
    reProplid=re.compile(r'^\s*Property long ID \(LID\):\s*0x[0-9A-Za-z]{4}([0-9A-Za-z]{4})\s*$')
    reAltnames=re.compile(r'^\s*Alternate names:\s*([\w,\s]+)\s*$')
    reDatatype=re.compile(r'^\s*Data type:\s*(([\w]+)[\s,]*0x([0-9A-Za-z]{4}))\s*$')

    for line in open(txtfile):
        s = reCanonical.search(line)
        if s:
            values.process()
            values.names.append(s.group(1))
        s = reDescription.search(line)
        if s:
            values.description = s.group(1)
        s = rePropid.search(line)
        if s:
            values.propid = s.group(1)
        s = reProplid.search(line)
        if s:
            values.propid = s.group(1)
        s = reAltnames.search(line)
        if s:
            for name in s.group(1).split(','):
                sname = name.strip()
                if sname:
                    values.names.append(sname)
        s = reDatatype.search(line)
        if s:
            values.datatypename = s.group(2)
            values.datatypevalue = s.group(3)

    values.close()
    outstream.write('\n#endif // {}\n'.format(headerguard))

