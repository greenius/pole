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

/*
 * AttachMethod from [MS-OXCMSG] 2.2.2.9
 */

enum TagAttachMethod {
  // The attachment has just been created.
  afNone =    0x00000000,
  // The PidTagAttachDataBinary property (section 2.2.2.7) contains the attachment data.
  afByValue = 0x00000001,
  // The PidTagAttachLongPathname property (section 2.2.2.13) contains a fully qualified path identifying the attachment To recipients with access to a common file server.
  afByReference = 0x00000002,
  // The PidTagAttachLongPathname property contains a fully qualified path identifying the attachment.
  afByReferenceOnly = 0x00000004,
  // The attachment is an embedded message that is accessed via the RopOpenEmbeddedMessage ROP ([MS-OXCROPS] section 2.2.6.16).
  afEmbeddedMessage = 0x00000005,
  // The PidTagAttachDataObject property (section 2.2.2.8) contains data in an application-specific format.
  afStorage = 0x00000006,
  // The PidTagAttachLongPathname property contains a fully qualified path identifying the attachment. The PidNameAttachmentProviderType defines the web service API manipulating the attachment.
  afByWebReference = 0x00000007
};


/* Copied From
 * https://docs.microsoft.com/en-us/office/client-developer/outlook/mapi/mapi-constants
 * Can't seem to find them in any header files
 *
 * This covers some of them, but some that are listed in [MS-OXPROPS] are still missing,
 * eg. Common / 00008580 = PidLidInternetAccountName or dispidInetAcctName
 */

#define dispidMeetingType 0x0026
#define dispidFileUnder 0x8005
#define dispidYomiFirstName 0x802C
#define dispidYomiLastName 0x802D
#define dispidYomiCompanyName 0x802E
#define dispidWorkAddressStreet 0x8045
#define dispidWorkAddressCity 0x8046
#define dispidWorkAddressState 0x8047
#define dispidWorkAddressPostalCode 0x8048
#define dispidWorkAddressCountry 0x8049
#define dispidWorkAddressPostOfficeBox 0x804A
#define dispidInstMsg 0x8062
#define dispidEmailDisplayName 0x8080
#define dispidEmailAddrType 0x8082
#define dispidEmailEmailAddress 0x8083
#define dispidEmailOriginalDisplayName 0x8084
#define dispidEmail1OriginalEntryID 0x8085
#define dispidEmail2DisplayName 0x8090
#define dispidEmail2AddrType 0x8092
#define dispidEmail2EmailAddress 0x8093
#define dispidEmail2OriginalDisplayName 0x8094
#define dispidEmail2OriginalEntryID 0x8095
#define dispidEmail3DisplayName 0x80A0
#define dispidEmail3AddrType 0x80A2
#define dispidEmail3EmailAddress 0x80A3
#define dispidEmail3OriginalDisplayName 0x80A4
#define dispidEmail3OriginalEntryID 0x80A5
#define dispidTaskStatus 0x8101
#define dispidTaskStartDate 0x8104
#define dispidTaskDueDate 0x8105
#define dispidTaskActualEffort 0x8110
#define dispidTaskEstimatedEffort 0x8111
#define dispidTaskFRecur 0x8126
#define dispidBusyStatus 0x8205
#define dispidLocation 0x8208
#define dispidApptStartWhole 0x820D
#define dispidApptEndWhole 0x820E
#define dispidApptDuration 0x8213
#define dispidRecurring 0x8223
#define dispidTimeZoneStruct 0x8233
#define dispidAllAttendeesString 0x8238
#define dispidToAttendeesString 0x823B
#define dispidCCAttendeesString 0x823C
#define dispidConfCheck 0x8240
#define dispidApptCounterProposal 0x8257
#define dispidApptTZDefStartDisplay 0x825E
#define dispidApptTZDefEndDisplay 0x825F
#define dispidApptTZDefRecur 0x8260
#define dispidReminderTime 0x8502
#define dispidReminderSet 0x8503
#define dispidFormStorage 0x850F
#define dispidPageDirStream 0x8513
#define dispidSmartNoAttach 0x8514
#define dispidCommonStart 0x8516
#define dispidCommonEnd 0x8517
#define dispidFormPropStream 0x851B
#define dispidRequest 0x8530
#define dispidCompanies 0x8539
#define dispidContacts 0x853A
#define dispidPropDefStream 0x8540
#define dispidScriptStream 0x8541
#define dispidCustomFlag 0x8542
#define dispidReminderNextTime 0x8560
#define dispidHeaderItem 0x8578
#define dispidUseTNEF 0x8582
#define dispidToDoTitle 0x85A4
#define dispidLogType 0x8700
#define dispidLogStart 0x8706
#define dispidLogDuration 0x8707
#define dispidLogEnd 0x8708

typedef uint32_t DWORD;
typedef uint16_t WORD;
typedef uint8_t BYTE;

typedef struct _GUID {  DWORD Data1;  WORD Data2;  WORD Data3;  BYTE Data4[8];
} GUID;

const GUID PS_INTERNET_HEADERS  = {0x00020386, 0x0000, 0x0000, {0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};
const GUID PS_PUBLIC_STRINGS    = {0x00020329, 0x0000, 0x0000, {0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};
const GUID PSETID_Appointment   = {0x00062002, 0x0000, 0x0000, {0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};
const GUID PSETID_Address       = {0x00062004, 0x0000, 0x0000, {0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};
const GUID PSETID_Common        = {0x00062008, 0x0000, 0x0000, {0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};
const GUID PSETID_Log           = {0x0006200A, 0x0000, 0x0000, {0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};
const GUID PSETID_Meeting       = {0x6ED8DA90, 0x450B, 0x101B, {0x98, 0xDA, 0x00, 0xAA, 0x00, 0x3F, 0x13, 0x05}};
const GUID PSETID_Task          = {0x00062003, 0x0000, 0x0000, {0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}};


#endif /* mapiExtraDefs_h */
