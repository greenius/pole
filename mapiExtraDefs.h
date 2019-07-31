//
//  mapiExtraDefs.h
//  MsgInfo
//
//  Created by Steven W Green on 31/07/2019.
//  Copyright © 2019 Greenius Limited. All rights reserved.
//

#ifndef mapiExtraDefs_h
#define mapiExtraDefs_h

/*
 * Definitions needed to get maptags.h to compile
 * without needing loads of stuff from Windows SDK
 */

typedef unsigned long ULONG;

/*
 * Flags in a Property Stream
 * See 2.4.2.1 in [MS-OXMSG]
 */
enum PropertyAttributes {
  PROPATTR_MANDATORY = 1,
  PROPATTR_READABLE = 2,
  PROPATTR_WRITABLE = 4
};


#endif /* mapiExtraDefs_h */
