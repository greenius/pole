#!/usr/bin/env python

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
#  * Altername Names: $NAMES
#  * Proptype: $PROPTYPE
#  */
# #define $PROPNAME $PROPID
#
# For PROPNAME Use whatever it found in Canonical name and Alternate names
# giving priority to dispid* and PR_*
# Where there are multiple PR_* use the shortest, eg. PR_SMTP_ADDRESS
# PROPID should just be the 4 digits, 0x39FE

# See https://stanford.edu/~mgorkove/cgi-bin/rpython_tutorials/Scraping_PDFsText_Files_in_Python_Using_Regular_Expressions.php for getting started on a simple scraper

print "TODO...."



