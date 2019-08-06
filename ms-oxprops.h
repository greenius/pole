/*
 * DO NOT EDIT
 *
 * Generated from [MS-OXPROPS].pdf using oxprops.py
 */

#ifndef MS_OXPROPS_H
#define MS_OXPROPS_H
/*
 * Description: Specifies the state of the electronic addresses of the contact and represents a set of bit
 * Alternate Names: PidLidAddressBookProviderArrayType
 * Property Type: PtypInteger32
 */
#ifndef dispidABPArrayType
#define dispidABPArrayType 0x80290003
#endif
/*
 * Description: Specifies which electronic address properties are set on the Contact object.
 * Alternate Names: PidLidAddressBookProviderEmailList
 * Property Type: PtypMultipleInteger32
 */
#ifndef dispidABPEmailList
#define dispidABPEmailList 0x80281003
#endif
/*
 * Description: Specifies the country code portion of the mailing address of the contact.
 * Alternate Names: PidLidAddressCountryCode
 * Property Type: PtypString
 */
#ifndef dispidAddressCountryCode
#define dispidAddressCountryCode 0x80DD001F
#endif
/*
 * Description: Specifies whether to automatically archive the message.
 * Alternate Names: PidLidAgingDontAgeMe
 * Property Type: PtypBoolean
 */
#ifndef dispidAgingDontAgeMe
#define dispidAgingDontAgeMe 0x850E000B
#endif
/*
 * Description: Specifies a list of all the attendees except for the organizer, including resources and
 * Alternate Names: PidLidAllAttendeesString
 * Property Type: PtypString
 */
#ifndef dispidAllAttendeesString
#define dispidAllAttendeesString 0x8238001F
#endif
/*
 * Description: This property is set to TRUE.
 * Alternate Names: PidLidAllowExternalCheck
 * Property Type: PtypBoolean
 */
#ifndef dispidAllowExternCheck
#define dispidAllowExternCheck 0x8246000B
#endif
/*
 * Description: Specifies the EntryID of the Appointment object that represents an anniversary of
 * Alternate Names: PidLidAnniversaryEventEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidAnniversaryEventEID
#define dispidAnniversaryEventEID 0x804E0102
#endif
/*
 * Description: Specifies a bit field that describes the auxiliary state of the object.
 * Alternate Names: PidLidAppointmentAuxiliaryFlags
 * Property Type: PtypInteger32
 */
#ifndef dispidApptAuxFlags
#define dispidApptAuxFlags 0x82070003
#endif
/*
 * Description: Specifies the color to be used when displaying the Calendar object.
 * Alternate Names: PidLidAppointmentColor
 * Property Type: PtypInteger32
 */
#ifndef dispidApptColor
#define dispidApptColor 0x82140003
#endif
/*
 * Description: Indicates whether a Meeting Response object is a counter proposal.
 * Alternate Names: PidLidAppointmentCounterProposal
 * Property Type: PtypBoolean
 */
#ifndef dispidApptCounterProposal
#define dispidApptCounterProposal 0x8257000B
#endif
/*
 * Description: Specifies the length of the event, in minutes.
 * Alternate Names: PidLidAppointmentDuration
 * Property Type: PtypInteger32
 */
#ifndef dispidApptDuration
#define dispidApptDuration 0x82130003
#endif
/*
 * Description: Indicates the date that the appointment ends.
 * Alternate Names: PidLidAppointmentEndDate
 * Property Type: PtypTime
 */
#ifndef dispidApptEndDate
#define dispidApptEndDate 0x82110040
#endif
/*
 * Description: Indicates the time that the appointment ends.
 * Alternate Names: PidLidAppointmentEndTime
 * Property Type: PtypTime
 */
#ifndef dispidApptEndTime
#define dispidApptEndTime 0x82100040
#endif
/*
 * Description: Specifies the end date and time for the event.
 * Alternate Names: PidLidAppointmentEndWhole
 * Property Type: PtypTime
 */
#ifndef dispidApptEndWhole
#define dispidApptEndWhole 0x820E0040
#endif
/*
 * Description: Indicates to the organizer the last sequence number that was sent to any attendee.
 * Alternate Names: PidLidAppointmentLastSequence
 * Property Type: PtypInteger32
 */
#ifndef dispidApptLastSequence
#define dispidApptLastSequence 0x82030003
#endif
/*
 * Description: Indicates the message class of the Meeting object to be generated from the Meeting
 * Alternate Names: PidLidAppointmentMessageClass
 * Property Type: PtypString
 */
#ifndef dispidApptMessageClass
#define dispidApptMessageClass 0x0024001F
#endif
/*
 * Description: Indicates whether attendees are not allowed to propose a new date and/or time for the
 * Alternate Names: PidLidAppointmentNotAllowPropose
 * Property Type: PtypBoolean
 */
#ifndef dispidApptNotAllowPropose
#define dispidApptNotAllowPropose 0x825A000B
#endif
/*
 * Description: Specifies the number of attendees who have sent counter proposals that have not
 * Alternate Names: PidLidAppointmentProposalNumber
 * Property Type: PtypInteger32
 */
#ifndef dispidApptProposalNum
#define dispidApptProposalNum 0x82590003
#endif
/*
 * Description: Indicates the proposed value for the PidLidAppointmentDuration property (section
 * Alternate Names: PidLidAppointmentProposedDuration
 * Property Type: PtypInteger32
 */
#ifndef dispidApptProposedDuration
#define dispidApptProposedDuration 0x82560003
#endif
/*
 * Description: Specifies the proposed value for the PidLidAppointmentEndWhole property (section
 * Alternate Names: PidLidAppointmentProposedEndWhole
 * Property Type: PtypTime
 */
#ifndef dispidApptProposedEndWhole
#define dispidApptProposedEndWhole 0x82510040
#endif
/*
 * Description: Specifies the proposed value for the PidLidAppointmentStartWhole property (section
 * Alternate Names: PidLidAppointmentProposedStartWhole
 * Property Type: PtypTime
 */
#ifndef dispidApptProposedStartWhole
#define dispidApptProposedStartWhole 0x82500040
#endif
/*
 * Description: Specifies the dates and times when a recurring series occurs.
 * Alternate Names: PidLidAppointmentRecur
 * Property Type: PtypBinary
 */
#ifndef dispidApptRecur
#define dispidApptRecur 0x82160102
#endif
/*
 * Description: Specifies the user who last replied to the meeting request or meeting update.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidLidAppointmentReplyName
#define PidLidAppointmentReplyName 0x8230001F
#endif
/*
 * Description: Specifies the date and time at which the attendee responded to a received meeting
 * Alternate Names: PidLidAppointmentReplyTime
 * Property Type: PtypTime
 */
#ifndef dispidApptReplyTime
#define dispidApptReplyTime 0x82200040
#endif
/*
 * Description: Specifies the sequence number of a Meeting object.
 * Alternate Names: PidLidAppointmentSequence
 * Property Type: PtypInteger32
 */
#ifndef dispidApptSequence
#define dispidApptSequence 0x82010003
#endif
/*
 * Description: Indicates the date and time at which the PidLidAppointmentSequence property
 * Alternate Names: PidLidAppointmentSequenceTime
 * Property Type: PtypTime
 */
#ifndef dispidApptSeqTime
#define dispidApptSeqTime 0x82020040
#endif
/*
 * Description: Identifies the date that the appointment starts.
 * Alternate Names: PidLidAppointmentStartDate
 * Property Type: PtypTime
 */
#ifndef dispidApptStartDate
#define dispidApptStartDate 0x82120040
#endif
/*
 * Description: Identifies the time that the appointment starts.
 * Alternate Names: PidLidAppointmentStartTime
 * Property Type: PtypTime
 */
#ifndef dispidApptStartTime
#define dispidApptStartTime 0x820F0040
#endif
/*
 * Description: Specifies the start date and time of the appointment.
 * Alternate Names: PidLidAppointmentStartWhole
 * Property Type: PtypTime
 */
#ifndef dispidApptStartWhole
#define dispidApptStartWhole 0x820D0040
#endif
/*
 * Description: Specifies a bit field that describes the state of the object.
 * Alternate Names: PidLidAppointmentStateFlags
 * Property Type: PtypInteger32
 */
#ifndef dispidApptStateFlags
#define dispidApptStateFlags 0x82170003
#endif
/*
 * Description: Specifies whether the event is an all-day event.
 * Alternate Names: PidLidAppointmentSubType
 * Property Type: PtypBoolean
 */
#ifndef dispidApptSubType
#define dispidApptSubType 0x8215000B
#endif
/*
 * Description: Specifies time zone information that indicates the time zone of the
 * Alternate Names: PidLidAppointmentTimeZoneDefinitionEndDisplay
 * Property Type: PtypBinary
 */
#ifndef dispidApptTZDefEndDisplay
#define dispidApptTZDefEndDisplay 0x825F0102
#endif
/*
 * Description: Specifies time zone information that describes how to convert the meeting date and
 * Alternate Names: PidLidAppointmentTimeZoneDefinitionRecur
 * Property Type: PtypBinary
 */
#ifndef dispidApptTZDefRecur
#define dispidApptTZDefRecur 0x82600102
#endif
/*
 * Description: Specifies time zone information that indicates the time zone of the
 * Alternate Names: PidLidAppointmentTimeZoneDefinitionStartDisplay
 * Property Type: PtypBinary
 */
#ifndef dispidApptTZDefStartDisplay
#define dispidApptTZDefStartDisplay 0x825E0102
#endif
/*
 * Description: Contains a list of unsendable attendees.
 * Alternate Names: PidLidAppointmentUnsendableRecipients
 * Property Type: PtypBinary
 */
#ifndef dispidApptUnsendableRecips
#define dispidApptUnsendableRecips 0x825D0102
#endif
/*
 * Description: Indicates the time at which the appointment was last updated.
 * Alternate Names: PidLidAppointmentUpdateTime
 * Property Type: PtypTime
 */
#ifndef dispidApptUpdateTime
#define dispidApptUpdateTime 0x82260040
#endif
/*
 * Description: Specifies the date and time at which the meeting-related object was sent.
 * Alternate Names: LID_ATTENDEE_CRITICAL_CHANGE
 * Property Type: PtypTime
 */
#ifndef PidLidAttendeeCriticalChange
#define PidLidAttendeeCriticalChange 0x00010040
#endif
/*
 * Description: Indicates whether the value of the PidLidLocation property (section 2.159) is set to
 * Alternate Names: PidLidAutoFillLocation
 * Property Type: PtypBoolean
 */
#ifndef dispidAutoFillLocation
#define dispidAutoFillLocation 0x823A000B
#endif
/*
 * Description: Specifies to the application whether to create a Journal object for each action
 * Alternate Names: PidLidAutoLog
 * Property Type: PtypBoolean
 */
#ifndef dispidAutoLog
#define dispidAutoLog 0x8025000B
#endif
/*
 * Description: Specifies the options used in the automatic processing of email messages.
 * Alternate Names: PidLidAutoProcessState
 * Property Type: PtypInteger32
 */
#ifndef dispidSniffState
#define dispidSniffState 0x851A0003
#endif
/*
 * Description: Specifies whether to automatically start the conferencing application when a reminder
 * Alternate Names: PidLidAutoStartCheck
 * Property Type: PtypBoolean
 */
#ifndef dispidAutoStartCheck
#define dispidAutoStartCheck 0x8244000B
#endif
/*
 * Description: Specifies billing information for the contact.
 * Alternate Names: PidLidBilling
 * Property Type: PtypString
 */
#ifndef dispidBilling
#define dispidBilling 0x8535001F
#endif
/*
 * Description: Specifies the EntryID of an optional Appointment object that represents the birthday
 * Alternate Names: PidLidBirthdayEventEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidBirthdayEventEID
#define dispidBirthdayEventEID 0x804D0102
#endif
/*
 * Description: Specifies the birthday of a contact.
 * Alternate Names: PidLidBirthdayLocal
 * Property Type: PtypTime
 */
#ifndef dispidApptBirthdayLocal
#define dispidApptBirthdayLocal 0x80DE0040
#endif
/*
 * Description: Contains the image to be used on a business card.
 * Alternate Names: PidLidBusinessCardCardPicture
 * Property Type: PtypBinary
 */
#ifndef dispidBCCardPicture
#define dispidBCCardPicture 0x80410102
#endif
/*
 * Description: Contains user customization details for displaying a contact as a business card.
 * Alternate Names: PidLidBusinessCardDisplayDefinition
 * Property Type: PtypBinary
 */
#ifndef dispidBCDisplayDefinition
#define dispidBCDisplayDefinition 0x80400102
#endif
/*
 * Description: Specifies the availability of a user for the event described by the object.
 * Alternate Names: PidLidBusyStatus
 * Property Type: PtypInteger32
 */
#ifndef dispidBusyStatus
#define dispidBusyStatus 0x82050003
#endif
/*
 * Description: Contains the value of the CalendarType field from the PidLidAppointmentRecur
 * Alternate Names: PidLidCalendarType
 * Property Type: PtypInteger32
 */
#ifndef LID_CALENDAR_TYPE
#define LID_CALENDAR_TYPE 0x001C0003
#endif
/*
 * Description: Contains the array of text labels assigned to this Message object.
 * Alternate Names: PidLidCategories
 * Property Type: PtypMultipleString
 */
#ifndef dispidCategories
#define dispidCategories 0x9000101F
#endif
/*
 * Description: Contains a list of all the sendable attendees who are also optional attendees.
 * Alternate Names: PidLidCcAttendeesString
 * Property Type: PtypString
 */
#ifndef dispidCCAttendeesString
#define dispidCCAttendeesString 0x823C001F
#endif
/*
 * Description: Specifies a bit field that indicates how the Meeting object has changed.
 * Alternate Names: PidLidChangeHighlight
 * Property Type: PtypInteger32
 */
#ifndef dispidChangeHighlight
#define dispidChangeHighlight 0x82040003
#endif
/*
 * Description: Contains a list of the classification categories to which the associated Message object
 * Alternate Names: PidLidClassification
 * Property Type: PtypString
 */
#ifndef dispidClassification
#define dispidClassification 0x85B6001F
#endif
/*
 * Description: Contains a human-readable summary of each of the classification categories included in
 * Alternate Names: PidLidClassificationDescription
 * Property Type: PtypString
 */
#ifndef dispidClassDesc
#define dispidClassDesc 0x85B7001F
#endif
/*
 * Description: Contains the GUID that identifies the list of email classification categories used by a
 * Alternate Names: PidLidClassificationGuid
 * Property Type: PtypString
 */
#ifndef dispidClassGuid
#define dispidClassGuid 0x85B8001F
#endif
/*
 * Description: Indicates whether the message uses any classification categories.
 * Alternate Names: PidLidClassificationKeep
 * Property Type: PtypBoolean
 */
#ifndef dispidClassKeep
#define dispidClassKeep 0x85BA000B
#endif
/*
 * Description: Indicates whether the contents of this message are regarded as classified information.
 * Alternate Names: PidLidClassified
 * Property Type: PtypBoolean
 */
#ifndef dispidClassified
#define dispidClassified 0x85B5000B
#endif
/*
 * Description: Contains the value of the PidLidGlobalObjectId property (section 2.142) for an object
 * Alternate Names: PidLidCleanGlobalObjectId
 * Property Type: PtypBinary
 */
#ifndef dispidCleanGlobalObjId
#define dispidCleanGlobalObjId 0x00230102
#endif
/*
 * Description: Indicates what actions the user has taken on this Meeting object.
 * Alternate Names: PidLidClientIntent
 * Property Type: PtypInteger32
 */
#ifndef dispidClientIntent
#define dispidClientIntent 0x00150003
#endif
/*
 * Description: Specifies the end date and time of the event in UTC.
 * Alternate Names: PidLidClipEnd
 * Property Type: PtypTime
 */
#ifndef dispidClipEnd
#define dispidClipEnd 0x82360040
#endif
/*
 * Description: Specifies the start date and time of the event in UTC.
 * Alternate Names: PidLidClipStart
 * Property Type: PtypTime
 */
#ifndef dispidClipStart
#define dispidClipStart 0x82350040
#endif
/*
 * Description: Specifies the document to be launched when the user joins the meeting.
 * Alternate Names: PidLidCollaborateDoc
 * Property Type: PtypString
 */
#ifndef dispidCollaborateDoc
#define dispidCollaborateDoc 0x8247001F
#endif
/*
 * Description: Indicates the end time for the Message object.
 * Alternate Names: PidLidCommonEnd
 * Property Type: PtypTime
 */
#ifndef dispidCommonEnd
#define dispidCommonEnd 0x85170040
#endif
/*
 * Description: Indicates the start time for the Message object.
 * Alternate Names: PidLidCommonStart
 * Property Type: PtypTime
 */
#ifndef dispidCommonStart
#define dispidCommonStart 0x85160040
#endif
/*
 * Description: Contains a list of company names, each of which is associated with a contact that is
 * Alternate Names: 
 * Property Type: PtypMultipleString
 */
#ifndef PidLidCompanies
#define PidLidCompanies 0x8539101F
#endif
/*
 * Description: 
 * Alternate Names: PidLidConferencingCheck
 * Property Type: PtypBoolean
 */
#ifndef dispidConfCheck
#define dispidConfCheck 0x8240000B
#endif
/*
 * Description: Specifies the type of the meeting.
 * Alternate Names: PidLidConferencingType
 * Property Type: PtypInteger32
 */
#ifndef dispidConfType
#define dispidConfType 0x82410003
#endif
/*
 * Description: Specifies the character set used for a Contact object.
 * Alternate Names: PidLidContactCharacterSet
 * Property Type: PtypInteger32
 */
#ifndef dispidContactCharSet
#define dispidContactCharSet 0x80230003
#endif
/*
 * Description: Specifies the visible fields in the application's user interface that are used to help display
 * Alternate Names: PidLidContactItemData
 * Property Type: PtypMultipleInteger32
 */
#ifndef dispidContactItemData
#define dispidContactItemData 0x80071003
#endif
/*
 * Description: Specifies the EntryID of the GAL contact to which the duplicate contact is linked.
 * Alternate Names: PidLidContactLinkedGlobalAddressListEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidContactLinkedGALEntryID
#define dispidContactLinkedGALEntryID 0x80E20102
#endif
/*
 * Description: Contains the elements of the PidLidContacts property (section 2.77).
 * Alternate Names: PidLidContactLinkEntry
 * Property Type: PtypBinary
 */
#ifndef dispidContactLinkEntry
#define dispidContactLinkEntry 0x85850102
#endif
/*
 * Description: Specifies the GUID of the GAL contact to which the duplicate contact is linked.
 * Alternate Names: PidLidContactLinkGlobalAddressListLinkId
 * Property Type: PtypGuid
 */
#ifndef dispidContactLinkGALLinkID
#define dispidContactLinkGALLinkID 0x80E80048
#endif
/*
 * Description: Specifies the state of the linking between the GAL contact and the duplicate contact.
 * Alternate Names: PidLidContactLinkGlobalAddressListLinkState
 * Property Type: PtypInteger32
 */
#ifndef dispidContactLinkGALLinkState
#define dispidContactLinkGALLinkState 0x80E60003
#endif
/*
 * Description: Contains a list of GAL contacts that were previously rejected for linking with the
 * Alternate Names: PidLidContactLinkLinkRejectHistory
 * Property Type: PtypMultipleBinary
 */
#ifndef dispidContactLinkLinkRejectHistory
#define dispidContactLinkLinkRejectHistory 0x80E51102
#endif
/*
 * Description: 
 * Alternate Names: PidLidContactLinkName
 * Property Type: PtypString
 */
#ifndef dispidContactLinkName
#define dispidContactLinkName 0x8586001F
#endif
/*
 * Description: Contains the list of SearchKeys for a Contact object linked to by the Message object.
 * Alternate Names: PidLidContactLinkSearchKey
 * Property Type: PtypBinary
 */
#ifndef dispidContactLinkSearchKey
#define dispidContactLinkSearchKey 0x85840102
#endif
/*
 * Description: Contains a list of the SMTP addresses that are used by the contact.
 * Alternate Names: PidLidContactLinkSMTPAddressCache
 * Property Type: PtypMultipleString
 */
#ifndef dispidContactLinkSMTPAddressCache
#define dispidContactLinkSMTPAddressCache 0x80E3101F
#endif
/*
 * Description: Contains the PidTagDisplayName property (section 2.676) of each Address Book
 * Alternate Names: PidLidContacts
 * Property Type: PtypMultipleString
 */
#ifndef dispidContacts
#define dispidContacts 0x853A101F
#endif
/*
 * Description: Contains text used to add custom text to a business card representation of a Contact
 * Alternate Names: PidLidContactUserField1
 * Property Type: PtypString
 */
#ifndef dispidContactUserField1
#define dispidContactUserField1 0x804F001F
#endif
/*
 * Description: Contains text used to add custom text to a business card representation of a Contact
 * Alternate Names: PidLidContactUserField2
 * Property Type: PtypString
 */
#ifndef dispidContactUserField2
#define dispidContactUserField2 0x8050001F
#endif
/*
 * Description: Contains text used to add custom text to a business card representation of a Contact
 * Alternate Names: PidLidContactUserField3
 * Property Type: PtypString
 */
#ifndef dispidContactUserField3
#define dispidContactUserField3 0x8051001F
#endif
/*
 * Description: Contains text used to add custom text to a business card representation of a Contact
 * Alternate Names: PidLidContactUserField4
 * Property Type: PtypString
 */
#ifndef dispidContactUserField4
#define dispidContactUserField4 0x8052001F
#endif
/*
 * Description: Contains the time, in UTC, that an Email object was last received in the
 * Alternate Names: PidLidConversationActionLastAppliedTime
 * Property Type: PtypTime
 */
#ifndef dispidConvActionLastAppliedTime
#define dispidConvActionLastAppliedTime 0x85CA0040
#endif
/*
 * Description: Contains the maximum value of the PidTagMessageDeliveryTime property (section
 * Alternate Names: PidLidConversationActionMaxDeliveryTime
 * Property Type: PtypTime
 */
#ifndef dispidConvActionMaxDeliveryTime
#define dispidConvActionMaxDeliveryTime 0x85C80040
#endif
/*
 * Description: Contains the EntryID for the destination folder.
 * Alternate Names: PidLidConversationActionMoveFolderEid
 * Property Type: PtypBinary
 */
#ifndef dispidConvActionMoveFolderEid
#define dispidConvActionMoveFolderEid 0x85C60102
#endif
/*
 * Description: Contains the EntryID for a move to a folder in a different message store.
 * Alternate Names: PidLidConversationActionMoveStoreEid
 * Property Type: PtypBinary
 */
#ifndef dispidConvActionMoveStoreEid
#define dispidConvActionMoveStoreEid 0x85C70102
#endif
/*
 * Description: Contains the version of the conversation action FAI message.
 * Alternate Names: PidLidConversationActionVersion
 * Property Type: PtypInteger32
 */
#ifndef dispidConvActionVersion
#define dispidConvActionVersion 0x85CB0003
#endif
/*
 * Description: Specifies a sequential number to be used in the processing of a conversation action.
 * Alternate Names: PidLidConversationProcessed
 * Property Type: PtypInteger32
 */
#ifndef dispidConvExLegacyProcessedRand
#define dispidConvExLegacyProcessedRand 0x85C90003
#endif
/*
 * Description: Specifies the build number of the client application that sent the message.
 * Alternate Names: PidLidCurrentVersion
 * Property Type: PtypInteger32
 */
#ifndef dispidCurrentVersion
#define dispidCurrentVersion 0x85520003
#endif
/*
 * Description: Specifies the name of the client application that sent the message.
 * Alternate Names: PidLidCurrentVersionName
 * Property Type: PtypString
 */
#ifndef dispidCurrentVersionName
#define dispidCurrentVersionName 0x8554001F
#endif
/*
 * Description: Identifies the day interval for the recurrence pattern.
 * Alternate Names: PidLidDayInterval
 * Property Type: PtypInteger16
 */
#ifndef LID_DAY_INTERVAL
#define LID_DAY_INTERVAL 0x00110002
#endif
/*
 * Description: Identifies the day of the month for the appointment or meeting.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidLidDayOfMonth
#define PidLidDayOfMonth 0x10000003
#endif
/*
 * Description: Indicates whether a delegate responded to the meeting request.
 * Alternate Names: PidLidDelegateMail
 * Property Type: PtypBoolean
 */
#ifndef LID_DELEGATE_MAIL
#define LID_DELEGATE_MAIL 0x0009000B
#endif
/*
 * Description: This property is ignored by the server and is set to an empty string by the client.
 * Alternate Names: PidLidDepartment
 * Property Type: PtypString
 */
#ifndef dispidDepartment
#define dispidDepartment 0x8010001F
#endif
/*
 * Description: Specifies the directory server to be used.
 * Alternate Names: PidLidDirectory
 * Property Type: PtypString
 */
#ifndef dispidDirectory
#define dispidDirectory 0x8242001F
#endif
/*
 * Description: Specifies the 32-bit cyclic redundancy check (CRC) polynomial checksum, as
 * Alternate Names: PidLidDistributionListChecksum
 * Property Type: PtypInteger32
 */
#ifndef dispidDLChecksum
#define dispidDLChecksum 0x804C0003
#endif
/*
 * Description: Specifies the list of EntryIDs of the objects corresponding to the members of the
 * Alternate Names: PidLidDistributionListMembers
 * Property Type: PtypMultipleBinary
 */
#ifndef dispidDLMembers
#define dispidDLMembers 0x80551102
#endif
/*
 * Description: Specifies the name of the personal distribution list.
 * Alternate Names: PidLidDistributionListName
 * Property Type: PtypString
 */
#ifndef dispidDLName
#define dispidDLName 0x8053001F
#endif
/*
 * Description: Specifies the list of one-off EntryIDs corresponding to the members of the personal
 * Alternate Names: PidLidDistributionListOneOffMembers
 * Property Type: PtypMultipleBinary
 */
#ifndef dispidDLOneOffMembers
#define dispidDLOneOffMembers 0x80541102
#endif
/*
 * Description: Specifies the list of EntryIDs and one-off EntryIDs corresponding to the members of
 * Alternate Names: PidLidDistributionListStream
 * Property Type: PtypBinary
 */
#ifndef dispidDLStream
#define dispidDLStream 0x80640102
#endif
/*
 * Description: Specifies the address type of an electronic address.
 * Alternate Names: PidLidEmail1AddressType
 * Property Type: PtypString
 */
#ifndef dispidEmail1AddrType
#define dispidEmail1AddrType 0x8082001F
#endif
/*
 * Description: Specifies the user-readable display name for the email address.
 * Alternate Names: PidLidEmail1DisplayName
 * Property Type: PtypString
 */
#ifndef dispidEmail1DisplayName
#define dispidEmail1DisplayName 0x8080001F
#endif
/*
 * Description: Specifies the email address of the contact.
 * Alternate Names: PidLidEmail1EmailAddress
 * Property Type: PtypString
 */
#ifndef dispidEmail1EmailAddress
#define dispidEmail1EmailAddress 0x8083001F
#endif
/*
 * Description: Specifies the SMTP email address that corresponds to the email address for the Contact
 * Alternate Names: PidLidEmail1OriginalDisplayName,Email1OriginalDisplayName
 * Property Type: PtypString
 */
#ifndef dispidEmail1OriginalDisplayName
#define dispidEmail1OriginalDisplayName 0x8084001F
#endif
/*
 * Description: Specifies the EntryID of the object corresponding to this electronic address.
 * Alternate Names: PidLidEmail1OriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidEmail1OriginalEntryID
#define dispidEmail1OriginalEntryID 0x80850102
#endif
/*
 * Description: Specifies the address type of the electronic address.
 * Alternate Names: PidLidEmail2AddressType
 * Property Type: PtypString
 */
#ifndef dispidEmail2AddrType
#define dispidEmail2AddrType 0x8092001F
#endif
/*
 * Description: Specifies the user-readable display name for the email address.
 * Alternate Names: PidLidEmail2DisplayName
 * Property Type: PtypString
 */
#ifndef dispidEmail2DisplayName
#define dispidEmail2DisplayName 0x8090001F
#endif
/*
 * Description: Specifies the email address of the contact.
 * Alternate Names: PidLidEmail2EmailAddress
 * Property Type: PtypString
 */
#ifndef dispidEmail2EmailAddress
#define dispidEmail2EmailAddress 0x8093001F
#endif
/*
 * Description: Specifies the SMTP email address that corresponds to the email address for the Contact
 * Alternate Names: PidLidEmail2OriginalDisplayName
 * Property Type: PtypString
 */
#ifndef dispidEmail2OriginalDisplayName
#define dispidEmail2OriginalDisplayName 0x8094001F
#endif
/*
 * Description: Specifies the EntryID of the object that corresponds to this electronic address.
 * Alternate Names: PidLidEmail2OriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidEmail2OriginalEntryID
#define dispidEmail2OriginalEntryID 0x80950102
#endif
/*
 * Description: Specifies the address type of the electronic address.
 * Alternate Names: PidLidEmail3AddressType
 * Property Type: PtypString
 */
#ifndef dispidEmail3AddrType
#define dispidEmail3AddrType 0x80A2001F
#endif
/*
 * Description: Specifies the user-readable display name for the email address.
 * Alternate Names: PidLidEmail3DisplayName
 * Property Type: PtypString
 */
#ifndef dispidEmail3DisplayName
#define dispidEmail3DisplayName 0x80A0001F
#endif
/*
 * Description: Specifies the email address of the contact.
 * Alternate Names: PidLidEmail3EmailAddress
 * Property Type: PtypString
 */
#ifndef dispidEmail3EmailAddress
#define dispidEmail3EmailAddress 0x80A3001F
#endif
/*
 * Description: Specifies the SMTP email address that corresponds to the email address for the Contact
 * Alternate Names: PidLidEmail3OriginalDisplayName
 * Property Type: PtypString
 */
#ifndef dispidEmail3OriginalDisplayName
#define dispidEmail3OriginalDisplayName 0x80A4001F
#endif
/*
 * Description: Specifies the EntryID of the object that corresponds to this electronic address.
 * Alternate Names: PidLidEmail3OriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidEmail3OriginalEntryID
#define dispidEmail3OriginalEntryID 0x80A50102
#endif
/*
 * Description: Identifies the end date of the recurrence range.
 * Alternate Names: PidLidEndRecurrenceDate
 * Property Type: PtypInteger32
 */
#ifndef LID_END_RECUR_DATE
#define LID_END_RECUR_DATE 0x000F0003
#endif
/*
 * Description: Identifies the end time of the recurrence range.
 * Alternate Names: PidLidEndRecurrenceTime
 * Property Type: PtypInteger32
 */
#ifndef LID_END_RECUR_TIME
#define LID_END_RECUR_TIME 0x00100003
#endif
/*
 * Description: Specifies the date and time, in UTC, within a recurrence pattern that an exception will
 * Alternate Names: PidLidExceptionReplaceTime
 * Property Type: PtypTime
 */
#ifndef dispidExceptionReplaceTime
#define dispidExceptionReplaceTime 0x82280040
#endif
/*
 * Description: Contains the string value "FAX".
 * Alternate Names: PidLidFax1AddressType
 * Property Type: PtypString
 */
#ifndef dispidFax1AddrType
#define dispidFax1AddrType 0x80B2001F
#endif
/*
 * Description: Contains a user-readable display name, followed by the "@" character, followed by a
 * Alternate Names: PidLidFax1EmailAddress
 * Property Type: PtypString
 */
#ifndef dispidFax1EmailAddress
#define dispidFax1EmailAddress 0x80B3001F
#endif
/*
 * Description: Contains the same value as the PidTagNormalizedSubject property (section 2.812).
 * Alternate Names: PidLidFax1OriginalDisplayName
 * Property Type: PtypString
 */
#ifndef dispidFax1OriginalDisplayName
#define dispidFax1OriginalDisplayName 0x80B4001F
#endif
/*
 * Description: Specifies a one-off EntryID that corresponds to this fax address.
 * Alternate Names: PidLidFax1OriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidFax1OriginalEntryID
#define dispidFax1OriginalEntryID 0x80B50102
#endif
/*
 * Description: Contains the string value "FAX".
 * Alternate Names: PidLidFax2AddressType
 * Property Type: PtypString
 */
#ifndef dispidFax2AddrType
#define dispidFax2AddrType 0x80C2001F
#endif
/*
 * Description: Contains a user-readable display name, followed by the "@" character, followed by a
 * Alternate Names: PidLidFax2EmailAddress
 * Property Type: PtypString
 */
#ifndef dispidFax2EmailAddress
#define dispidFax2EmailAddress 0x80C3001F
#endif
/*
 * Description: Contains the same value as the PidTagNormalizedSubject property (section 2.812).
 * Alternate Names: PidLidFax2OriginalDisplayName
 * Property Type: PtypString
 */
#ifndef dispidFax2OriginalDisplayName
#define dispidFax2OriginalDisplayName 0x80C4001F
#endif
/*
 * Description: Specifies a one-off EntryID corresponding to this fax address.
 * Alternate Names: PidLidFax2OriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidFax2OriginalEntryID
#define dispidFax2OriginalEntryID 0x80C50102
#endif
/*
 * Description: Contains the string value "FAX".
 * Alternate Names: PidLidFax3AddressType
 * Property Type: PtypString
 */
#ifndef dispidFax3AddrType
#define dispidFax3AddrType 0x80D2001F
#endif
/*
 * Description: Contains a user-readable display name, followed by the "@" character, followed by a
 * Alternate Names: PidLidFax3EmailAddress
 * Property Type: PtypString
 */
#ifndef dispidFax3EmailAddress
#define dispidFax3EmailAddress 0x80D3001F
#endif
/*
 * Description: Contains the same value as the PidTagNormalizedSubject property (section 2.812).
 * Alternate Names: PidLidFax3OriginalDisplayName
 * Property Type: PtypString
 */
#ifndef dispidFax3OriginalDisplayName
#define dispidFax3OriginalDisplayName 0x80D4001F
#endif
/*
 * Description: Specifies a one-off EntryID that corresponds to this fax address.
 * Alternate Names: PidLidFax3OriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidFax3OriginalEntryID
#define dispidFax3OriginalEntryID 0x80D50102
#endif
/*
 * Description: Indicates that the object is a Recurring Calendar object with one or more exceptions,
 * Alternate Names: PidLidFExceptionalAttendees
 * Property Type: PtypBoolean
 */
#ifndef dispidFExceptionalAttendees
#define dispidFExceptionalAttendees 0x822B000B
#endif
/*
 * Description: Indicates that the Exception Embedded Message object has a body that differs from
 * Alternate Names: PidLidFExceptionalBody
 * Property Type: PtypBoolean
 */
#ifndef dispidFExceptionalBody
#define dispidFExceptionalBody 0x8206000B
#endif
/*
 * Description: Specifies the name under which to file a contact when displaying a list of contacts.
 * Alternate Names: PidLidFileUnder
 * Property Type: PtypString
 */
#ifndef dispidFileUnder
#define dispidFileUnder 0x8005001F
#endif
/*
 * Description: Specifies how to generate and recompute the value of the PidLidFileUnder property
 * Alternate Names: PidLidFileUnderId
 * Property Type: PtypInteger32
 */
#ifndef dispidFileUnderId
#define dispidFileUnderId 0x80060003
#endif
/*
 * Description: Specifies a list of possible values for the PidLidFileUnderId property (section 2.133).
 * Alternate Names: PidLidFileUnderList
 * Property Type: PtypMultipleInteger32
 */
#ifndef dispidFileUnderList
#define dispidFileUnderList 0x80261003
#endif
/*
 * Description: Indicates whether invitations have been sent for the meeting that this Meeting object
 * Alternate Names: PidLidFInvited
 * Property Type: PtypBoolean
 */
#ifndef dispidFInvited
#define dispidFInvited 0x8229000B
#endif
/*
 * Description: Contains user-specifiable text to be associated with the flag.
 * Alternate Names: PidLidFlagRequest
 * Property Type: PtypString
 */
#ifndef dispidRequest
#define dispidRequest 0x8530001F
#endif
/*
 * Description: Contains an index identifying one of a set of pre-defined text strings to be associated
 * Alternate Names: PidLidFlagString
 * Property Type: PtypInteger32
 */
#ifndef dispidFlagStringEnum
#define dispidFlagStringEnum 0x85C00003
#endif
/*
 * Description: Indicates whether the Meeting Request object represents an exception to a
 * Alternate Names: PidLidForwardInstance
 * Property Type: PtypBoolean
 */
#ifndef dispidFwrdInstance
#define dispidFwrdInstance 0x820A000B
#endif
/*
 * Description: Contains a list of RecipientRow structures, as described in [MS-OXCDATA] section
 * Alternate Names: PidLidForwardNotificationRecipients
 * Property Type: PtypBinary
 */
#ifndef dispidForwardNotificationRecipients
#define dispidForwardNotificationRecipients 0x82610102
#endif
/*
 * Description: Indicates whether the Calendar folder from which the meeting was opened is another
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidLidFOthersAppointment
#define PidLidFOthersAppointment 0x822F000B
#endif
/*
 * Description: Specifies a URL path from which a client can retrieve free/busy status information for
 * Alternate Names: PidLidFreeBusyLocation
 * Property Type: PtypString
 */
#ifndef dispidFreeBusyLocation
#define dispidFreeBusyLocation 0x80D8001F
#endif
/*
 * Description: Contains an ID for an object that represents an exception to a recurring series.
 * Alternate Names: PidLidGlobalObjectId
 * Property Type: PtypBinary
 */
#ifndef LID_GLOBAL_OBJID
#define LID_GLOBAL_OBJID 0x00030102
#endif
/*
 * Description: Specifies whether the attachment has a picture.
 * Alternate Names: PidLidHasPicture
 * Property Type: PtypBoolean
 */
#ifndef dispidHasPicture
#define dispidHasPicture 0x8015000B
#endif
/*
 * Description: Specifies the complete address of the home address of the contact.
 * Alternate Names: PidLidHomeAddress
 * Property Type: PtypString
 */
#ifndef dispidHomeAddress
#define dispidHomeAddress 0x801A001F
#endif
/*
 * Description: Specifies the country code portion of the home address of the contact.
 * Alternate Names: PidLidHomeAddressCountryCode
 * Property Type: PtypString
 */
#ifndef dispidHomeAddressCountryCode
#define dispidHomeAddressCountryCode 0x80DA001F
#endif
/*
 * Description: Specifies the business webpage URL of the contact.
 * Alternate Names: PidLidHtml
 * Property Type: PtypString
 */
#ifndef dispidHTML
#define dispidHTML 0x802B001F
#endif
/*
 * Description: Identifies the day of the week for the appointment or meeting.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidLidICalendarDayOfWeekMask
#define PidLidICalendarDayOfWeekMask 0x10010003
#endif
/*
 * Description: Contains the contents of the iCalendar MIME part of the original MIME message.
 * Alternate Names: PidLidInboundICalStream,InboundICalStream
 * Property Type: PtypBinary
 */
#ifndef dispidInboundICalStream
#define dispidInboundICalStream 0x827A0102
#endif
/*
 * Description: Contains the name of the form associated with this message.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidLidInfoPathFormName
#define PidLidInfoPathFormName 0x85B1001F
#endif
/*
 * Description: Specifies the instant messaging address of the contact.
 * Alternate Names: PidLidInstantMessagingAddress
 * Property Type: PtypString
 */
#ifndef dispidInstMsg
#define dispidInstMsg 0x8062001F
#endif
/*
 * Description: Contains the value of the PidLidBusyStatus property (section 2.47) on the Meeting
 * Alternate Names: PidLidIntendedBusyStatus
 * Property Type: PtypInteger32
 */
#ifndef dispidIntendedBusyStatus
#define dispidIntendedBusyStatus 0x82240003
#endif
/*
 * Description: Specifies the user-visible email account name through which the email message is sent.
 * Alternate Names: PidLidInternetAccountName
 * Property Type: PtypString
 */
#ifndef dispidInetAcctName
#define dispidInetAcctName 0x8580001F
#endif
/*
 * Description: Specifies the email account ID through which the email message is sent.
 * Alternate Names: PidLidInternetAccountStamp
 * Property Type: PtypString
 */
#ifndef dispidInetAcctStamp
#define dispidInetAcctStamp 0x8581001F
#endif
/*
 * Description: Specifies whether the contact is linked to other contacts.
 * Alternate Names: PidLidIsContactLinked
 * Property Type: PtypBoolean
 */
#ifndef dispidIsContactLinked
#define dispidIsContactLinked 0x80E0000B
#endif
/*
 * Description: Indicates whether the object represents an exception (including an orphan instance).
 * Alternate Names: PidLidIsException
 * Property Type: PtypBoolean
 */
#ifndef LID_IS_EXCEPTION
#define LID_IS_EXCEPTION 0x000A000B
#endif
/*
 * Description: Specifies whether the object is associated with a recurring series.
 * Alternate Names: PidLidIsRecurring
 * Property Type: PtypBoolean
 */
#ifndef LID_IS_RECURRING
#define LID_IS_RECURRING 0x0005000B
#endif
/*
 * Description: Indicates whether the user did not include any text in the body of the Meeting
 * Alternate Names: PidLidIsSilent
 * Property Type: PtypBoolean
 */
#ifndef LID_IS_SILENT
#define LID_IS_SILENT 0x0004000B
#endif
/*
 * Description: Indicates whether the user did not include any text in the body of the Meeting
 * Alternate Names: PidLidLinkedTaskItems
 * Property Type: PtypMultipleBinary
 */
#ifndef dispidLinkedTaskItems
#define dispidLinkedTaskItems 0x820C1102
#endif
/*
 * Description: Specifies the location of the event.
 * Alternate Names: PidLidLocation
 * Property Type: PtypString
 */
#ifndef dispidLocation
#define dispidLocation 0x8208001F
#endif
/*
 * Description: Indicates whether the document was sent by email or posted to a server folder during
 * Alternate Names: PidLidLogDocumentPosted
 * Property Type: PtypBoolean
 */
#ifndef dispidLogDocPosted
#define dispidLogDocPosted 0x8711000B
#endif
/*
 * Description: Indicates whether the document was printed during journaling.
 * Alternate Names: PidLidLogDocumentPrinted
 * Property Type: PtypBoolean
 */
#ifndef dispidLogDocPrinted
#define dispidLogDocPrinted 0x870E000B
#endif
/*
 * Description: Indicates whether the document was sent to a routing recipient during journaling.
 * Alternate Names: PidLidLogDocumentRouted
 * Property Type: PtypBoolean
 */
#ifndef dispidLogDocRouted
#define dispidLogDocRouted 0x8710000B
#endif
/*
 * Description: Indicates whether the document was saved during journaling.
 * Alternate Names: PidLidLogDocumentSaved
 * Property Type: PtypBoolean
 */
#ifndef dispidLogDocSaved
#define dispidLogDocSaved 0x870F000B
#endif
/*
 * Description: Contains the duration, in minutes, of the activity.
 * Alternate Names: PidLidLogDuration
 * Property Type: PtypInteger32
 */
#ifndef dispidLogDuration
#define dispidLogDuration 0x87070003
#endif
/*
 * Description: Contains the time, in UTC, at which the activity ended.
 * Alternate Names: PidLidLogEnd
 * Property Type: PtypTime
 */
#ifndef dispidLogEnd
#define dispidLogEnd 0x87080040
#endif
/*
 * Description: Contains metadata about the Journal object.
 * Alternate Names: PidLidLogFlags
 * Property Type: PtypInteger32
 */
#ifndef dispidLogFlags
#define dispidLogFlags 0x870C0003
#endif
/*
 * Description: Contains the time, in UTC, at which the activity began.
 * Alternate Names: PidLidLogStart
 * Property Type: PtypTime
 */
#ifndef dispidLogStart
#define dispidLogStart 0x87060040
#endif
/*
 * Description: Briefly describes the journal activity that is being recorded.
 * Alternate Names: PidLidLogType
 * Property Type: PtypString
 */
#ifndef dispidLogType
#define dispidLogType 0x8700001F
#endif
/*
 * Description: Contains an expanded description of the journal activity that is being recorded.
 * Alternate Names: PidLidLogTypeDesc
 * Property Type: PtypString
 */
#ifndef dispidLogTypeDesc
#define dispidLogTypeDesc 0x8712001F
#endif
/*
 * Description: Indicates the type of Meeting Request object or Meeting Update object.
 * Alternate Names: PidLidMeetingType
 * Property Type: PtypInteger32
 */
#ifndef dispidMeetingType
#define dispidMeetingType 0x00260003
#endif
/*
 * Description: Specifies the URL of the Meeting Workspace that is associated with a Calendar
 * Alternate Names: PidLidMeetingWorkspaceUrl
 * Property Type: PtypString
 */
#ifndef dispidMWSURL
#define dispidMWSURL 0x8209001F
#endif
/*
 * Description: Indicates the monthly interval of the appointment or meeting.
 * Alternate Names: PidLidMonthInterval
 * Property Type: PtypInteger16
 */
#ifndef LID_MONTH_INTERVAL
#define LID_MONTH_INTERVAL 0x00130002
#endif
/*
 * Description: Indicates the month of the year in which the appointment or meeting occurs.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidLidMonthOfYear
#define PidLidMonthOfYear 0x10060003
#endif
/*
 * Description: Indicates the calculated month of the year in which the appointment or meeting occurs.
 * Alternate Names: PidLidMonthOfYearMask
 * Property Type: PtypInteger32
 */
#ifndef LID_MOY_MASK
#define LID_MOY_MASK 0x00170003
#endif
/*
 * Description: Specifies the URL to be launched when the user joins the meeting.
 * Alternate Names: PidLidNetShowUrl
 * Property Type: PtypString
 */
#ifndef dispidNetShowURL
#define dispidNetShowURL 0x8248001F
#endif
/*
 * Description: Indicates whether the recurrence pattern has an end date.
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidLidNoEndDateFlag
#define PidLidNoEndDateFlag 0x100B000B
#endif
/*
 * Description: Contains a list of all of the unsendable attendees who are also resources.
 * Alternate Names: PidLidNonSendableBcc
 * Property Type: PtypString
 */
#ifndef dispidNonSendableBCC
#define dispidNonSendableBCC 0x8538001F
#endif
/*
 * Description: Contains a list of all of the unsendable attendees who are also optional attendees.
 * Alternate Names: PidLidNonSendableCc
 * Property Type: PtypString
 */
#ifndef dispidNonSendableCC
#define dispidNonSendableCC 0x8537001F
#endif
/*
 * Description: Contains a list of all of the unsendable attendees who are also required attendees.
 * Alternate Names: PidLidNonSendableTo
 * Property Type: PtypString
 */
#ifndef dispidNonSendableTo
#define dispidNonSendableTo 0x8536001F
#endif
/*
 * Description: Contains the value from the response table.
 * Alternate Names: PidLidNonSendBccTrackStatus
 * Property Type: PtypMultipleInteger32
 */
#ifndef dispidNonSendBccTrackStatus
#define dispidNonSendBccTrackStatus 0x85451003
#endif
/*
 * Description: Contains the value from the response table.
 * Alternate Names: PidLidNonSendCcTrackStatus
 * Property Type: PtypMultipleInteger32
 */
#ifndef dispidNonSendCcTrackStatus
#define dispidNonSendCcTrackStatus 0x85441003
#endif
/*
 * Description: Contains the value from the response table.
 * Alternate Names: PidLidNonSendToTrackStatus
 * Property Type: PtypMultipleInteger32
 */
#ifndef dispidNonSendToTrackStatus
#define dispidNonSendToTrackStatus 0x85431003
#endif
/*
 * Description: Specifies the suggested background color of the Note object.
 * Alternate Names: PidLidNoteColor
 * Property Type: PtypInteger32
 */
#ifndef dispidNoteColor
#define dispidNoteColor 0x8B000003
#endif
/*
 * Description: Specifies the height of the visible message window in pixels.
 * Alternate Names: PidLidNoteHeight
 * Property Type: PtypInteger32
 */
#ifndef dispidNoteHeight
#define dispidNoteHeight 0x8B030003
#endif
/*
 * Description: Specifies the width of the visible message window in pixels.
 * Alternate Names: PidLidNoteWidth
 * Property Type: PtypInteger32
 */
#ifndef dispidNoteWidth
#define dispidNoteWidth 0x8B020003
#endif
/*
 * Description: Specifies the distance, in pixels, from the left edge of the screen that a user interface
 * Alternate Names: PidLidNoteX
 * Property Type: PtypInteger32
 */
#ifndef dispidNoteX
#define dispidNoteX 0x8B040003
#endif
/*
 * Description: Specifies the distance, in pixels, from the top edge of the screen that a user interface
 * Alternate Names: PidLidNoteY
 * Property Type: PtypInteger32
 */
#ifndef dispidNoteY
#define dispidNoteY 0x8B050003
#endif
/*
 * Description: Indicates the number of occurrences in the recurring appointment or meeting.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidLidOccurrences
#define PidLidOccurrences 0x10050003
#endif
/*
 * Description: Indicates the original value of the PidLidLocation property (section 2.159) before a
 * Alternate Names: PidLidOldLocation
 * Property Type: PtypString
 */
#ifndef dispidOldLocation
#define dispidOldLocation 0x0028001F
#endif
/*
 * Description: Indicates the recurrence pattern for the appointment or meeting.
 * Alternate Names: PidLidOldRecurrenceType
 * Property Type: PtypInteger16
 */
#ifndef LID_RECUR_TYPE
#define LID_RECUR_TYPE 0x00180002
#endif
/*
 * Description: Indicates the original value of the PidLidAppointmentEndWhole property (section
 * Alternate Names: PidLidOldWhenEndWhole
 * Property Type: PtypTime
 */
#ifndef dispidOldWhenEndWhole
#define dispidOldWhenEndWhole 0x002A0040
#endif
/*
 * Description: Indicates the original value of the PidLidAppointmentStartWhole property (section
 * Alternate Names: PidLidOldWhenStartWhole
 * Property Type: PtypTime
 */
#ifndef dispidOldWhenStartWhole
#define dispidOldWhenStartWhole 0x00290040
#endif
/*
 * Description: Specifies the password for a meeting on which the PidLidConferencingType property
 * Alternate Names: PidLidOnlinePassword
 * Property Type: PtypString
 */
#ifndef dispidOnlinePassword
#define dispidOnlinePassword 0x8249001F
#endif
/*
 * Description: Specifies optional attendees.
 * Alternate Names: PidLidOptionalAttendees
 * Property Type: PtypString
 */
#ifndef LID_OPTIONAL_ATTENDEES
#define LID_OPTIONAL_ATTENDEES 0x0007001F
#endif
/*
 * Description: Specifies the email address of the organizer.
 * Alternate Names: PidLidOrganizerAlias
 * Property Type: PtypString
 */
#ifndef dispidOrgAlias
#define dispidOrgAlias 0x8243001F
#endif
/*
 * Description: Specifies the EntryID of the delegator’s message store.
 * Alternate Names: 
 * Property Type: PtypBinary
 */
#ifndef PidLidOriginalStoreEntryId
#define PidLidOriginalStoreEntryId 0x82370102
#endif
/*
 * Description: Specifies the complete address of the other address of the contact.
 * Alternate Names: PidLidOtherAddress
 * Property Type: PtypString
 */
#ifndef dispidOtherAddress
#define dispidOtherAddress 0x801C001F
#endif
/*
 * Description: Specifies the country code portion of the other address of the contact.
 * Alternate Names: PidLidOtherAddressCountryCode
 * Property Type: PtypString
 */
#ifndef dispidOtherAddressCountryCode
#define dispidOtherAddressCountryCode 0x80DC001F
#endif
/*
 * Description: Specifies the date and time at which a Meeting Request object was sent by the
 * Alternate Names: LID_OWNER_CRITICAL_CHANGE
 * Property Type: PtypTime
 */
#ifndef PidLidOwnerCriticalChange
#define PidLidOwnerCriticalChange 0x001A0040
#endif
/*
 * Description: Indicates the name of the owner of the mailbox.
 * Alternate Names: PidLidOwnerName
 * Property Type: PtypString
 */
#ifndef dispidOwnerName
#define dispidOwnerName 0x822E001F
#endif
/*
 * Description: Specifies the synchronization state of the Document object that is in the Document
 * Alternate Names: PidLidPendingStateForSiteMailboxDocument
 * Property Type: PtypInteger32
 */
#ifndef dispidPendingStateforTMDocument
#define dispidPendingStateforTMDocument 0x85E00003
#endif
/*
 * Description: Indicates whether a time-flagged Message object is complete.
 * Alternate Names: PidLidPercentComplete
 * Property Type: PtypFloating64
 */
#ifndef dispidPercentComplete
#define dispidPercentComplete 0x81020005
#endif
/*
 * Description: Specifies which physical address is the mailing address for this contact.
 * Alternate Names: PidLidPostalAddressId
 * Property Type: PtypInteger32
 */
#ifndef dispidPostalAddressId
#define dispidPostalAddressId 0x80220003
#endif
/*
 * Description: Contains the contents of the title field from the XML of the Atom feed or RSS channel.
 * Alternate Names: PidLidPostRssChannel
 * Property Type: PtypString
 */
#ifndef dispidPostRssChannel
#define dispidPostRssChannel 0x8904001F
#endif
/*
 * Description: Contains the URL of the RSS or Atom feed from which the XML file came.
 * Alternate Names: PidLidPostRssChannelLink
 * Property Type: PtypString
 */
#ifndef dispidPostRssChannelLink
#define dispidPostRssChannelLink 0x8900001F
#endif
/*
 * Description: Contains a unique identifier for the RSS object.
 * Alternate Names: PidLidPostRssItemGuid
 * Property Type: PtypString
 */
#ifndef dispidPostRssItemGuid
#define dispidPostRssItemGuid 0x8903001F
#endif
/*
 * Description: Contains a hash of the feed XML computed by using an implementation-dependent
 * Alternate Names: PidLidPostRssItemHash
 * Property Type: PtypInteger32
 */
#ifndef dispidPostRssItemHash
#define dispidPostRssItemHash 0x89020003
#endif
/*
 * Description: Contains the URL of the link from an RSS or Atom item.
 * Alternate Names: PidLidPostRssItemLink
 * Property Type: PtypString
 */
#ifndef dispidPostRssItemLink
#define dispidPostRssItemLink 0x8901001F
#endif
/*
 * Description: Contains the item element and all of its sub-elements from an RSS feed, or the entry
 * Alternate Names: PidLidPostRssItemXml
 * Property Type: PtypString
 */
#ifndef dispidPostRssItemXml
#define dispidPostRssItemXml 0x8905001F
#endif
/*
 * Description: Contains the user's preferred name for the RSS or Atom subscription.
 * Alternate Names: PidLidPostRssSubscription
 * Property Type: PtypString
 */
#ifndef dispidPostRssSubscription
#define dispidPostRssSubscription 0x8906001F
#endif
/*
 * Description: Indicates whether the end user wishes for this Message object to be hidden from other
 * Alternate Names: PidLidPrivate
 * Property Type: PtypBoolean
 */
#ifndef dispidPrivate
#define dispidPrivate 0x8506000B
#endif
/*
 * Description: Indicates that the Meeting Response object was out-of-date when it was received.
 * Alternate Names: PidLidPromptSendUpdate
 * Property Type: PtypBoolean
 */
#ifndef dispidPromptSendUpdate
#define dispidPromptSendUpdate 0x8045000B
#endif
/*
 * Description: Identifies the length, in minutes, of the appointment or meeting.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidLidRecurrenceDuration
#define PidLidRecurrenceDuration 0x100D0003
#endif
/*
 * Description: Specifies a description of the recurrence pattern of the Calendar object.
 * Alternate Names: PidLidRecurrencePattern
 * Property Type: PtypString
 */
#ifndef dispidRecurPattern
#define dispidRecurPattern 0x8232001F
#endif
/*
 * Description: Specifies the recurrence type of the recurring series.
 * Alternate Names: PidLidRecurrenceType
 * Property Type: PtypInteger32
 */
#ifndef dispidRecurType
#define dispidRecurType 0x82310003
#endif
/*
 * Description: Specifies whether the object represents a recurring series.
 * Alternate Names: PidLidRecurring
 * Property Type: PtypBoolean
 */
#ifndef dispidRecurring
#define dispidRecurring 0x8223000B
#endif
/*
 * Description: Specifies the value of the EntryID of the Contact object unless the Contact object is a
 * Alternate Names: PidLidReferenceEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidReferenceEID
#define dispidReferenceEID 0x85BD0102
#endif
/*
 * Description: Specifies the interval, in minutes, between the time at which the reminder first
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidLidReminderDelta
#define PidLidReminderDelta 0x85010003
#endif
/*
 * Description: Specifies the filename of the sound that a client is to play when the reminder for that
 * Alternate Names: PidLidReminderFileParameter
 * Property Type: PtypString
 */
#ifndef dispidReminderFileParam
#define dispidReminderFileParam 0x851F001F
#endif
/*
 * Description: Specifies whether the client is to respect the current values of the
 * Alternate Names: PidLidReminderOverride
 * Property Type: PtypBoolean
 */
#ifndef dispidReminderOverride
#define dispidReminderOverride 0x851C000B
#endif
/*
 * Description: Specifies whether the client is to play a sound when the reminder becomes overdue.
 * Alternate Names: PidLidReminderPlaySound
 * Property Type: PtypBoolean
 */
#ifndef dispidReminderPlaySound
#define dispidReminderPlaySound 0x851E000B
#endif
/*
 * Description: Specifies whether a reminder is set on the object.
 * Alternate Names: PidLidReminderSet
 * Property Type: PtypBoolean
 */
#ifndef dispidReminderSet
#define dispidReminderSet 0x8503000B
#endif
/*
 * Description: Specifies the point in time when a reminder transitions from pending to overdue.
 * Alternate Names: PidLidReminderSignalTime
 * Property Type: PtypTime
 */
#ifndef dispidReminderNextTime
#define dispidReminderNextTime 0x85600040
#endif
/*
 * Description: Specifies the initial signal time for objects that are not Calendar objects.
 * Alternate Names: PidLidReminderTime
 * Property Type: PtypTime
 */
#ifndef dispidReminderTime
#define dispidReminderTime 0x85020040
#endif
/*
 * Description: Indicates the time and date of the reminder for the appointment or meeting.
 * Alternate Names: PidLidReminderTimeDate
 * Property Type: PtypTime
 */
#ifndef dispidReminderTimeDate
#define dispidReminderTimeDate 0x85050040
#endif
/*
 * Description: Indicates the time of the reminder for the appointment or meeting.
 * Alternate Names: PidLidReminderTimeTime
 * Property Type: PtypTime
 */
#ifndef dispidReminderTimeTime
#define dispidReminderTimeTime 0x85040040
#endif
/*
 * Description: This property is not set and, if set, is ignored.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidLidReminderType
#define PidLidReminderType 0x851D0003
#endif
/*
 * Description: Indicates the remote status of the calendar item.
 * Alternate Names: PidLidRemoteStatus
 * Property Type: PtypInteger32
 */
#ifndef dispidRemoteStatus
#define dispidRemoteStatus 0x85110003
#endif
/*
 * Description: Identifies required attendees for the appointment or meeting.
 * Alternate Names: PidLidRequiredAttendees
 * Property Type: PtypString
 */
#ifndef LID_REQUIRED_ATTENDEES
#define LID_REQUIRED_ATTENDEES 0x0006001F
#endif
/*
 * Description: Identifies resource attendees for the appointment or meeting.
 * Alternate Names: PidLidResourceAttendees
 * Property Type: PtypString
 */
#ifndef LID_RESOURCE_ATTENDEES
#define LID_RESOURCE_ATTENDEES 0x0008001F
#endif
/*
 * Description: Specifies the response status of an attendee.
 * Alternate Names: PidLidResponseStatus
 * Property Type: PtypInteger32
 */
#ifndef dispidResponseStatus
#define dispidResponseStatus 0x82180003
#endif
/*
 * Description: Indicates whether the Meeting Request object or Meeting Update object has been
 * Alternate Names: PidLidServerProcessed
 * Property Type: PtypBoolean
 */
#ifndef dispidExchangeProcessed
#define dispidExchangeProcessed 0x85CC000B
#endif
/*
 * Description: Indicates what processing actions have been taken on this Meeting Request object
 * Alternate Names: PidLidServerProcessingActions
 * Property Type: PtypInteger32
 */
#ifndef dispidExchangeProcessingAction
#define dispidExchangeProcessingAction 0x85CD0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingAnonymity
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingAnonymity
#define dispidSharingAnonymity 0x8A190003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingBindingEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidSharingBindingEid
#define dispidSharingBindingEid 0x8A2D0102
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingBrowseUrl
 * Property Type: PtypString
 */
#ifndef dispidSharingBrowseUrl
#define dispidSharingBrowseUrl 0x8A51001F
#endif
/*
 * Description: Indicates that the Message object relates to a special folder.
 * Alternate Names: PidLidSharingCapabilities
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingCaps
#define dispidSharingCaps 0x8A170003
#endif
/*
 * Description: Contains a zero-length string.
 * Alternate Names: PidLidSharingConfigurationUrl
 * Property Type: PtypString
 */
#ifndef dispidSharingConfigUrl
#define dispidSharingConfigUrl 0x8A24001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingDataRangeEnd
 * Property Type: PtypTime
 */
#ifndef dispidSharingDataRangeEnd
#define dispidSharingDataRangeEnd 0x8A450040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingDataRangeStart
 * Property Type: PtypTime
 */
#ifndef dispidSharingDataRangeStart
#define dispidSharingDataRangeStart 0x8A440040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingDetail
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingDetail
#define dispidSharingDetail 0x8A2B0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingExtensionXml
 * Property Type: PtypString
 */
#ifndef dispidSharingExtXml
#define dispidSharingExtXml 0x8A21001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingFilter
 * Property Type: PtypBinary
 */
#ifndef dispidSharingFilter
#define dispidSharingFilter 0x8A130102
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingFlags
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingFlags
#define dispidSharingFlags 0x8A0A0003
#endif
/*
 * Description: Indicates the type of Sharing Message object.
 * Alternate Names: PidLidSharingFlavor
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingFlavor
#define dispidSharingFlavor 0x8A180003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingFolderEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidSharingFolderEid
#define dispidSharingFolderEid 0x8A150102
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingIndexEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidSharingIndexEid
#define dispidSharingIndexEid 0x8A2E0102
#endif
/*
 * Description: Contains the value of the PidTagEntryId property (section 2.683) for the Address
 * Alternate Names: PidLidSharingInitiatorEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidSharingInitiatorEid
#define dispidSharingInitiatorEid 0x8A090102
#endif
/*
 * Description: Contains the value of the PidTagDisplayName property (section 2.676) from the
 * Alternate Names: PidLidSharingInitiatorName
 * Property Type: PtypString
 */
#ifndef dispidSharingInitiatorName
#define dispidSharingInitiatorName 0x8A07001F
#endif
/*
 * Description: Contains the value of the PidTagSmtpAddress property (section 2.1020) from the
 * Alternate Names: PidLidSharingInitiatorSmtp
 * Property Type: PtypString
 */
#ifndef dispidSharingInitiatorSmtp
#define dispidSharingInitiatorSmtp 0x8A08001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingInstanceGuid
 * Property Type: PtypBinary
 */
#ifndef dispidSharingInstanceGuid
#define dispidSharingInstanceGuid 0x8A1C0102
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLastAutoSyncTime
 * Property Type: PtypTime
 */
#ifndef dispidSharingLastAutoSync
#define dispidSharingLastAutoSync 0x8A550040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLastSyncTime
 * Property Type: PtypTime
 */
#ifndef dispidSharingLastSync
#define dispidSharingLastSync 0x8A1F0040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLocalComment
 * Property Type: PtypString
 */
#ifndef dispidSharingLocalComment
#define dispidSharingLocalComment 0x8A4D001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLocalLastModificationTime
 * Property Type: PtypTime
 */
#ifndef dispidSharingLocalLastMod
#define dispidSharingLocalLastMod 0x8A230040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLocalName
 * Property Type: PtypString
 */
#ifndef dispidSharingLocalName
#define dispidSharingLocalName 0x8A0F001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLocalPath
 * Property Type: PtypString
 */
#ifndef dispidSharingLocalPath
#define dispidSharingLocalPath 0x8A0E001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLocalStoreUid
 * Property Type: PtypString
 */
#ifndef dispidSharingLocalStoreUid
#define dispidSharingLocalStoreUid 0x8A49001F
#endif
/*
 * Description: Contains the value of the PidTagContainerClass property (section 2.642) of the folder
 * Alternate Names: PidLidSharingLocalType
 * Property Type: PtypString
 */
#ifndef dispidSharingLocalType
#define dispidSharingLocalType 0x8A14001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingLocalUid
 * Property Type: PtypString
 */
#ifndef dispidSharingLocalUid
#define dispidSharingLocalUid 0x8A10001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingOriginalMessageEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidSharingOriginalMessageEid
#define dispidSharingOriginalMessageEid 0x8A290102
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingParentBindingEntryId
 * Property Type: PtypBinary
 */
#ifndef dispidSharingParentBindingEid
#define dispidSharingParentBindingEid 0x8A5C0102
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingParticipants
 * Property Type: PtypString
 */
#ifndef dispidSharingParticipants
#define dispidSharingParticipants 0x8A1E001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingPermissions
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingPermissions
#define dispidSharingPermissions 0x8A1B0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingProviderExtension
 * Property Type: PtypString
 */
#ifndef dispidSharingProviderExtension
#define dispidSharingProviderExtension 0x8A0B001F
#endif
/*
 * Description: Contains the value "%xAE.F0.06.00.00.00.00.00.C0.00.00.00.00.00.00.46".
 * Alternate Names: PidLidSharingProviderGuid
 * Property Type: PtypBinary
 */
#ifndef dispidSharingProviderGuid
#define dispidSharingProviderGuid 0x8A010102
#endif
/*
 * Description: Contains a user-displayable name of the sharing provider identified by the
 * Alternate Names: PidLidSharingProviderName
 * Property Type: PtypString
 */
#ifndef dispidSharingProviderName
#define dispidSharingProviderName 0x8A02001F
#endif
/*
 * Description: Contains a URL related to the sharing provider identified by the
 * Alternate Names: PidLidSharingProviderUrl
 * Property Type: PtypString
 */
#ifndef dispidSharingProviderUrl
#define dispidSharingProviderUrl 0x8A03001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRangeEnd
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingRangeEnd
#define dispidSharingRangeEnd 0x8A470003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRangeStart
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingRangeStart
#define dispidSharingRangeStart 0x8A460003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingReciprocation
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingReciprocation
#define dispidSharingReciprocation 0x8A1A0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemoteByteSize
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingRemoteByteSize
#define dispidSharingRemoteByteSize 0x8A4B0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemoteComment
 * Property Type: PtypString
 */
#ifndef dispidSharingRemoteComment
#define dispidSharingRemoteComment 0x8A2F001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemoteCrc
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingRemoteCrc
#define dispidSharingRemoteCrc 0x8A4C0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemoteLastModificationTime
 * Property Type: PtypTime
 */
#ifndef dispidSharingRemoteLastMod
#define dispidSharingRemoteLastMod 0x8A220040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemoteMessageCount
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingRemoteMsgCount
#define dispidSharingRemoteMsgCount 0x8A4F0003
#endif
/*
 * Description: Contains the value of the PidTagDisplayName property (section 2.676) on the folder
 * Alternate Names: PidLidSharingRemoteName
 * Property Type: PtypString
 */
#ifndef dispidSharingRemoteName
#define dispidSharingRemoteName 0x8A05001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemotePass
 * Property Type: PtypString
 */
#ifndef dispidSharingRemotePass
#define dispidSharingRemotePass 0x8A0D001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemotePath
 * Property Type: PtypString
 */
#ifndef dispidSharingRemotePath
#define dispidSharingRemotePath 0x8A04001F
#endif
/*
 * Description: Contains a hexadecimal string representation of the value of the PidTagStoreEntryId
 * Alternate Names: PidLidSharingRemoteStoreUid
 * Property Type: PtypString
 */
#ifndef dispidSharingRemoteStoreUid
#define dispidSharingRemoteStoreUid 0x8A48001F
#endif
/*
 * Description: Contains the same value as the PidLidSharingLocalType property (section 2.259).
 * Alternate Names: PidLidSharingRemoteType
 * Property Type: PtypString
 */
#ifndef dispidSharingRemoteType
#define dispidSharingRemoteType 0x8A1D001F
#endif
/*
 * Description: Contains the EntryID of the folder being shared.
 * Alternate Names: PidLidSharingRemoteUid
 * Property Type: PtypString
 */
#ifndef dispidSharingRemoteUid
#define dispidSharingRemoteUid 0x8A06001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemoteUser
 * Property Type: PtypString
 */
#ifndef dispidSharingRemoteUser
#define dispidSharingRemoteUser 0x8A0C001F
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRemoteVersion
 * Property Type: PtypString
 */
#ifndef dispidSharingRemoteVersion
#define dispidSharingRemoteVersion 0x8A5B001F
#endif
/*
 * Description: Contains the time at which the recipient of the sharing request sent a sharing
 * Alternate Names: PidLidSharingResponseTime
 * Property Type: PtypTime
 */
#ifndef dispidSharingResponseTime
#define dispidSharingResponseTime 0x8A280040
#endif
/*
 * Description: Contains the type of response with which the recipient of the sharing request
 * Alternate Names: PidLidSharingResponseType
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingResponseType
#define dispidSharingResponseType 0x8A270003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingRoamLog
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingRoamLog
#define dispidSharingRoamLog 0x8A4E0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingStart
 * Property Type: PtypTime
 */
#ifndef dispidSharingStart
#define dispidSharingStart 0x8A250040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingStatus
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingStatus
#define dispidSharingStatus 0x8A000003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingStop
 * Property Type: PtypTime
 */
#ifndef dispidSharingStop
#define dispidSharingStop 0x8A260040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingSyncFlags
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingSyncFlags
#define dispidSharingSyncFlags 0x8A600003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingSyncInterval
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingSyncInterval
#define dispidSharingSyncInterval 0x8A2A0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingTimeToLive
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingTimeToLive
#define dispidSharingTimeToLive 0x8A2C0003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingTimeToLiveAuto
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingTimeToLiveAuto
#define dispidSharingTimeToLiveAuto 0x8A560003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingWorkingHoursDays
 * Property Type: PtypInteger32
 */
#ifndef dispidSharingWorkingHoursDays
#define dispidSharingWorkingHoursDays 0x8A420003
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingWorkingHoursEnd
 * Property Type: PtypTime
 */
#ifndef dispidSharingWorkingHoursEnd
#define dispidSharingWorkingHoursEnd 0x8A410040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingWorkingHoursStart
 * Property Type: PtypTime
 */
#ifndef dispidSharingWorkingHoursStart
#define dispidSharingWorkingHoursStart 0x8A400040
#endif
/*
 * Description: Contains a value that is ignored by the server no matter what value is generated by the
 * Alternate Names: PidLidSharingWorkingHoursTimeZone
 * Property Type: PtypBinary
 */
#ifndef dispidSharingWorkingHoursTZ
#define dispidSharingWorkingHoursTZ 0x8A430102
#endif
/*
 * Description: Specifies how a Message object is handled by the client in relation to certain user
 * Alternate Names: PidLidSideEffects
 * Property Type: PtypInteger32
 */
#ifndef dispidSideEffects
#define dispidSideEffects 0x85100003
#endif
/*
 * Description: Indicates that the original MIME message contained a single MIME part.
 * Alternate Names: PidLidSingleBodyICal,IsSingleBodyICal
 * Property Type: PtypBoolean
 */
#ifndef dispidIsSingleBodyICal
#define dispidIsSingleBodyICal 0x827B000B
#endif
/*
 * Description: Indicates whether the Message object has no end-user visible attachments.
 * Alternate Names: PidLidSmartNoAttach
 * Property Type: PtypBoolean
 */
#ifndef dispidSmartNoAttach
#define dispidSmartNoAttach 0x8514000B
#endif
/*
 * Description: Specifies which folder a message was in before it was filtered into the Junk Email folder.
 * Alternate Names: PidLidSpamOriginalFolder
 * Property Type: PtypBinary
 */
#ifndef dispidSpamOriginalFolder
#define dispidSpamOriginalFolder 0x859C0102
#endif
/*
 * Description: Identifies the start date of the recurrence pattern.
 * Alternate Names: PidLidStartRecurrenceDate
 * Property Type: PtypInteger32
 */
#ifndef LID_START_RECUR_DATE
#define LID_START_RECUR_DATE 0x000D0003
#endif
/*
 * Description: Identifies the start time of the recurrence pattern.
 * Alternate Names: PidLidStartRecurrenceTime
 * Property Type: PtypInteger32
 */
#ifndef LID_START_RECUR_TIME
#define LID_START_RECUR_TIME 0x000E0003
#endif
/*
 * Description: Indicates the acceptance state of the task.
 * Alternate Names: PidLidTaskAcceptanceState
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskDelegValue
#define dispidTaskDelegValue 0x812A0003
#endif
/*
 * Description: Indicates whether a task assignee has replied to a task request for this Task object.
 * Alternate Names: PidLidTaskAccepted
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskAccepted
#define dispidTaskAccepted 0x8108000B
#endif
/*
 * Description: Indicates the number of minutes that the user actually spent working on a task.
 * Alternate Names: PidLidTaskActualEffort
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskActualEffort
#define dispidTaskActualEffort 0x81100003
#endif
/*
 * Description: Specifies the name of the user that last assigned the task.
 * Alternate Names: PidLidTaskAssigner
 * Property Type: PtypString
 */
#ifndef dispidTaskDelegator
#define dispidTaskDelegator 0x8121001F
#endif
/*
 * Description: Contains a stack of entries, each of which represents a task assigner.
 * Alternate Names: PidLidTaskAssigners
 * Property Type: PtypBinary
 */
#ifndef dispidTaskMyDelegators
#define dispidTaskMyDelegators 0x81170102
#endif
/*
 * Description: Indicates that the task is complete.
 * Alternate Names: PidLidTaskComplete
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskComplete
#define dispidTaskComplete 0x811C000B
#endif
/*
 * Description: The client can set this property, but it has no impact on the Task-Related Objects
 * Alternate Names: PidLidTaskCustomFlags
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskCustomFlags
#define dispidTaskCustomFlags 0x81390003
#endif
/*
 * Description: Specifies the date when the user completed work on the task.
 * Alternate Names: PidLidTaskDateCompleted
 * Property Type: PtypTime
 */
#ifndef dispidTaskDateCompleted
#define dispidTaskDateCompleted 0x810F0040
#endif
/*
 * Description: Indicates whether new occurrences remain to be generated.
 * Alternate Names: PidLidTaskDeadOccurrence
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskDeadOccur
#define dispidTaskDeadOccur 0x8109000B
#endif
/*
 * Description: Specifies the date by which the user expects work on the task to be complete.
 * Alternate Names: PidLidTaskDueDate
 * Property Type: PtypTime
 */
#ifndef dispidTaskDueDate
#define dispidTaskDueDate 0x81050040
#endif
/*
 * Description: Indicates the number of minutes that the user expects to work on a task.
 * Alternate Names: PidLidTaskEstimatedEffort
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskEstimatedEffort
#define dispidTaskEstimatedEffort 0x81110003
#endif
/*
 * Description: Indicates that the Task object was originally created by the action of the current user
 * Alternate Names: PidLidTaskFCreator
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskFCreator
#define dispidTaskFCreator 0x811E000B
#endif
/*
 * Description: Indicates the accuracy of the PidLidTaskOwner property (section 2.328).
 * Alternate Names: PidLidTaskFFixOffline
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskFFixOffline
#define dispidTaskFFixOffline 0x812C000B
#endif
/*
 * Description: Indicates whether the task includes a recurrence pattern.
 * Alternate Names: PidLidTaskFRecurring
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskFRecur
#define dispidTaskFRecur 0x8126000B
#endif
/*
 * Description: Contains a unique GUID for this task, which is used to locate an existing task upon
 * Alternate Names: PidLidTaskGlobalId
 * Property Type: PtypBinary
 */
#ifndef dispidTaskGlobalObjId
#define dispidTaskGlobalObjId 0x85190102
#endif
/*
 * Description: Indicates the type of change that was last made to the Task object.
 * Alternate Names: PidLidTaskHistory
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskHistory
#define dispidTaskHistory 0x811A0003
#endif
/*
 * Description: Contains the name of the user who most recently assigned the task, or the user to
 * Alternate Names: PidLidTaskLastDelegate
 * Property Type: PtypString
 */
#ifndef dispidTaskLastDelegate
#define dispidTaskLastDelegate 0x8125001F
#endif
/*
 * Description: Contains the date and time of the most recent change made to the Task object.
 * Alternate Names: PidLidTaskLastUpdate
 * Property Type: PtypTime
 */
#ifndef dispidTaskLastUpdate
#define dispidTaskLastUpdate 0x81150040
#endif
/*
 * Description: Contains the name of the most recent user to have been the owner of the task.
 * Alternate Names: PidLidTaskLastUser
 * Property Type: PtypString
 */
#ifndef dispidTaskLastUser
#define dispidTaskLastUser 0x8122001F
#endif
/*
 * Description: Specifies the assignment status of the embedded Task object.
 * Alternate Names: PidLidTaskMode
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskMode
#define dispidTaskMode 0x85180003
#endif
/*
 * Description: Provides optimization hints about the recipients of a Task object.
 * Alternate Names: PidLidTaskMultipleRecipients
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskMultRecips
#define dispidTaskMultRecips 0x81200003
#endif
/*
 * Description: Not used. The client can set this property, but it has no impact on the Task-Related
 * Alternate Names: PidLidTaskNoCompute
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskNoCompute
#define dispidTaskNoCompute 0x8124000B
#endif
/*
 * Description: Provides an aid to custom sorting of Task objects.
 * Alternate Names: PidLidTaskOrdinal
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskOrdinal
#define dispidTaskOrdinal 0x81230003
#endif
/*
 * Description: Contains the name of the owner of the task.
 * Alternate Names: PidLidTaskOwner
 * Property Type: PtypString
 */
#ifndef dispidTaskOwner
#define dispidTaskOwner 0x811F001F
#endif
/*
 * Description: Indicates the role of the current user relative to the Task object.
 * Alternate Names: PidLidTaskOwnership
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskOwnership
#define dispidTaskOwnership 0x81290003
#endif
/*
 * Description: Contains a RecurrencePattern structure that provides information about recurring
 * Alternate Names: PidLidTaskRecurrence
 * Property Type: PtypBinary
 */
#ifndef dispidTaskRecur
#define dispidTaskRecur 0x81160102
#endif
/*
 * Description: Indicates whether future instances of recurring tasks need reminders, even though
 * Alternate Names: PidLidTaskResetReminder
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskResetReminder
#define dispidTaskResetReminder 0x8107000B
#endif
/*
 * Description: Not used. The client can set this property, but it has no impact on the Task-Related
 * Alternate Names: PidLidTaskRole
 * Property Type: PtypString
 */
#ifndef dispidTaskRole
#define dispidTaskRole 0x8127001F
#endif
/*
 * Description: Specifies the date on which the user expects work on the task to begin.
 * Alternate Names: PidLidTaskStartDate
 * Property Type: PtypTime
 */
#ifndef dispidTaskStartDate
#define dispidTaskStartDate 0x81040040
#endif
/*
 * Description: Indicates the current assignment state of the Task object.
 * Alternate Names: PidLidTaskState
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskState
#define dispidTaskState 0x81130003
#endif
/*
 * Description: Specifies the status of a task.
 * Alternate Names: PidLidTaskStatus
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskStatus
#define dispidTaskStatus 0x81010003
#endif
/*
 * Description: Indicates whether the task assignee has been requested to send an email message
 * Alternate Names: PidLidTaskStatusOnComplete
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskSOC
#define dispidTaskSOC 0x8119000B
#endif
/*
 * Description: Indicates whether the task assignee has been requested to send a task update when the
 * Alternate Names: PidLidTaskUpdates
 * Property Type: PtypBoolean
 */
#ifndef dispidTaskUpdates
#define dispidTaskUpdates 0x811B000B
#endif
/*
 * Description: Indicates which copy is the latest update of a Task object.
 * Alternate Names: PidLidTaskVersion
 * Property Type: PtypInteger32
 */
#ifndef dispidTaskVersion
#define dispidTaskVersion 0x81120003
#endif
/*
 * Description: This property is set by the client but is ignored by the server.
 * Alternate Names: PidLidTeamTask
 * Property Type: PtypBoolean
 */
#ifndef dispidTeamTask
#define dispidTeamTask 0x8103000B
#endif
/*
 * Description: Specifies information about the time zone of a recurring meeting.
 * Alternate Names: PidLidTimeZone
 * Property Type: PtypInteger32
 */
#ifndef LID_TIME_ZONE
#define LID_TIME_ZONE 0x000C0003
#endif
/*
 * Description: Specifies a human-readable description of the time zone that is represented by the data
 * Alternate Names: PidLidTimeZoneDescription
 * Property Type: PtypString
 */
#ifndef dispidTimeZoneDesc
#define dispidTimeZoneDesc 0x8234001F
#endif
/*
 * Description: Specifies time zone information for a recurring meeting.
 * Alternate Names: PidLidTimeZoneStruct
 * Property Type: PtypBinary
 */
#ifndef dispidTimeZoneStruct
#define dispidTimeZoneStruct 0x82330102
#endif
/*
 * Description: Contains a list of all of the sendable attendees who are also required attendees.
 * Alternate Names: PidLidToAttendeesString
 * Property Type: PtypString
 */
#ifndef dispidToAttendeesString
#define dispidToAttendeesString 0x823B001F
#endif
/*
 * Description: Contains the current time, in UTC, which is used to determine the sort order of objects
 * Alternate Names: PidLidToDoOrdinalDate
 * Property Type: PtypTime
 */
#ifndef dispidToDoOrdinalDate
#define dispidToDoOrdinalDate 0x85A00040
#endif
/*
 * Description: Contains the numerals 0 through 9 that are used to break a tie when the
 * Alternate Names: PidLidToDoSubOrdinal
 * Property Type: PtypString
 */
#ifndef dispidToDoSubOrdinal
#define dispidToDoSubOrdinal 0x85A1001F
#endif
/*
 * Description: Contains user-specifiable text to identify this Message object in a consolidated to-do
 * Alternate Names: PidLidToDoTitle
 * Property Type: PtypString
 */
#ifndef dispidToDoTitle
#define dispidToDoTitle 0x85A4001F
#endif
/*
 * Description: Specifies whether Transport Neutral Encapsulation Format (TNEF) is to be included
 * Alternate Names: PidLidUseTnef
 * Property Type: PtypBoolean
 */
#ifndef dispidUseTNEF
#define dispidUseTNEF 0x8582000B
#endif
/*
 * Description: Contains the value of the PidTagMessageDeliveryTime property (section 2.789)
 * Alternate Names: PidLidValidFlagStringProof
 * Property Type: PtypTime
 */
#ifndef dispidValidFlagStringProof
#define dispidValidFlagStringProof 0x85BF0040
#endif
/*
 * Description: Specifies the voting option that a respondent has selected.
 * Alternate Names: PidLidVerbResponse
 * Property Type: PtypString
 */
#ifndef dispidVerbResponse
#define dispidVerbResponse 0x8524001F
#endif
/*
 * Description: Specifies what voting responses the user can make in response to the message.
 * Alternate Names: PidLidVerbStream
 * Property Type: PtypBinary
 */
#ifndef dispidVerbStream
#define dispidVerbStream 0x85200102
#endif
/*
 * Description: Specifies the wedding anniversary of the contact, at midnight in the client's local time
 * Alternate Names: PidLidWeddingAnniversaryLocal
 * Property Type: PtypTime
 */
#ifndef dispidApptAnniversaryLocal
#define dispidApptAnniversaryLocal 0x80DF0040
#endif
/*
 * Description: Identifies the number of weeks that occur between each meeting.
 * Alternate Names: PidLidWeekInterval
 * Property Type: PtypInteger16
 */
#ifndef LID_WEEK_INTERVAL
#define LID_WEEK_INTERVAL 0x00120002
#endif
/*
 * Description: Contains the value of the PidLidLocation property (section 2.159) from the associated
 * Alternate Names: PidLidWhere
 * Property Type: PtypString
 */
#ifndef LID_WHERE
#define LID_WHERE 0x0002001F
#endif
/*
 * Description: Specifies the complete address of the work address of the contact.
 * Alternate Names: PidLidWorkAddress
 * Property Type: PtypString
 */
#ifndef dispidWorkAddress
#define dispidWorkAddress 0x801B001F
#endif
/*
 * Description: Specifies the city or locality portion of the work address of the contact.
 * Alternate Names: PidLidWorkAddressCity
 * Property Type: PtypString
 */
#ifndef dispidWorkAddressCity
#define dispidWorkAddressCity 0x8046001F
#endif
/*
 * Description: Specifies the country or region portion of the work address of the contact.
 * Alternate Names: PidLidWorkAddressCountry
 * Property Type: PtypString
 */
#ifndef dispidWorkAddressCountry
#define dispidWorkAddressCountry 0x8049001F
#endif
/*
 * Description: Specifies the country code portion of the work address of the contact.
 * Alternate Names: PidLidWorkAddressCountryCode
 * Property Type: PtypString
 */
#ifndef dispidWorkAddressCountryCode
#define dispidWorkAddressCountryCode 0x80DB001F
#endif
/*
 * Description: Specifies the postal code (ZIP code) portion of the work address of the contact.
 * Alternate Names: PidLidWorkAddressPostalCode
 * Property Type: PtypString
 */
#ifndef dispidWorkAddressPostalCode
#define dispidWorkAddressPostalCode 0x8048001F
#endif
/*
 * Description: Specifies the post office box portion of the work address of the contact.
 * Alternate Names: PidLidWorkAddressPostOfficeBox
 * Property Type: PtypString
 */
#ifndef dispidWorkAddressPostOfficeBox
#define dispidWorkAddressPostOfficeBox 0x804A001F
#endif
/*
 * Description: Specifies the state or province portion of the work address of the contact.
 * Alternate Names: PidLidWorkAddressState
 * Property Type: PtypString
 */
#ifndef dispidWorkAddressState
#define dispidWorkAddressState 0x8047001F
#endif
/*
 * Description: Specifies the street portion of the work address of the contact.
 * Alternate Names: PidLidWorkAddressStreet
 * Property Type: PtypString
 */
#ifndef dispidWorkAddressStreet
#define dispidWorkAddressStreet 0x8045001F
#endif
/*
 * Description: Indicates the yearly interval of the appointment or meeting.
 * Alternate Names: PidLidYearInterval
 * Property Type: PtypInteger16
 */
#ifndef LID_YEAR_INTERVAL
#define LID_YEAR_INTERVAL 0x00140002
#endif
/*
 * Description: Specifies the phonetic pronunciation of the company name of the contact.
 * Alternate Names: PidLidYomiCompanyName
 * Property Type: PtypString
 */
#ifndef dispidYomiCompanyName
#define dispidYomiCompanyName 0x802E001F
#endif
/*
 * Description: Specifies the phonetic pronunciation of the given name of the contact.
 * Alternate Names: PidLidYomiFirstName
 * Property Type: PtypString
 */
#ifndef dispidYomiFirstName
#define dispidYomiFirstName 0x802C001F
#endif
/*
 * Description: Specifies the phonetic pronunciation of the surname of the contact.
 * Alternate Names: PidLidYomiLastName
 * Property Type: PtypString
 */
#ifndef dispidYomiLastName
#define dispidYomiLastName 0x802D001F
#endif
/*
 * Description: Indicates the operations available to the client for the object.
 * Alternate Names: PidTagAccess,ptagAccess
 * Property Type: PtypInteger32
 */
#ifndef PR_ACCESS
#define PR_ACCESS 0x0FF40003
#endif
/*
 * Description: Contains a permissions list for a folder.
 * Alternate Names: PidTagAccessControlListData,ptagACLData
 * Property Type: PtypBinary
 */
#ifndef PR_ACL_DATA
#define PR_ACL_DATA 0x3FE00102
#endif
/*
 * Description: Indicates the client's access level to the object.
 * Alternate Names: PidTagAccessLevel,ptagAccessLevel
 * Property Type: PtypInteger32
 */
#ifndef PR_ACCESS_LEVEL
#define PR_ACCESS_LEVEL 0x0FF70003
#endif
/*
 * Description: Contains the alias of an Address Book object, which is an alternative name by which
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagAccount
#define PidTagAccount 0x3A00001F
#endif
/*
 * Description: Contains the indexed entry IDs for several special folders related to conflicts, sync
 * Alternate Names: PidTagAdditionalRenEntryIds,ptagAdditionalRenEntryIds
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_ADDITIONAL_REN_ENTRYIDS
#define PR_ADDITIONAL_REN_ENTRYIDS 0x36D81102
#endif
/*
 * Description: Contains an array of blocks that specify the EntryIDs of several special folders.
 * Alternate Names: PidTagAdditionalRenEntryIdsEx,ptagAdditionalRenEntryIdsEx
 * Property Type: PtypBinary
 */
#ifndef PR_ADDITIONAL_REN_ENTRYIDS_EX
#define PR_ADDITIONAL_REN_ENTRYIDS_EX 0x36D90102
#endif
/*
 * Description: Indicates whether delivery restrictions exist for a recipient.
 * Alternate Names: PidTagAddressBookAuthorizedSenders
 * Property Type: PtypObject
 */
#ifndef PR_EMS_AB_AUTH_ORIG
#define PR_EMS_AB_AUTH_ORIG 0x8CD8000D
#endif
/*
 * Description: Contains the ID of a container on an NSPI server.
 * Alternate Names: PidTagAddressBookContainerId
 * Property Type: PtypInteger32
 */
#ifndef PR_EMS_AB_CONTAINERID
#define PR_EMS_AB_CONTAINERID 0xFFFD0003
#endif
/*
 * Description: Specifies the maximum size, in bytes, of a message that a recipient can receive.
 * Alternate Names: PidTagAddressBookDeliveryContentLength
 * Property Type: PtypInteger32
 */
#ifndef PR_EMS_AB_DELIV_CONT_LENGTH
#define PR_EMS_AB_DELIV_CONT_LENGTH 0x806A0003
#endif
/*
 * Description: Contains the printable string version of the display name.
 * Alternate Names: PidTagAddressBookDisplayNamePrintable
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_DISPLAY_NAME_PRINTABLE
#define PR_EMS_AB_DISPLAY_NAME_PRINTABLE 0x39FF001F
#endif
/*
 * Description: Contains a value that indicates how to display an Address Book object in a table or as
 * Alternate Names: PidTagAddressBookDisplayTypeExtended
 * Property Type: PtypInteger32
 */
#ifndef PR_EMS_AB_DISPLAY_TYPE_EX
#define PR_EMS_AB_DISPLAY_TYPE_EX 0x8C930003
#endif
/*
 * Description: Contains the number of external recipients in the distribution list.
 * Alternate Names: PidTagAddressBookDistributionListExternalMemberCount
 * Property Type: PtypInteger32
 */
#ifndef PR_EMS_AB_DL_EXTERNAL_MEMBER_COUNT
#define PR_EMS_AB_DL_EXTERNAL_MEMBER_COUNT 0x8CE30003
#endif
/*
 * Description: Contains the total number of recipients in the distribution list.
 * Alternate Names: PidTagAddressBookDistributionListMemberCount
 * Property Type: PtypInteger32
 */
#ifndef PR_EMS_AB_DL_TOTAL_MEMBER_COUNT
#define PR_EMS_AB_DL_TOTAL_MEMBER_COUNT 0x8CE20003
#endif
/*
 * Description: Indicates that delivery restrictions exist for a recipient.
 * Alternate Names: PidTagAddressBookDistributionListMemberSubmitAccepted
 * Property Type: PtypObject
 */
#ifndef PR_EMS_AB_DL_MEM_SUBMIT_PERMS_BL_O
#define PR_EMS_AB_DL_MEM_SUBMIT_PERMS_BL_O 0x8073000D
#endif
/*
 * Description: Indicates that delivery restrictions exist for a recipient.
 * Alternate Names: PidTagAddressBookDistributionListMemberSubmitRejected
 * Property Type: PtypObject
 */
#ifndef PR_EMS_AB_DL_MEM_SUBMIT_PERMS
#define PR_EMS_AB_DL_MEM_SUBMIT_PERMS 0x8CDA000D
#endif
/*
 * Description: Indicates that delivery restrictions exist for a recipient.
 * Alternate Names: PidTagAddressBookDistributionListRejectMessagesFromDLMembers
 * Property Type: PtypObject
 */
#ifndef PR_EMS_AB_DL_MEM_REJECT_PERMS
#define PR_EMS_AB_DL_MEM_REJECT_PERMS 0x8CDB000D
#endif
/*
 * Description: Contains the name-service EntryID of a directory object that refers to a public folder.
 * Alternate Names: PidTagAddressBookEntryId,ptagAddressBookEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_ADDRESS_BOOK_ENTRYID
#define PR_ADDRESS_BOOK_ENTRYID 0x663B0102
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute1
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_1
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_1 0x802D001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute10
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_10
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_10 0x8036001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute11
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_11
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_11 0x8C57001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute12
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_12
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_12 0x8C58001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute13
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_13
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_13 0x8C59001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute14
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_14
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_14 0x8C60001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute15
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_15
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_15 0x8C61001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute2
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_2
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_2 0x802E001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute3
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_3
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_3 0x802F001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute4
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_4
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_4 0x8030001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute5
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_5
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_5 0x8031001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute6
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_6
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_6 0x8032001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute7
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_7
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_7 0x8033001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute8
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_8
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_8 0x8034001F
#endif
/*
 * Description: Contains custom values defined and populated by the organization that modified the
 * Alternate Names: PidTagAddressBookExtensionAttribute9
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_EXTENSION_ATTRIBUTE_9
#define PR_EMS_AB_EXTENSION_ATTRIBUTE_9 0x8035001F
#endif
/*
 * Description: This property is deprecated and is to be ignored.
 * Alternate Names: PidTagAddressBookFolderPathname,PR_EMS_AB_FOLDER_PATHNAME_A
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_FOLDER_PATHNAME
#define PR_EMS_AB_FOLDER_PATHNAME 0x8004001F
#endif
/*
 * Description: Contains the child departments in a hierarchy of departments.
 * Alternate Names: PidTagAddressBookHierarchicalChildDepartments
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_HAB_CHILD_DEPARTMENTS
#define PR_EMS_AB_HAB_CHILD_DEPARTMENTS 0x8C9A000D
#endif
/*
 * Description: Contains all of the mail users that belong to this department.
 * Alternate Names: PidTagAddressBookHierarchicalDepartmentMembers
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_HAB_DEPARTMENT_MEMBERS
#define PR_EMS_AB_HAB_DEPARTMENT_MEMBERS 0x8C97000D
#endif
/*
 * Description: Indicates whether the distribution list represents a departmental group.
 * Alternate Names: PidTagAddressBookHierarchicalIsHierarchicalGroup,PR_EMS_AB_HAB_IS_HIERARCHICAL_GROUP
 * Property Type: PtypBoolean
 */
#ifndef PR_EMS_AB_IS_ORGANIZATIONAL
#define PR_EMS_AB_IS_ORGANIZATIONAL 0x8CDD000B
#endif
/*
 * Description: Contains all of the departments to which this department is a child.
 * Alternate Names: PidTagAddressBookHierarchicalParentDepartment
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_HAB_PARENT_DEPARTMENT
#define PR_EMS_AB_HAB_PARENT_DEPARTMENT 0x8C99000D
#endif
/*
 * Description: Contains the distinguished name (DN) of either the root Department object or the
 * Alternate Names: PidTagAddressBookHierarchicalRootDepartment
 * Property Type: PtypString8
 */
#ifndef PR_EMS_AB_HAB_ROOT_DEPARTMENT
#define PR_EMS_AB_HAB_ROOT_DEPARTMENT 0x8C98001E
#endif
/*
 * Description: Lists all Department objects of which the mail user is a member.
 * Alternate Names: PidTagAddressBookHierarchicalShowInDepartments
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_HAB_SHOW_IN_DEPARTMENTS
#define PR_EMS_AB_HAB_SHOW_IN_DEPARTMENTS 0x8C94000D
#endif
/*
 * Description: Contains the DN expressed in the X500 DN format. This property is returned from a
 * Alternate Names: PidTagAddressBookHomeMessageDatabase,PR_EMS_AB_HOME_MDB_A
 * Property Type: 
 */
#ifndef PR_EMS_AB_HOME_MDB
#define PR_EMS_AB_HOME_MDB 0x8006
#endif
/*
 * Description: Contains a Boolean value of TRUE if it is possible to create Address Book objects in
 * Alternate Names: PidTagAddressBookIsMaster
 * Property Type: PtypBoolean
 */
#ifndef PR_EMS_AB_IS_MASTER
#define PR_EMS_AB_IS_MASTER 0xFFFB000B
#endif
/*
 * Description: Lists all of the distribution lists for which the object is a member. This property is
 * Alternate Names: PidTagAddressBookIsMemberOfDistributionList,PR_EMS_AB_IS_MEMBER_OF_DL_A
 * Property Type: 
 */
#ifndef PR_EMS_AB_IS_MEMBER_OF_DL
#define PR_EMS_AB_IS_MEMBER_OF_DL 0x8008
#endif
/*
 * Description: Contains information for use in display templates for distribution lists.
 * Alternate Names: PidTagAddressBookManageDistributionList
 * Property Type: PtypObject
 */
#ifndef PR_EMS_AB_MANAGE_DL
#define PR_EMS_AB_MANAGE_DL 0x6704000D
#endif
/*
 * Description: Contains one row that references the mail user's manager.
 * Alternate Names: PidTagAddressBookManager,PR_EMS_AB_MANAGER_A,PR_EMS_AB_MANAGER_W
 * Property Type: PtypObject
 */
#ifndef PR_EMS_AB_MANAGER
#define PR_EMS_AB_MANAGER 0x8005000D
#endif
/*
 * Description: Contains the DN of the mail user's manager.
 * Alternate Names: PidTagAddressBookManagerDistinguishedName
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_MANAGER_T
#define PR_EMS_AB_MANAGER_T 0x8005001F
#endif
/*
 * Description: Contains the members of the distribution list.
 * Alternate Names: PidTagAddressBookMember,PR_EMS_AB_MEMBER_A,PR_EMS_AB_MEMBER_W
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_MEMBER
#define PR_EMS_AB_MEMBER 0x8009000D
#endif
/*
 * Description: Contains the Short-term Message ID (MID) ([MS-OXCDATA] section 2.2.1.2) of the first
 * Alternate Names: PidTagAddressBookMessageId
 * Property Type: PtypInteger64
 */
#ifndef ptagAddrbookMID
#define ptagAddrbookMID 0x674F0014
#endif
/*
 * Description: Indicates whether moderation is enabled for the mail user or distribution list.
 * Alternate Names: PidTagAddressBookModerationEnabled
 * Property Type: PtypBoolean
 */
#ifndef PR_EMS_AB_ENABLE_MODERATION
#define PR_EMS_AB_ENABLE_MODERATION 0x8CB5000B
#endif
/*
 * Description: Contains a list of names by which a server is known to the various transports in use by
 * Alternate Names: PidTagAddressBookNetworkAddress,PR_EMS_AB_NETWORK_ADDRESS_A
 * Property Type: PtypMultipleString
 */
#ifndef PR_EMS_AB_NETWORK_ADDRESS
#define PR_EMS_AB_NETWORK_ADDRESS 0x8170101F
#endif
/*
 * Description: Contains the DN of the Address Book object.
 * Alternate Names: PidTagAddressBookObjectDistinguishedName,PR_EMS_AB_OBJ_DIST_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_OBJ_DIST_NAME
#define PR_EMS_AB_OBJ_DIST_NAME 0x803C001F
#endif
/*
 * Description: Contains a GUID that identifies an Address Book object.
 * Alternate Names: PidTagAddressBookObjectGuid
 * Property Type: PtypBinary
 */
#ifndef PR_EMS_AB_OBJECT_GUID
#define PR_EMS_AB_OBJECT_GUID 0x8C6D0102
#endif
/*
 * Description: Contains the DN of the Organization object of the mail user's organization.
 * Alternate Names: PidTagAddressBookOrganizationalUnitRootDistinguishedName,msExchOURoot
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_ORG_UNIT_ROOT_DN
#define PR_EMS_AB_ORG_UNIT_ROOT_DN 0x8CA8001F
#endif
/*
 * Description: Contains one row that references the distribution list's owner.
 * Alternate Names: PidTagAddressBookOwner
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_OWNER_O
#define PR_EMS_AB_OWNER_O 0x800C000D
#endif
/*
 * Description: Contains a list of the distribution lists owned by a mail user.
 * Alternate Names: PidTagAddressBookOwnerBackLink
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_OWNER_BL_O
#define PR_EMS_AB_OWNER_BL_O 0x8024000D
#endif
/*
 * Description: Contains the EntryID of the parent container in a hierarchy of address book
 * Alternate Names: PidTagAddressBookParentEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_EMS_AB_PARENT_ENTRYID
#define PR_EMS_AB_PARENT_ENTRYID 0xFFFC0102
#endif
/*
 * Description: Contains the phonetic representation of the PidTagCompanyName property (section
 * Alternate Names: PidTagAddressBookPhoneticCompanyName
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_PHONETIC_COMPANY_NAME
#define PR_EMS_AB_PHONETIC_COMPANY_NAME 0x8C91001F
#endif
/*
 * Description: Contains the phonetic representation of the PidTagDepartmentName property
 * Alternate Names: PidTagAddressBookPhoneticDepartmentName
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_PHONETIC_DEPARTMENT_NAME
#define PR_EMS_AB_PHONETIC_DEPARTMENT_NAME 0x8C90001F
#endif
/*
 * Description: Contains the phonetic representation of the PidTagDisplayName property (section
 * Alternate Names: PidTagAddressBookPhoneticDisplayName
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_PHONETIC_DISPLAY_NAME
#define PR_EMS_AB_PHONETIC_DISPLAY_NAME 0x8C92001F
#endif
/*
 * Description: Contains the phonetic representation of the PidTagGivenName property (section
 * Alternate Names: PidTagAddressBookPhoneticGivenName,PR_EMS_AB_PHONETIC_GIVEN_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_PHONETIC_GIVEN_NAME
#define PR_EMS_AB_PHONETIC_GIVEN_NAME 0x8C8E001F
#endif
/*
 * Description: Contains the phonetic representation of the PidTagSurname property (section 2.1036).
 * Alternate Names: PidTagAddressBookPhoneticSurname,PR_EMS_AB_PHONETIC_SURNAME_A
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_PHONETIC_SURNAME
#define PR_EMS_AB_PHONETIC_SURNAME 0x8C8F001F
#endif
/*
 * Description: Contains alternate email addresses for the Address Book object.
 * Alternate Names: PidTagAddressBookProxyAddresses,PR_EMS_AB_PROXY_ADDRESSES_A
 * Property Type: PtypMultipleString
 */
#ifndef PR_EMS_AB_PROXY_ADDRESSES
#define PR_EMS_AB_PROXY_ADDRESSES 0x800F101F
#endif
/*
 * Description: Contains a list of mail users who are allowed to send email on behalf of the mailbox
 * Alternate Names: PidTagAddressBookPublicDelegates,PR_EMS_AB_PUBLIC_DELEGATES_A
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_PUBLIC_DELEGATES
#define PR_EMS_AB_PUBLIC_DELEGATES 0x8015000D
#endif
/*
 * Description: Lists all of the mail user’s direct reports.
 * Alternate Names: PidTagAddressBookReports,PR_EMS_AB_REPORTS_A,PR_EMS_AB_REPORTS_W
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_EMS_AB_REPORTS
#define PR_EMS_AB_REPORTS 0x800E000D
#endif
/*
 * Description: Contains the maximum occupancy of the room.
 * Alternate Names: PidTagAddressBookRoomCapacity
 * Property Type: PtypInteger32
 */
#ifndef PR_EMS_AB_ROOM_CAPACITY
#define PR_EMS_AB_ROOM_CAPACITY 0x08070003
#endif
/*
 * Description: Contains a list of DNs that represent the address book containers that hold
 * Alternate Names: PidTagAddressBookRoomContainers,PR_EMS_AB_ROOM_CONTAINERS_A
 * Property Type: PtypMultipleString
 */
#ifndef PR_EMS_AB_ROOM_CONTAINERS
#define PR_EMS_AB_ROOM_CONTAINERS 0x8C96101F
#endif
/*
 * Description: Contains a description of the Resource object.
 * Alternate Names: PidTagAddressBookRoomDescription,PR_EMS_AB_ROOM_DESCRIPTION_A
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_ROOM_DESCRIPTION
#define PR_EMS_AB_ROOM_DESCRIPTION 0x0809001F
#endif
/*
 * Description: Contains the locale ID and translations of the default mail tip.
 * Alternate Names: PidTagAddressBookSenderHintTranslations
 * Property Type: PtypMultipleString
 */
#ifndef PR_EMS_AB_DL_SENDER_HINT_TRANSLATIONS_W
#define PR_EMS_AB_DL_SENDER_HINT_TRANSLATIONS_W 0x8CAC101F
#endif
/*
 * Description: Contains a signed integer that specifies the seniority order of Address Book objects
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidTagAddressBookSeniorityIndex
#define PidTagAddressBookSeniorityIndex 0x8CA00003
#endif
/*
 * Description: Contains the foreign system email address of an Address Book object.
 * Alternate Names: PidTagAddressBookTargetAddress,PR_EMS_AB_TARGET_ADDRESS_A
 * Property Type: PtypString
 */
#ifndef PR_EMS_AB_TARGET_ADDRESS
#define PR_EMS_AB_TARGET_ADDRESS 0x8011001F
#endif
/*
 * Description: Indicates whether delivery restrictions exist for a recipient.
 * Alternate Names: PidTagAddressBookUnauthorizedSenders
 * Property Type: PtypObject
 */
#ifndef PR_EMS_AB_UNAUTH_ORIG
#define PR_EMS_AB_UNAUTH_ORIG 0x8CD9000D
#endif
/*
 * Description: Contains the ASN_1 DER encoded X.509 certificates for the mail user.
 * Alternate Names: PidTagAddressBookX509Certificate
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_EMS_AB_X509_CERT
#define PR_EMS_AB_X509_CERT 0x8C6A1102
#endif
/*
 * Description: Contains the email address type of a Message object.
 * Alternate Names: PidTagAddressType,PR_ADDRTYPE_A,ptagAddrType,PR_ADDRTYPE_W
 * Property Type: PtypString
 */
#ifndef PR_ADDRTYPE
#define PR_ADDRTYPE 0x3002001F
#endif
/*
 * Description: Specifies whether the sender permits the message to be auto-forwarded.
 * Alternate Names: PidTagAlternateRecipientAllowed,ptagAlternateRecipientAllowed
 * Property Type: PtypBoolean
 */
#ifndef PR_ALTERNATE_RECIPIENT_ALLOWED
#define PR_ALTERNATE_RECIPIENT_ALLOWED 0x0002000B
#endif
/*
 * Description: Contains a filter value used in ambiguous name resolution.
 * Alternate Names: PidTagAnr,PR_ANR_A,PR_ANR_W
 * Property Type: PtypString
 */
#ifndef PR_ANR
#define PR_ANR 0x360C001F
#endif
/*
 * Description: Specifies the date, in UTC, after which a Message object is archived by the server.
 * Alternate Names: PidTagArchiveDate,ptagArchiveDate
 * Property Type: PtypTime
 */
#ifndef PR_ARCHIVE_DATE
#define PR_ARCHIVE_DATE 0x301F0040
#endif
/*
 * Description: Specifies the number of days that a Message object can remain unarchived.
 * Alternate Names: PidTagArchivePeriod,ptagArchivePeriod
 * Property Type: PtypInteger32
 */
#ifndef PR_ARCHIVE_PERIOD
#define PR_ARCHIVE_PERIOD 0x301E0003
#endif
/*
 * Description: Specifies the GUID of an archive tag.
 * Alternate Names: PidTagArchiveTag,ptagArchiveTag
 * Property Type: PtypBinary
 */
#ifndef PR_ARCHIVE_TAG
#define PR_ARCHIVE_TAG 0x30180102
#endif
/*
 * Description: Contains the name of the mail user's administrative assistant.
 * Alternate Names: PidTagAssistant,PR_ASSISTANT_A,PR_ASSISTANT_W
 * Property Type: PtypString
 */
#ifndef PR_ASSISTANT
#define PR_ASSISTANT 0x3A30001F
#endif
/*
 * Description: Contains the telephone number of the mail user's administrative assistant.
 * Alternate Names: PidTagAssistantTelephoneNumber,PR_ASSISTANT_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_ASSISTANT_TELEPHONE_NUMBER
#define PR_ASSISTANT_TELEPHONE_NUMBER 0x3A2E001F
#endif
/*
 * Description: Specifies whether the message being synchronized is an FAI message.
 * Alternate Names: PidTagAssociated
 * Property Type: PtypBoolean
 */
#ifndef ptagAssociated
#define ptagAssociated 0x67AA000B
#endif
/*
 * Description: Contains attachment encoding information.
 * Alternate Names: PidTagAttachAdditionalInformation
 * Property Type: PtypBinary
 */
#ifndef PR_ATTACH_ADDITIONAL_INFO
#define PR_ATTACH_ADDITIONAL_INFO 0x370F0102
#endif
/*
 * Description: Contains the base of a relative URI.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagAttachContentBase
#define PidTagAttachContentBase 0x3711001F
#endif
/*
 * Description: Contains a content identifier unique to the Message object that matches a
 * Alternate Names: PidTagAttachContentId,PR_ATTACH_CONTENT_ID_A
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_CONTENT_ID
#define PR_ATTACH_CONTENT_ID 0x3712001F
#endif
/*
 * Description: Contains a relative or full URI that matches a corresponding reference in the HTML
 * Alternate Names: PidTagAttachContentLocation,PR_ATTACH_CONTENT_LOCATION_A
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_CONTENT_LOCATION
#define PR_ATTACH_CONTENT_LOCATION 0x3713001F
#endif
/*
 * Description: Contains the contents of the file to be attached.
 * Alternate Names: PidTagAttachDataBinary,ptagAttachDataBin
 * Property Type: PtypBinary
 */
#ifndef PR_ATTACH_DATA_BIN
#define PR_ATTACH_DATA_BIN 0x37010102
#endif
/*
 * Description: Contains the binary representation of the Attachment object in an application-specific
 * Alternate Names: PidTagAttachDataObject,ptagAttachDataObj
 * Property Type: PtypObject
 */
#ifndef PR_ATTACH_DATA_OBJ
#define PR_ATTACH_DATA_OBJ 0x3701000D
#endif
/*
 * Description: Contains encoding information about the Attachment object.
 * Alternate Names: PidTagAttachEncoding
 * Property Type: PtypBinary
 */
#ifndef PR_ATTACH_ENCODING
#define PR_ATTACH_ENCODING 0x37020102
#endif
/*
 * Description: Contains a file name extension that indicates the document type of an attachment.
 * Alternate Names: PidTagAttachExtension,PR_ATTACH_EXTENSION_A
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_EXTENSION
#define PR_ATTACH_EXTENSION 0x3703001F
#endif
/*
 * Description: Contains the 8.3 name of the PidTagAttachLongFilename property (section 2.595).
 * Alternate Names: PidTagAttachFilename,PR_ATTACH_FILENAME_A,ptagAttachFilename
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_FILENAME
#define PR_ATTACH_FILENAME 0x3704001F
#endif
/*
 * Description: Indicates which body formats might reference this attachment when rendering data.
 * Alternate Names: PidTagAttachFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_ATTACH_FLAGS
#define PR_ATTACH_FLAGS 0x37140003
#endif
/*
 * Description: Contains the full filename and extension of the Attachment object.
 * Alternate Names: PidTagAttachLongFilename,PR_ATTACH_LONG_FILENAME_A
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_LONG_FILENAME
#define PR_ATTACH_LONG_FILENAME 0x3707001F
#endif
/*
 * Description: Contains the fully-qualified path and file name with extension.
 * Alternate Names: PidTagAttachLongPathname,PR_ATTACH_LONG_PATHNAME_A
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_LONG_PATHNAME
#define PR_ATTACH_LONG_PATHNAME 0x370D001F
#endif
/*
 * Description: Indicates that a contact photo attachment is attached to a Contact object.
 * Alternate Names: PidTagAttachmentContactPhoto
 * Property Type: PtypBoolean
 */
#ifndef PR_ATTACHMENT_CONTACTPHOTO
#define PR_ATTACHMENT_CONTACTPHOTO 0x7FFF000B
#endif
/*
 * Description: Indicates special handling for an Attachment object.
 * Alternate Names: PidTagAttachmentFlags,ptagAttachmentFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_ATTACHMENT_FLAGS
#define PR_ATTACHMENT_FLAGS 0x7FFD0003
#endif
/*
 * Description: Indicates whether an Attachment object is hidden from the end user.
 * Alternate Names: PidTagAttachmentHidden
 * Property Type: PtypBoolean
 */
#ifndef PR_ATTACHMENT_HIDDEN
#define PR_ATTACHMENT_HIDDEN 0x7FFE000B
#endif
/*
 * Description: Contains the type of Message object to which an attachment is linked.
 * Alternate Names: PidTagAttachmentLinkId,ptagAttachmentLinkId
 * Property Type: PtypInteger32
 */
#ifndef PR_ATTACHMENT_LINKID
#define PR_ATTACHMENT_LINKID 0x7FFA0003
#endif
/*
 * Description: Represents the way the contents of an attachment are accessed.
 * Alternate Names: PidTagAttachMethod,ptagAttachMethod
 * Property Type: PtypInteger32
 */
#ifndef PR_ATTACH_METHOD
#define PR_ATTACH_METHOD 0x37050003
#endif
/*
 * Description: Contains a content-type MIME header.
 * Alternate Names: PidTagAttachMimeTag,PR_ATTACH_MIME_TAG_A,PR_ATTACH_MIME_TAG_W
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_MIME_TAG
#define PR_ATTACH_MIME_TAG 0x370E001F
#endif
/*
 * Description: Identifies the Attachment object within its Message object.
 * Alternate Names: PidTagAttachNumber,ptagAttachNum
 * Property Type: PtypInteger32
 */
#ifndef PR_ATTACH_NUM
#define PR_ATTACH_NUM 0x0E210003
#endif
/*
 * Description: Contains the 8.3 name of the PidTagAttachLongPathname property (section 2.596).
 * Alternate Names: PidTagAttachPathname,PR_ATTACH_PATHNAME_A,ptagAttachPathname
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_PATHNAME
#define PR_ATTACH_PATHNAME 0x3708001F
#endif
/*
 * Description: Contains the class name of an object that can display the contents of the message.
 * Alternate Names: PidTagAttachPayloadClass,PR_ATTACH_PAYLOAD_CLASS_A
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_PAYLOAD_CLASS
#define PR_ATTACH_PAYLOAD_CLASS 0x371A001F
#endif
/*
 * Description: Contains the GUID of the software component that can display the contents of the
 * Alternate Names: PidTagAttachPayloadProviderGuidString
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_PAYLOAD_PROV_GUID_STR
#define PR_ATTACH_PAYLOAD_PROV_GUID_STR 0x3719001F
#endif
/*
 * Description: Contains a Windows Metafile, as specified in [MS-WMF], for the Attachment object.
 * Alternate Names: PidTagAttachRendering,ptagAttachRendering
 * Property Type: PtypBinary
 */
#ifndef PR_ATTACH_RENDERING
#define PR_ATTACH_RENDERING 0x37090102
#endif
/*
 * Description: Contains the size, in bytes, consumed by the Attachment object on the server.
 * Alternate Names: PidTagAttachSize,ptagAttachSize
 * Property Type: PtypInteger32
 */
#ifndef PR_ATTACH_SIZE
#define PR_ATTACH_SIZE 0x0E200003
#endif
/*
 * Description: Contains the identifier information for the application that supplied the Attachment
 * Alternate Names: PidTagAttachTag
 * Property Type: PtypBinary
 */
#ifndef PR_ATTACH_TAG
#define PR_ATTACH_TAG 0x370A0102
#endif
/*
 * Description: Contains the name of an attachment file, modified so that it can be correlated with
 * Alternate Names: PidTagAttachTransportName,PR_ATTACH_TRANSPORT_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_ATTACH_TRANSPORT_NAME
#define PR_ATTACH_TRANSPORT_NAME 0x370C001F
#endif
/*
 * Description: Specifies the hide or show status of a folder.
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidTagAttributeHidden
#define PidTagAttributeHidden 0x10F4000B
#endif
/*
 * Description: Indicates whether an item can be modified or deleted.
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidTagAttributeReadOnly
#define PidTagAttributeReadOnly 0x10F6000B
#endif
/*
 * Description: Contains text included in an automatically-generated message.
 * Alternate Names: PidTagAutoForwardComment,PR_AUTO_FORWARD_COMMENT_A
 * Property Type: PtypString
 */
#ifndef PR_AUTO_FORWARD_COMMENT
#define PR_AUTO_FORWARD_COMMENT 0x0004001F
#endif
/*
 * Description: Indicates that a Message object has been automatically generated or automatically
 * Alternate Names: PidTagAutoForwarded,ptagAutoForwarded
 * Property Type: PtypBoolean
 */
#ifndef PR_AUTO_FORWARDED
#define PR_AUTO_FORWARDED 0x0005000B
#endif
/*
 * Description: Specifies whether a client or server application will forego sending automated replies in
 * Alternate Names: PidTagAutoResponseSuppress,ptagAutoResponseSuppress
 * Property Type: PtypInteger32
 */
#ifndef PR_AUTO_RESPONSE_SUPPRESS
#define PR_AUTO_RESPONSE_SUPPRESS 0x3FDF0003
#endif
/*
 * Description: Contains the date of the mail user's birthday at midnight.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagBirthday
#define PidTagBirthday 0x3A420040
#endif
/*
 * Description: Indicates the user's preference for viewing external content (such as links to images on
 * Alternate Names: PidTagBlockStatus,ptagBlockStatus
 * Property Type: PtypInteger32
 */
#ifndef PR_BLOCK_STATUS
#define PR_BLOCK_STATUS 0x10960003
#endif
/*
 * Description: Contains message body text in plain text format.
 * Alternate Names: PidTagBody,PR_BODY_A,ptagBody,PR_BODY_W
 * Property Type: PtypString
 */
#ifndef PR_BODY
#define PR_BODY 0x1000001F
#endif
/*
 * Description: Contains a GUID that corresponds to the current message body.
 * Alternate Names: PidTagBodyContentId,PR_BODY_CONTENT_ID_A,PR_BODY_CONTENT_ID_W
 * Property Type: PtypString
 */
#ifndef PR_BODY_CONTENT_ID
#define PR_BODY_CONTENT_ID 0x1015001F
#endif
/*
 * Description: Contains a globally unique Uniform Resource Identifier (URI) that serves as a label
 * Alternate Names: PidTagBodyContentLocation,PR_BODY_CONTENT_LOCATION_A
 * Property Type: PtypString
 */
#ifndef PR_BODY_CONTENT_LOCATION
#define PR_BODY_CONTENT_LOCATION 0x1014001F
#endif
/*
 * Description: Contains the HTML body of the Message object.
 * Alternate Names: PidTagBodyHtml,PR_BODY_HTML_A,ptagBodyHtml,PR_BODY_HTML_W
 * Property Type: PtypString
 */
#ifndef PR_BODY_HTML
#define PR_BODY_HTML 0x1013001F
#endif
/*
 * Description: Contains a secondary telephone number at the mail user's place of business.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagBusiness2TelephoneNumber
#define PidTagBusiness2TelephoneNumber 0x3A1B001F
#endif
/*
 * Description: Contains secondary telephone numbers at the mail user's place of business.
 * Alternate Names: PidTagBusiness2TelephoneNumbers
 * Property Type: PtypMultipleString
 */
#ifndef PR_BUSINESS2_TELEPHONE_NUMBER_A_MV
#define PR_BUSINESS2_TELEPHONE_NUMBER_A_MV 0x3A1B101F
#endif
/*
 * Description: Contains the telephone number of the mail user's business fax machine.
 * Alternate Names: PidTagBusinessFaxNumber,PR_BUSINESS_FAX_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_BUSINESS_FAX_NUMBER
#define PR_BUSINESS_FAX_NUMBER 0x3A24001F
#endif
/*
 * Description: Contains the URL of the mail user's business home page.
 * Alternate Names: PidTagBusinessHomePage,PR_BUSINESS_HOME_PAGE_A
 * Property Type: PtypString
 */
#ifndef PR_BUSINESS_HOME_PAGE
#define PR_BUSINESS_HOME_PAGE 0x3A51001F
#endif
/*
 * Description: Contains the primary telephone number of the mail user's place of business.
 * Alternate Names: PidTagBusinessTelephoneNumber,PR_BUSINESS_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_BUSINESS_TELEPHONE_NUMBER
#define PR_BUSINESS_TELEPHONE_NUMBER 0x3A08001F
#endif
/*
 * Description: Contains a telephone number to reach the mail user.
 * Alternate Names: PidTagCallbackTelephoneNumber,PR_CALLBACK_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_CALLBACK_TELEPHONE_NUMBER
#define PR_CALLBACK_TELEPHONE_NUMBER 0x3A02001F
#endif
/*
 * Description: Contains a unique identifier associated with the phone call.
 * Alternate Names: InternalSchemaCallID
 * Property Type: PtypString
 */
#ifndef PidTagCallId
#define PidTagCallId 0x6806001F
#endif
/*
 * Description: Contains the mail user's car telephone number.
 * Alternate Names: PidTagCarTelephoneNumber,PR_CAR_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_CAR_TELEPHONE_NUMBER
#define PR_CAR_TELEPHONE_NUMBER 0x3A1E001F
#endif
/*
 * Description: Identifies a specific instance of a recurring appointment.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagCdoRecurrenceid
#define PidTagCdoRecurrenceid 0x10C50040
#endif
/*
 * Description: Contains a structure that identifies the last change to the object.
 * Alternate Names: PidTagChangeKey
 * Property Type: PtypBinary
 */
#ifndef PR_CHANGE_KEY
#define PR_CHANGE_KEY 0x65E20102
#endif
/*
 * Description: Contains a structure that identifies the last change to the message or folder that is
 * Alternate Names: PidTagChangeNumber
 * Property Type: PtypInteger64
 */
#ifndef ptagCn
#define ptagCn 0x67A40014
#endif
/*
 * Description: Specifies the names of the children of the contact.
 * Alternate Names: PidTagChildrensNames,PR_CHILDRENS_NAMES_A,PR_CHILDRENS_NAMES_W
 * Property Type: PtypMultipleString
 */
#ifndef PR_CHILDRENS_NAMES
#define PR_CHILDRENS_NAMES 0x3A58101F
#endif
/*
 * Description: Specifies the actions the client is required to take on the message.
 * Alternate Names: PidTagClientActions,ptagClientActions
 * Property Type: PtypBinary
 */
#ifndef PR_CLIENT_ACTIONS
#define PR_CLIENT_ACTIONS 0x66450102
#endif
/*
 * Description: Contains the current time, in UTC, when the email message is submitted.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagClientSubmitTime
#define PidTagClientSubmitTime 0x00390040
#endif
/*
 * Description: Contains the identifier for the client code page used for Unicode to double-byte
 * Alternate Names: PidTagCodePageId,ptagCodePageId
 * Property Type: PtypInteger32
 */
#ifndef PR_CODE_PAGE_ID
#define PR_CODE_PAGE_ID 0x66C30003
#endif
/*
 * Description: Contains a comment about the purpose or content of the Address Book object.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagComment
#define PidTagComment 0x3004001F
#endif
/*
 * Description: Contains the main telephone number of the mail user's company.
 * Alternate Names: PidTagCompanyMainTelephoneNumber,PR_COMPANY_MAIN_PHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_COMPANY_MAIN_PHONE_NUMBER
#define PR_COMPANY_MAIN_PHONE_NUMBER 0x3A57001F
#endif
/*
 * Description: Contains the mail user's company name.
 * Alternate Names: PidTagCompanyName,PR_COMPANY_NAME_A,PR_COMPANY_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_COMPANY_NAME
#define PR_COMPANY_NAME 0x3A16001F
#endif
/*
 * Description: Contains the name of the mail user's computer network.
 * Alternate Names: PidTagComputerNetworkName,PR_COMPUTER_NETWORK_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_COMPUTER_NETWORK_NAME
#define PR_COMPUTER_NETWORK_NAME 0x3A49001F
#endif
/*
 * Description: Contains the EntryID of the conflict resolve message.
 * Alternate Names: PidTagConflictEntryId,ptagConflictEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_CONFLICT_ENTRYID
#define PR_CONFLICT_ENTRYID 0x3FF00102
#endif
/*
 * Description: Contains a string value that describes the type of Message object that a folder
 * Alternate Names: PidTagContainerClass,PR_CONTAINER_CLASS_A,ptagContainerClass
 * Property Type: PtypString
 */
#ifndef PR_CONTAINER_CLASS
#define PR_CONTAINER_CLASS 0x3613001F
#endif
/*
 * Description: Empty. An NSPI server defines this value for distribution lists and it is not present for
 * Alternate Names: PidTagContainerContents,ptagContainerContents
 * Property Type: PtypEmbeddedTable
 */
#ifndef PR_CONTAINER_CONTENTS
#define PR_CONTAINER_CONTENTS 0x360F000D
#endif
/*
 * Description: Contains a bitmask of flags that describe capabilities of an address book container.
 * Alternate Names: PidTagContainerFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_CONTAINER_FLAGS
#define PR_CONTAINER_FLAGS 0x36000003
#endif
/*
 * Description: Identifies all of the subfolders of the current folder.
 * Alternate Names: PidTagContainerHierarchy,ptagContainerHierarchy
 * Property Type: PtypObject
 */
#ifndef PR_CONTAINER_HIERARCHY
#define PR_CONTAINER_HIERARCHY 0x360E000D
#endif
/*
 * Description: Specifies the number of rows under the header row.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidTagContentCount
#define PidTagContentCount 0x36020003
#endif
/*
 * Description: Indicates a confidence level that the message is spam.
 * Alternate Names: PidTagContentFilterSpamConfidenceLevel,ptagContentFilterSCL
 * Property Type: PtypInteger32
 */
#ifndef PR_CONTENT_FILTER_SCL
#define PR_CONTENT_FILTER_SCL 0x40760003
#endif
/*
 * Description: Specifies the number of rows under the header row that have the PidTagRead property
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidTagContentUnreadCount
#define PidTagContentUnreadCount 0x36030003
#endif
/*
 * Description: Contains a computed value derived from other conversation-related properties.
 * Alternate Names: PidTagConversationId
 * Property Type: PtypBinary
 */
#ifndef PR_CONVERSATION_ID
#define PR_CONVERSATION_ID 0x30130102
#endif
/*
 * Description: Indicates the relative position of this message within a conversation thread.
 * Alternate Names: PidTagConversationIndex,ptagConversationIndex
 * Property Type: PtypBinary
 */
#ifndef PR_CONVERSATION_INDEX
#define PR_CONVERSATION_INDEX 0x00710102
#endif
/*
 * Description: Indicates whether the GUID portion of the PidTagConversationIndex property
 * Alternate Names: PidTagConversationIndexTracking
 * Property Type: PtypBoolean
 */
#ifndef PR_CONVERSATION_INDEX_TRACKING
#define PR_CONVERSATION_INDEX_TRACKING 0x3016000B
#endif
/*
 * Description: Contains an unchanging copy of the original subject.
 * Alternate Names: PidTagConversationTopic,PR_CONVERSATION_TOPIC_A
 * Property Type: PtypString
 */
#ifndef PR_CONVERSATION_TOPIC
#define PR_CONVERSATION_TOPIC 0x0070001F
#endif
/*
 * Description: Contains the name of the mail user's country/region.
 * Alternate Names: PidTagCountry,PR_COUNTRY_A,PR_COUNTRY_W
 * Property Type: PtypString
 */
#ifndef PR_COUNTRY
#define PR_COUNTRY 0x3A26001F
#endif
/*
 * Description: Contains the time, in UTC, that the object was created.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagCreationTime
#define PidTagCreationTime 0x30070040
#endif
/*
 * Description: Specifies the original author of the message according to their Address Book EntryID.
 * Alternate Names: PidTagCreatorEntryId,ptagCreatorEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_CREATOR_ENTRYID
#define PR_CREATOR_ENTRYID 0x3FF90102
#endif
/*
 * Description: Contains the name of the creator of a Message object.
 * Alternate Names: PidTagCreatorName,PR_CREATOR_NAME_A,ptagCreatorName
 * Property Type: PtypString
 */
#ifndef PR_CREATOR_NAME
#define PR_CREATOR_NAME 0x3FF8001F
#endif
/*
 * Description: Contains the mail user's customer identification number.
 * Alternate Names: PidTagCustomerId,PR_CUSTOMER_ID_A,PR_CUSTOMER_ID_W
 * Property Type: PtypString
 */
#ifndef PR_CUSTOMER_ID
#define PR_CUSTOMER_ID 0x3A4A001F
#endif
/*
 * Description: Indicates whether the Deferred Action Message (DAM) was updated by the server.
 * Alternate Names: PidTagDamBackPatched,ptagDamBackPatched
 * Property Type: PtypBoolean
 */
#ifndef PR_DAM_BACK_PATCHED
#define PR_DAM_BACK_PATCHED 0x6647000B
#endif
/*
 * Description: Contains the EntryID of the delivered message that the client has to process.
 * Alternate Names: PidTagDamOriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_DAM_ORIGINAL_ENTRYID
#define PR_DAM_ORIGINAL_ENTRYID 0x66460102
#endif
/*
 * Description: Contains the message class of the object.
 * Alternate Names: PidTagDefaultPostMessageClass
 * Property Type: PtypString
 */
#ifndef PR_DEF_POST_MSGCLASS
#define PR_DEF_POST_MSGCLASS 0x36E5001F
#endif
/*
 * Description: Contains the server EntryID for the DAM.
 * Alternate Names: PidTagDeferredActionMessageOriginalEntryId,ptagDamOrgMsgSvrEID
 * Property Type: PtypServerId
 */
#ifndef PR_DAM_ORIG_MSG_SVREID
#define PR_DAM_ORIG_MSG_SVREID 0x674100FB
#endif
/*
 * Description: Contains the date and time, in UTC, at which the sender prefers that the message be
 * Alternate Names: PidTagDeferredDeliveryTime,ptagDeferredDeliveryTime
 * Property Type: PtypTime
 */
#ifndef PR_DEFERRED_DELIVERY_TIME
#define PR_DEFERRED_DELIVERY_TIME 0x000F0040
#endif
/*
 * Description: Contains a number used in the calculation of how long to defer sending a message.
 * Alternate Names: PidTagDeferredSendNumber
 * Property Type: PtypInteger32
 */
#ifndef PR_DEFERRED_SEND_NUMBER
#define PR_DEFERRED_SEND_NUMBER 0x3FEB0003
#endif
/*
 * Description: Contains the amount of time after which a client would like to defer sending the
 * Alternate Names: PidTagDeferredSendTime,ptagDeferredSendTime
 * Property Type: PtypTime
 */
#ifndef PR_DEFERRED_SEND_TIME
#define PR_DEFERRED_SEND_TIME 0x3FEF0040
#endif
/*
 * Description: Specifies the unit of time used as a multiplier with the PidTagDeferredSendNumber
 * Alternate Names: PidTagDeferredSendUnits
 * Property Type: PtypInteger32
 */
#ifndef PR_DEFERRED_SEND_UNITS
#define PR_DEFERRED_SEND_UNITS 0x3FEC0003
#endif
/*
 * Description: Specifies whether the message was forwarded due to the triggering of a delegate
 * Alternate Names: PidTagDelegatedByRule
 * Property Type: PtypBoolean
 */
#ifndef PR_DELEGATED_BY_RULE
#define PR_DELEGATED_BY_RULE 0x3FE3000B
#endif
/*
 * Description: Indicates whether delegates can view Message objects that are marked as private.
 * Alternate Names: PidTagDelegateFlags,ptagDelegateFlags
 * Property Type: PtypMultipleInteger32
 */
#ifndef PR_DELEGATE_FLAGS
#define PR_DELEGATE_FLAGS 0x686B1003
#endif
/*
 * Description: Indicates that the original message is to be deleted after it is sent.
 * Alternate Names: PidTagDeleteAfterSubmit,ptagDeleteAfterSubmit
 * Property Type: PtypBoolean
 */
#ifndef PR_DELETE_AFTER_SUBMIT
#define PR_DELETE_AFTER_SUBMIT 0x0E01000B
#endif
/*
 * Description: Contains the total count of messages that have been deleted from a folder, excluding
 * Alternate Names: PidTagDeletedCountTotal,ptagDeleteCountTotal
 * Property Type: PtypInteger32
 */
#ifndef PR_DELETED_COUNT_TOTAL
#define PR_DELETED_COUNT_TOTAL 0x670B0003
#endif
/*
 * Description: Specifies the time, in UTC, when the item or folder was soft deleted.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagDeletedOn
#define PidTagDeletedOn 0x668F0040
#endif
/*
 * Description: Contains the delivery time for a delivery status notification, as specified [RFC3464], or a
 * Alternate Names: PidTagDeliverTime,ptagDeliverTime
 * Property Type: PtypTime
 */
#ifndef PR_DELIVER_TIME
#define PR_DELIVER_TIME 0x00100040
#endif
/*
 * Description: Contains a name for the department in which the mail user works.
 * Alternate Names: PidTagDepartmentName,PR_DEPARTMENT_NAME_A,PR_DEPARTMENT_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_DEPARTMENT_NAME
#define PR_DEPARTMENT_NAME 0x3A18001F
#endif
/*
 * Description: Specifies the number of nested categories in which a given row is contained.
 * Alternate Names: PidTagDepth,ptagDepth
 * Property Type: PtypInteger32
 */
#ifndef PR_DEPTH
#define PR_DEPTH 0x30050003
#endif
/*
 * Description: Contains a list of blind carbon copy (Bcc) recipient display names.
 * Alternate Names: PidTagDisplayBcc,PR_DISPLAY_BCC_A,ptagDisplayBcc,PR_DISPLAY_BCC_W
 * Property Type: PtypString
 */
#ifndef PR_DISPLAY_BCC
#define PR_DISPLAY_BCC 0x0E02001F
#endif
/*
 * Description: Contains a list of carbon copy (Cc) recipient display names.
 * Alternate Names: PidTagDisplayCc,PR_DISPLAY_CC_A,ptagDisplayCc,PR_DISPLAY_CC_W
 * Property Type: PtypString
 */
#ifndef PR_DISPLAY_CC
#define PR_DISPLAY_CC 0x0E03001F
#endif
/*
 * Description: Contains the display name of the folder.
 * Alternate Names: PidTagDisplayName,PR_DISPLAY_NAME_A,ptagDisplayName
 * Property Type: PtypString
 */
#ifndef PR_DISPLAY_NAME
#define PR_DISPLAY_NAME 0x3001001F
#endif
/*
 * Description: Contains the mail user's honorific title.
 * Alternate Names: PidTagDisplayNamePrefix,PR_DISPLAY_NAME_PREFIX_A
 * Property Type: PtypString
 */
#ifndef PR_DISPLAY_NAME_PREFIX
#define PR_DISPLAY_NAME_PREFIX 0x3A45001F
#endif
/*
 * Description: Contains a list of the primary recipient display names, separated by semicolons,
 * Alternate Names: PidTagDisplayTo,PR_DISPLAY_TO_A,ptagDisplayTo,PR_DISPLAY_TO_W
 * Property Type: PtypString
 */
#ifndef PR_DISPLAY_TO
#define PR_DISPLAY_TO 0x0E04001F
#endif
/*
 * Description: Contains an integer value that indicates how to display an Address Book object in a
 * Alternate Names: PidTagDisplayType,ptagDisplayType
 * Property Type: PtypInteger32
 */
#ifndef PR_DISPLAY_TYPE
#define PR_DISPLAY_TYPE 0x39000003
#endif
/*
 * Description: Contains an integer value that indicates how to display an Address Book object in a
 * Alternate Names: PidTagDisplayTypeEx
 * Property Type: PtypInteger32
 */
#ifndef PR_DISPLAY_TYPE_EX
#define PR_DISPLAY_TYPE_EX 0x39050003
#endif
/*
 * Description: Contains the email address of a Message object.
 * Alternate Names: PidTagEmailAddress,PR_EMAIL_ADDRESS_A,PR_EMAIL_ADDRESS_W
 * Property Type: PtypString
 */
#ifndef PR_EMAIL_ADDRESS
#define PR_EMAIL_ADDRESS 0x3003001F
#endif
/*
 * Description: Contains the value of the PidLidAppointmentEndWhole property (section 2.14).
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagEndDate
#define PidTagEndDate 0x00610040
#endif
/*
 * Description: Contains the information to identify many different types of messaging objects.
 * Alternate Names: PidTagEntryId,ptagEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_ENTRYID
#define PR_ENTRYID 0x0FFF0102
#endif
/*
 * Description: Contains the end date and time of the exception in the local time zone of the computer
 * Alternate Names: PidTagExceptionEndTime,ptagExceptionEndTime
 * Property Type: PtypTime
 */
#ifndef PR_EXCEPTION_ENDTIME
#define PR_EXCEPTION_ENDTIME 0x7FFC0040
#endif
/*
 * Description: Indicates the original date and time, in UTC, at which the instance in the recurrence
 * Alternate Names: PidTagExceptionReplaceTime
 * Property Type: PtypTime
 */
#ifndef PR_EXCEPTION_REPLACETIME
#define PR_EXCEPTION_REPLACETIME 0x7FF90040
#endif
/*
 * Description: Contains the start date and time of the exception in the local time zone of the computer
 * Alternate Names: PidTagExceptionStartTime,ptagExceptionStartTime
 * Property Type: PtypTime
 */
#ifndef PR_EXCEPTION_STARTTIME
#define PR_EXCEPTION_STARTTIME 0x7FFB0040
#endif
/*
 * Description: Contains the calculated security descriptor for the item.
 * Alternate Names: 
 * Property Type: PtypBinary
 */
#ifndef PidTagExchangeNTSecurityDescriptor
#define PidTagExchangeNTSecurityDescriptor 0x0E840102
#endif
/*
 * Description: Contains an integer value that is used along with the PidTagExpiryUnits property
 * Alternate Names: PidTagExpiryNumber
 * Property Type: PtypInteger32
 */
#ifndef PR_EXPIRY_NUMBER
#define PR_EXPIRY_NUMBER 0x3FED0003
#endif
/*
 * Description: Contains the time, in UTC, after which a client wants to receive an expiry event if the
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagExpiryTime
#define PidTagExpiryTime 0x00150040
#endif
/*
 * Description: Contains the unit of time that the value of the PidTagExpiryNumber property (section
 * Alternate Names: PidTagExpiryUnits
 * Property Type: PtypInteger32
 */
#ifndef PR_EXPIRY_UNITS
#define PR_EXPIRY_UNITS 0x3FEE0003
#endif
/*
 * Description: Contains encoded sub-properties for a folder.
 * Alternate Names: PidTagExtendedFolderFlags,ptagExtendedFolderFlags
 * Property Type: PtypBinary
 */
#ifndef PR_EXTENDED_FOLDER_FLAGS
#define PR_EXTENDED_FOLDER_FLAGS 0x36DA0102
#endif
/*
 * Description: Contains action information about named properties used in the rule.
 * Alternate Names: PidTagExtendedRuleMessageActions
 * Property Type: PtypBinary
 */
#ifndef PR_EXTENDED_RULE_MSG_ACTIONS
#define PR_EXTENDED_RULE_MSG_ACTIONS 0x0E990102
#endif
/*
 * Description: Contains condition information about named properties used in the rule.
 * Alternate Names: PidTagExtendedRuleMessageCondition
 * Property Type: PtypBinary
 */
#ifndef PR_EXTENDED_RULE_MSG_CONDITION
#define PR_EXTENDED_RULE_MSG_CONDITION 0x0E9A0102
#endif
/*
 * Description: Contains the maximum size, in bytes, that the user is allowed to accumulate for a single
 * Alternate Names: PidTagExtendedRuleSizeLimit
 * Property Type: PtypInteger32
 */
#ifndef PR_EXTENDED_RULE_SIZE_LIMIT
#define PR_EXTENDED_RULE_SIZE_LIMIT 0x0E9B0003
#endif
/*
 * Description: Contains the number of pages in a Fax object.
 * Alternate Names: InternalSchemaFaxNumberOfPages
 * Property Type: PtypInteger32
 */
#ifndef PidTagFaxNumberOfPages
#define PidTagFaxNumberOfPages 0x68040003
#endif
/*
 * Description: Specifies the date and time, in UTC, that the Message object was flagged as complete.
 * Alternate Names: PidTagFlagCompleteTime,ptagFlagCompleteTime
 * Property Type: PtypTime
 */
#ifndef PR_FLAG_COMPLETE_TIME
#define PR_FLAG_COMPLETE_TIME 0x10910040
#endif
/*
 * Description: Specifies the flag state of the Message object.
 * Alternate Names: PidTagFlagStatus,ptagFlagStatus
 * Property Type: PtypInteger32
 */
#ifndef PR_FLAG_STATUS
#define PR_FLAG_STATUS 0x10900003
#endif
/*
 * Description: Contains a unique identifier for an item across the message store.
 * Alternate Names: PidTagFlatUrlName,PR_FLAT_URL_NAME_A,PR_FLAT_URL_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_FLAT_URL_NAME
#define PR_FLAT_URL_NAME 0x670E001F
#endif
/*
 * Description: Identifies all FAI messages in the current folder.
 * Alternate Names: PidTagFolderAssociatedContents
 * Property Type: PtypObject
 */
#ifndef PR_FOLDER_ASSOCIATED_CONTENTS
#define PR_FOLDER_ASSOCIATED_CONTENTS 0x3610000D
#endif
/*
 * Description: Contains the Folder ID (FID) ([MS-OXCDATA] section 2.2.1.1) of the folder.
 * Alternate Names: PidTagFolderId
 * Property Type: PtypInteger64
 */
#ifndef ptagFID
#define ptagFID 0x67480014
#endif
/*
 * Description: Contains a computed value to specify the type or state of a folder.
 * Alternate Names: PidTagFolderFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_FOLDER_FLAGS
#define PR_FOLDER_FLAGS 0x66A80003
#endif
/*
 * Description: Specifies the type of a folder that includes the Root folder, Generic folder, and Search
 * Alternate Names: PidTagFolderType,ptagFolderType
 * Property Type: PtypInteger32
 */
#ifndef PR_FOLDER_TYPE
#define PR_FOLDER_TYPE 0x36010003
#endif
/*
 * Description: Specifies the flag color of the Message object.
 * Alternate Names: PidTagFollowupIcon,ptagFollowupIcon
 * Property Type: PtypInteger32
 */
#ifndef PR_FOLLOWUP_ICON
#define PR_FOLLOWUP_ICON 0x10950003
#endif
/*
 * Description: Contains an integer value used to calculate the start and end dates of the range of
 * Alternate Names: PidTagFreeBusyCountMonths
 * Property Type: PtypInteger32
 */
#ifndef PR_FREEBUSY_COUNT_MONTHS
#define PR_FREEBUSY_COUNT_MONTHS 0x68690003
#endif
/*
 * Description: Contains EntryIDs of the Delegate Information object, the free/busy message of the
 * Alternate Names: PidTagFreeBusyEntryIds,ptagFreeBusyEntryIds
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_FREEBUSY_ENTRYIDS
#define PR_FREEBUSY_ENTRYIDS 0x36E41102
#endif
/*
 * Description: Specifies the email address of the user or resource to whom this free/busy message
 * Alternate Names: PidTagFreeBusyMessageEmailAddress
 * Property Type: PtypString
 */
#ifndef PR_FREEBUSY_EMA
#define PR_FREEBUSY_EMA 0x6849001F
#endif
/*
 * Description: Specifies the end time, in UTC, of the publishing range.
 * Alternate Names: PidTagFreeBusyPublishEnd
 * Property Type: PtypInteger32
 */
#ifndef PR_FREEBUSY_PUBLISH_END
#define PR_FREEBUSY_PUBLISH_END 0x68480003
#endif
/*
 * Description: Specifies the start time, in UTC, of the publishing range.
 * Alternate Names: PidTagFreeBusyPublishStart
 * Property Type: PtypInteger32
 */
#ifndef PR_FREEBUSY_PUBLISH_START
#define PR_FREEBUSY_PUBLISH_START 0x68470003
#endif
/*
 * Description: Specifies the time, in UTC, that the data was published.
 * Alternate Names: PidTagFreeBusyRangeTimestamp
 * Property Type: PtypTime
 */
#ifndef PR_FREEBUSY_RANGE_TIMESTAMP
#define PR_FREEBUSY_RANGE_TIMESTAMP 0x68680040
#endif
/*
 * Description: Contains the File Transfer Protocol (FTP) site address of the mail user.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagFtpSite
#define PidTagFtpSite 0x3A4C001F
#endif
/*
 * Description: This property is deprecated and SHOULD NOT be used.
 * Alternate Names: PidTagGatewayNeedsToRefresh
 * Property Type: PtypBoolean
 */
#ifndef PR_GATEWAY_NEEDS_TO_REFRESH
#define PR_GATEWAY_NEEDS_TO_REFRESH 0x6846000B
#endif
/*
 * Description: Contains a value that represents the mail user's gender.
 * Alternate Names: 
 * Property Type: PtypInteger16
 */
#ifndef PidTagGender
#define PidTagGender 0x3A4D0002
#endif
/*
 * Description: Contains a generational abbreviation that follows the full name of the mail user.
 * Alternate Names: PidTagGeneration,PR_GENERATION_A,PR_GENERATION_W
 * Property Type: PtypString
 */
#ifndef PR_GENERATION
#define PR_GENERATION 0x3A05001F
#endif
/*
 * Description: Contains the mail user's given name.
 * Alternate Names: PidTagGivenName,PR_GIVEN_NAME_A,PR_GIVEN_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_GIVEN_NAME
#define PR_GIVEN_NAME 0x3A06001F
#endif
/*
 * Description: Contains a government identifier for the mail user.
 * Alternate Names: PidTagGovernmentIdNumber,PR_GOVERNMENT_ID_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_GOVERNMENT_ID_NUMBER
#define PR_GOVERNMENT_ID_NUMBER 0x3A07001F
#endif
/*
 * Description: Indicates whether the Message object contains at least one attachment.
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidTagHasAttachments
#define PidTagHasAttachments 0x0E1B000B
#endif
/*
 * Description: Indicates whether a Message object has a deferred action message associated with it.
 * Alternate Names: PidTagHasDeferredActionMessages,ptagHasDAMs
 * Property Type: PtypBoolean
 */
#ifndef PR_HAS_DAMS
#define PR_HAS_DAMS 0x3FEA000B
#endif
/*
 * Description: Indicates whether the Message object has a named property.
 * Alternate Names: PidTagHasNamedProperties,ptagHasNamedProperties
 * Property Type: PtypBoolean
 */
#ifndef PR_HAS_NAMED_PROPERTIES
#define PR_HAS_NAMED_PROPERTIES 0x664A000B
#endif
/*
 * Description: Indicates whether a Folder object has rules.
 * Alternate Names: PidTagHasRules,ptagHasRules
 * Property Type: PtypBoolean
 */
#ifndef PR_HAS_RULES
#define PR_HAS_RULES 0x663A000B
#endif
/*
 * Description: Contains a number that monotonically increases every time a subfolder is added to, or
 * Alternate Names: PidTagHierarchyChangeNumber
 * Property Type: PtypInteger32
 */
#ifndef PR_HIERARCHY_CHANGE_NUM
#define PR_HIERARCHY_CHANGE_NUM 0x663E0003
#endif
/*
 * Description: Specifies the time, in UTC, to trigger the client in cached mode to synchronize the folder
 * Alternate Names: PidTagHierRev,ptagHierRev
 * Property Type: PtypTime
 */
#ifndef PR_HIER_REV
#define PR_HIER_REV 0x40820040
#endif
/*
 * Description: Contains the names of the mail user's hobbies.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagHobbies
#define PidTagHobbies 0x3A43001F
#endif
/*
 * Description: Contains a secondary telephone number at the mail user's home.
 * Alternate Names: PidTagHome2TelephoneNumber,PR_HOME2_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_HOME2_TELEPHONE_NUMBER
#define PR_HOME2_TELEPHONE_NUMBER 0x3A2F001F
#endif
/*
 * Description: Contains secondary telephone numbers at the mail user's home.
 * Alternate Names: PidTagHome2TelephoneNumbers
 * Property Type: PtypMultipleString
 */
#ifndef PR_HOME2_TELEPHONE_NUMBER_A_MV
#define PR_HOME2_TELEPHONE_NUMBER_A_MV 0x3A2F101F
#endif
/*
 * Description: Contains the name of the mail user's home locality, such as the town or city.
 * Alternate Names: PidTagHomeAddressCity,PR_HOME_ADDRESS_CITY_A
 * Property Type: PtypString
 */
#ifndef PR_HOME_ADDRESS_CITY
#define PR_HOME_ADDRESS_CITY 0x3A59001F
#endif
/*
 * Description: Contains the name of the mail user's home country/region.
 * Alternate Names: PidTagHomeAddressCountry,PR_HOME_ADDRESS_COUNTRY_A
 * Property Type: PtypString
 */
#ifndef PR_HOME_ADDRESS_COUNTRY
#define PR_HOME_ADDRESS_COUNTRY 0x3A5A001F
#endif
/*
 * Description: Contains the postal code for the mail user's home postal address.
 * Alternate Names: PidTagHomeAddressPostalCode,PR_HOME_ADDRESS_POSTAL_CODE_A
 * Property Type: PtypString
 */
#ifndef PR_HOME_ADDRESS_POSTAL_CODE
#define PR_HOME_ADDRESS_POSTAL_CODE 0x3A5B001F
#endif
/*
 * Description: Contains the number or identifier of the mail user's home post office box.
 * Alternate Names: PidTagHomeAddressPostOfficeBox
 * Property Type: PtypString
 */
#ifndef PR_HOME_ADDRESS_POST_OFFICE_BOX
#define PR_HOME_ADDRESS_POST_OFFICE_BOX 0x3A5E001F
#endif
/*
 * Description: Contains the name of the mail user's home state or province.
 * Alternate Names: PidTagHomeAddressStateOrProvince
 * Property Type: PtypString
 */
#ifndef PR_HOME_ADDRESS_STATE_OR_PROVINCE
#define PR_HOME_ADDRESS_STATE_OR_PROVINCE 0x3A5C001F
#endif
/*
 * Description: Contains the mail user's home street address.
 * Alternate Names: PidTagHomeAddressStreet,PR_HOME_ADDRESS_STREET_A
 * Property Type: PtypString
 */
#ifndef PR_HOME_ADDRESS_STREET
#define PR_HOME_ADDRESS_STREET 0x3A5D001F
#endif
/*
 * Description: Contains the telephone number of the mail user's home fax machine.
 * Alternate Names: PidTagHomeFaxNumber,PR_HOME_FAX_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_HOME_FAX_NUMBER
#define PR_HOME_FAX_NUMBER 0x3A25001F
#endif
/*
 * Description: Contains the primary telephone number of the mail user's home.
 * Alternate Names: PidTagHomeTelephoneNumber,PR_HOME_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_HOME_TELEPHONE_NUMBER
#define PR_HOME_TELEPHONE_NUMBER 0x3A09001F
#endif
/*
 * Description: Contains message body text in HTML format.
 * Alternate Names: PidTagHtml,ptagHtml
 * Property Type: PtypBinary
 */
#ifndef PR_HTML
#define PR_HTML 0x10130102
#endif
/*
 * Description: Contains the date and time, in UTC, when an appointment or meeting ends.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagICalendarEndTime
#define PidTagICalendarEndTime 0x10C40040
#endif
/*
 * Description: Contains the date and time, in UTC, for the activation of the next reminder.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagICalendarReminderNextTime
#define PidTagICalendarReminderNextTime 0x10CA0040
#endif
/*
 * Description: Contains the date and time, in UTC, when the appointment or meeting starts.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagICalendarStartTime
#define PidTagICalendarStartTime 0x10C30040
#endif
/*
 * Description: Specifies which icon is to be used by a user interface when displaying a group of
 * Alternate Names: PidTagIconIndex,ptagIconIndex
 * Property Type: PtypInteger32
 */
#ifndef PR_ICON_INDEX
#define PR_ICON_INDEX 0x10800003
#endif
/*
 * Description: Indicates the level of importance assigned by the end user to the Message object.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidTagImportance
#define PidTagImportance 0x00170003
#endif
/*
 * Description: Specifies whether the attachment represents an alternate replica.
 * Alternate Names: PidTagInConflict,ptagInConflict
 * Property Type: PtypBoolean
 */
#ifndef PR_IN_CONFLICT
#define PR_IN_CONFLICT 0x666C000B
#endif
/*
 * Description: Indicates which page of a display template to display first.
 * Alternate Names: PidTagInitialDetailsPane
 * Property Type: PtypInteger32
 */
#ifndef PR_INITIAL_DETAILS_PANE
#define PR_INITIAL_DETAILS_PANE 0x3F080003
#endif
/*
 * Description: Contains the initials for parts of the full name of the mail user.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagInitials
#define PidTagInitials 0x3A0A001F
#endif
/*
 * Description: Contains the value of the original message's PidTagInternetMessageId property
 * Alternate Names: PidTagInReplyToId,PR_IN_REPLY_TO_ID_A,PR_IN_REPLY_TO_ID_W
 * Property Type: PtypString
 */
#ifndef PR_IN_REPLY_TO_ID
#define PR_IN_REPLY_TO_ID 0x1042001F
#endif
/*
 * Description: Contains an object on an NSPI server.
 * Alternate Names: PidTagInstanceKey,ptagInstanceKey
 * Property Type: PtypBinary
 */
#ifndef PR_INSTANCE_KEY
#define PR_INSTANCE_KEY 0x0FF60102
#endif
/*
 * Description: Contains an identifier for a single instance of a row in the table.
 * Alternate Names: PidTagInstanceNum
 * Property Type: PtypInteger32
 */
#ifndef ptagInstanceNum
#define ptagInstanceNum 0x674E0003
#endif
/*
 * Description: Contains an identifier for all instances of a row in the table.
 * Alternate Names: PidTagInstID
 * Property Type: PtypInteger64
 */
#ifndef ptagInstID
#define ptagInstID 0x674D0014
#endif
/*
 * Description: Indicates the code page used for the PidTagBody property (section 2.618) or the
 * Alternate Names: PidTagInternetCodepage,ptagInternetCpid
 * Property Type: PtypInteger32
 */
#ifndef PR_INTERNET_CPID
#define PR_INTERNET_CPID 0x3FDE0003
#endif
/*
 * Description: Indicates the encoding method and HTML inclusion for attachments.
 * Alternate Names: PidTagInternetMailOverrideFormat,ptagInetMailOverrideFormat
 * Property Type: PtypInteger32
 */
#ifndef PR_INETMAIL_OVERRIDE_FORMAT
#define PR_INETMAIL_OVERRIDE_FORMAT 0x59020003
#endif
/*
 * Description: Corresponds to the message-id field.
 * Alternate Names: PidTagInternetMessageId,PR_INTERNET_MESSAGE_ID_A
 * Property Type: PtypString
 */
#ifndef PR_INTERNET_MESSAGE_ID
#define PR_INTERNET_MESSAGE_ID 0x1035001F
#endif
/*
 * Description: Contains a list of message IDs that specify the messages to which this reply is related.
 * Alternate Names: PidTagInternetReferences,PR_INTERNET_REFERENCES_A
 * Property Type: PtypString
 */
#ifndef PR_INTERNET_REFERENCES
#define PR_INTERNET_REFERENCES 0x1039001F
#endif
/*
 * Description: Contains the EntryID of the Calendar folder.
 * Alternate Names: PidTagIpmAppointmentEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_IPM_APPOINTMENT_ENTRYID
#define PR_IPM_APPOINTMENT_ENTRYID 0x36D00102
#endif
/*
 * Description: Contains the EntryID of the Contacts folder.
 * Alternate Names: PidTagIpmContactEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_IPM_CONTACT_ENTRYID
#define PR_IPM_CONTACT_ENTRYID 0x36D10102
#endif
/*
 * Description: Contains the EntryID of the Drafts folder.
 * Alternate Names: PidTagIpmDraftsEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_IPM_DRAFTS_ENTRYID
#define PR_IPM_DRAFTS_ENTRYID 0x36D70102
#endif
/*
 * Description: Contains the EntryID of the Journal folder.
 * Alternate Names: PidTagIpmJournalEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_IPM_JOURNAL_ENTRYID
#define PR_IPM_JOURNAL_ENTRYID 0x36D20102
#endif
/*
 * Description: Contains the EntryID of the Notes folder.
 * Alternate Names: PidTagIpmNoteEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_IPM_NOTE_ENTRYID
#define PR_IPM_NOTE_ENTRYID 0x36D30102
#endif
/*
 * Description: Contains the EntryID of the Tasks folder.
 * Alternate Names: PidTagIpmTaskEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_IPM_TASK_ENTRYID
#define PR_IPM_TASK_ENTRYID 0x36D40102
#endif
/*
 * Description: Contains the Integrated Services Digital Network (ISDN) telephone number of the
 * Alternate Names: PidTagIsdnNumber,PR_ISDN_NUMBER_A,PR_ISDN_NUMBER_W
 * Property Type: PtypString
 */
#ifndef PR_ISDN_NUMBER
#define PR_ISDN_NUMBER 0x3A2D001F
#endif
/*
 * Description: Indicates whether email recipients are to be added to the safe senders list.
 * Alternate Names: PidTagJunkAddRecipientsToSafeSendersList
 * Property Type: PtypInteger32
 */
#ifndef PR_JUNK_ADD_RECIPS_TO_SSL
#define PR_JUNK_ADD_RECIPS_TO_SSL 0x61030003
#endif
/*
 * Description: Indicates whether email addresses of the contacts in the Contacts folder are treated in
 * Alternate Names: PidTagJunkIncludeContacts
 * Property Type: PtypInteger32
 */
#ifndef PR_JUNK_INCLUDE_CONTACTS
#define PR_JUNK_INCLUDE_CONTACTS 0x61000003
#endif
/*
 * Description: Indicates whether messages identified as spam can be permanently deleted.
 * Alternate Names: PidTagJunkPermanentlyDelete
 * Property Type: PtypInteger32
 */
#ifndef PR_JUNK_PERMANENTLY_DELETE
#define PR_JUNK_PERMANENTLY_DELETE 0x61020003
#endif
/*
 * Description: Indicated whether the phishing stamp on a message is to be ignored.
 * Alternate Names: PidTagJunkPhishingEnableLinks
 * Property Type: PtypBoolean
 */
#ifndef PR_JUNK_PHISHING_ENABLE_LINKS
#define PR_JUNK_PHISHING_ENABLE_LINKS 0x6107000B
#endif
/*
 * Description: Indicates how aggressively incoming email is to be sent to the Junk Email folder.
 * Alternate Names: PidTagJunkThreshold
 * Property Type: PtypInteger32
 */
#ifndef PR_JUNK_THRESHOLD
#define PR_JUNK_THRESHOLD 0x61010003
#endif
/*
 * Description: Contains a keyword that identifies the mail user to the mail user's system
 * Alternate Names: PidTagKeyword,PR_KEYWORD_A,PR_KEYWORD_W
 * Property Type: PtypString
 */
#ifndef PR_KEYWORD
#define PR_KEYWORD 0x3A0B001F
#endif
/*
 * Description: Contains a value that indicates the language in which the messaging user is writing
 * Alternate Names: PidTagLanguage,PR_LANGUAGE_A,PR_LANGUAGE_W
 * Property Type: PtypString
 */
#ifndef PR_LANGUAGE
#define PR_LANGUAGE 0x3A0C001F
#endif
/*
 * Description: Contains the time, in UTC, of the last modification to the object.
 * Alternate Names: PidTagLastModificationTime,ptagLastModificationTime
 * Property Type: PtypTime
 */
#ifndef PR_LAST_MODIFICATION_TIME
#define PR_LAST_MODIFICATION_TIME 0x30080040
#endif
/*
 * Description: Specifies the Address Book EntryID of the last user to modify the contents of the
 * Alternate Names: PidTagLastModifierEntryId,ptagLastModifierEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_LAST_MODIFIER_ENTRYID
#define PR_LAST_MODIFIER_ENTRYID 0x3FFB0102
#endif
/*
 * Description: Contains the name of the last mail user to change the Message object.
 * Alternate Names: PidTagLastModifierName,PR_LAST_MODIFIER_NAME_A,ptagLastModifierName
 * Property Type: PtypString
 */
#ifndef PR_LAST_MODIFIER_NAME
#define PR_LAST_MODIFIER_NAME 0x3FFA001F
#endif
/*
 * Description: Specifies the last verb executed for the message item to which it is related.
 * Alternate Names: PidTagLastVerbExecuted,ptagLastVerbExecuted
 * Property Type: PtypInteger32
 */
#ifndef PR_LAST_VERB_EXECUTED
#define PR_LAST_VERB_EXECUTED 0x10810003
#endif
/*
 * Description: Contains the date and time, in UTC, during which the operation represented in the
 * Alternate Names: PidTagLastVerbExecutionTime,ptagLastVerbExecutionTime
 * Property Type: PtypTime
 */
#ifndef PR_LAST_VERB_EXECUTION_TIME
#define PR_LAST_VERB_EXECUTION_TIME 0x10820040
#endif
/*
 * Description: Contains a URI that provides detailed help information for the mailing list from which an
 * Alternate Names: PidTagListHelp,PR_LIST_HELP_A,PR_LIST_HELP_W
 * Property Type: PtypString
 */
#ifndef PR_LIST_HELP
#define PR_LIST_HELP 0x1043001F
#endif
/*
 * Description: Contains the URI that subscribes a recipient to a message’s associated mailing list.
 * Alternate Names: PidTagListSubscribe,PR_LIST_SUBSCRIBE_A,PR_LIST_SUBSCRIBE_W
 * Property Type: PtypString
 */
#ifndef PR_LIST_SUBSCRIBE
#define PR_LIST_SUBSCRIBE 0x1044001F
#endif
/*
 * Description: Contains the URI that unsubscribes a recipient from a message’s associated mailing
 * Alternate Names: PidTagListUnsubscribe,PR_LIST_UNSUBSCRIBE_A,PR_LIST_UNSUBSCRIBE_W
 * Property Type: PtypString
 */
#ifndef PR_LIST_UNSUBSCRIBE
#define PR_LIST_UNSUBSCRIBE 0x1045001F
#endif
/*
 * Description: Specifies the time, in UTC, that a Message object or Folder object was last changed.
 * Alternate Names: PidTagLocalCommitTime,ptagLocalCommitTime
 * Property Type: PtypTime
 */
#ifndef PR_LOCAL_COMMIT_TIME
#define PR_LOCAL_COMMIT_TIME 0x67090040
#endif
/*
 * Description: Contains the time of the most recent message change within the folder container,
 * Alternate Names: PidTagLocalCommitTimeMax,ptagLocalCommitTimeMax
 * Property Type: PtypTime
 */
#ifndef PR_LOCAL_COMMIT_TIME_MAX
#define PR_LOCAL_COMMIT_TIME_MAX 0x670A0040
#endif
/*
 * Description: Contains the Logon object LocaleID.
 * Alternate Names: PidTagLocaleId,ptagLocaleId
 * Property Type: PtypInteger32
 */
#ifndef PR_LOCALE_ID
#define PR_LOCALE_ID 0x66A10003
#endif
/*
 * Description: Contains the name of the mail user's locality, such as the town or city.
 * Alternate Names: PidTagLocality,PR_LOCALITY_A,PR_LOCALITY_W
 * Property Type: PtypString
 */
#ifndef PR_LOCALITY
#define PR_LOCALITY 0x3A27001F
#endif
/*
 * Description: Contains the location of the mail user.
 * Alternate Names: PidTagLocation,PR_LOCATION_A,PR_LOCATION_W
 * Property Type: PtypString
 */
#ifndef PR_LOCATION
#define PR_LOCATION 0x3A0D001F
#endif
/*
 * Description: Contains the EntryID in the Global Address List (GAL) of the owner of the mailbox.
 * Alternate Names: PidTagMailboxOwnerEntryId,ptagMailboxOwnerEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_MAILBOX_OWNER_ENTRYID
#define PR_MAILBOX_OWNER_ENTRYID 0x661B0102
#endif
/*
 * Description: Contains the display name of the owner of the mailbox.
 * Alternate Names: PidTagMailboxOwnerName,PR_MAILBOX_OWNER_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_MAILBOX_OWNER_NAME
#define PR_MAILBOX_OWNER_NAME 0x661C001F
#endif
/*
 * Description: Contains the name of the mail user's manager.
 * Alternate Names: PidTagManagerName,PR_MANAGER_NAME_A,PR_MANAGER_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_MANAGER_NAME
#define PR_MANAGER_NAME 0x3A4E001F
#endif
/*
 * Description: A 16-byte constant that is present on all Address Book objects, but is not present on
 * Alternate Names: PidTagMappingSignature,ptagMappingSignature
 * Property Type: PtypBinary
 */
#ifndef PR_MAPPING_SIGNATURE
#define PR_MAPPING_SIGNATURE 0x0FF80102
#endif
/*
 * Description: Maximum size, in kilobytes, of a message that a user is allowed to submit for
 * Alternate Names: PidTagMaximumSubmitMessageSize
 * Property Type: PtypInteger32
 */
#ifndef PR_MAX_SUBMIT_MESSAGE_SIZE
#define PR_MAX_SUBMIT_MESSAGE_SIZE 0x666D0003
#endif
/*
 * Description: Contains a unique identifier that the messaging server generates for each user.
 * Alternate Names: PidTagMemberId,ptagMemberId
 * Property Type: PtypInteger64
 */
#ifndef PR_MEMBER_ID
#define PR_MEMBER_ID 0x66710014
#endif
/*
 * Description: Contains the user-readable name of the user.
 * Alternate Names: PidTagMemberName,PR_MEMBER_NAME_A,ptagMemberName
 * Property Type: PtypString
 */
#ifndef PR_MEMBER_NAME
#define PR_MEMBER_NAME 0x6672001F
#endif
/*
 * Description: Contains the permissions for the specified user.
 * Alternate Names: PidTagMemberRights,ptagMemberRights
 * Property Type: PtypInteger32
 */
#ifndef PR_MEMBER_RIGHTS
#define PR_MEMBER_RIGHTS 0x66730003
#endif
/*
 * Description: Identifies all attachments to the current message.
 * Alternate Names: PidTagMessageAttachments,ptagMessageAttachments
 * Property Type: PtypObject
 */
#ifndef PR_MESSAGE_ATTACHMENTS
#define PR_MESSAGE_ATTACHMENTS 0x0E13000D
#endif
/*
 * Description: 
 * Alternate Names: PidTagMessageCcMe,ptagMessageCcMe
 * Property Type: PtypBoolean
 */
#ifndef PR_MESSAGE_CC_ME
#define PR_MESSAGE_CC_ME 0x0058000B
#endif
/*
 * Description: Denotes the specific type of the Message object.
 * Alternate Names: PidTagMessageClass,PR_MESSAGE_CLASS_A,ptagMessageClass
 * Property Type: PtypString
 */
#ifndef PR_MESSAGE_CLASS
#define PR_MESSAGE_CLASS 0x001A001F
#endif
/*
 * Description: Specifies the code page used to encode the non-Unicode string properties on this
 * Alternate Names: PidTagMessageCodepage
 * Property Type: PtypInteger32
 */
#ifndef PR_MESSAGE_CODEPAGE
#define PR_MESSAGE_CODEPAGE 0x3FFD0003
#endif
/*
 * Description: Specifies the time (in UTC) when the server received the message.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagMessageDeliveryTime
#define PidTagMessageDeliveryTime 0x0E060040
#endif
/*
 * Description: Specifies the format that an email editor can use for editing the message body.
 * Alternate Names: PidTagMessageEditorFormat,ptagMsgEditorFormat
 * Property Type: PtypInteger32
 */
#ifndef PR_MSG_EDITOR_FORMAT
#define PR_MSG_EDITOR_FORMAT 0x59090003
#endif
/*
 * Description: Specifies the status of the Message object.
 * Alternate Names: PidTagMessageFlags,ptagMessageFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_MESSAGE_FLAGS
#define PR_MESSAGE_FLAGS 0x0E070003
#endif
/*
 * Description: Contains the common name of a messaging user for use in a message header.
 * Alternate Names: PidTagMessageHandlingSystemCommonName,PR_MHS_COMMON_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_MHS_COMMON_NAME
#define PR_MHS_COMMON_NAME 0x3A0F001F
#endif
/*
 * Description: Contains the Windows Locale ID of the end-user who created this message.
 * Alternate Names: PidTagMessageLocaleId
 * Property Type: PtypInteger32
 */
#ifndef PR_MESSAGE_LOCALE_ID
#define PR_MESSAGE_LOCALE_ID 0x3FF10003
#endif
/*
 * Description: Indicates that the receiving mailbox owner is a primary or a carbon copy (Cc)
 * Alternate Names: PidTagMessageRecipientMe,ptagMessageRecipMe
 * Property Type: PtypBoolean
 */
#ifndef PR_MESSAGE_RECIP_ME
#define PR_MESSAGE_RECIP_ME 0x0059000B
#endif
/*
 * Description: Identifies all of the recipients of the current message.
 * Alternate Names: PidTagMessageRecipients,ptagMessageRecipients
 * Property Type: PtypObject
 */
#ifndef PR_MESSAGE_RECIPIENTS
#define PR_MESSAGE_RECIPIENTS 0x0E12000D
#endif
/*
 * Description: Contains the size, in bytes, consumed by the Message object on the server.
 * Alternate Names: PidTagMessageSize,ptagMessageSize
 * Property Type: PtypInteger32
 */
#ifndef PR_MESSAGE_SIZE
#define PR_MESSAGE_SIZE 0x0E080003
#endif
/*
 * Description: Specifies the 64-bit version of the PidTagMessageSize property (section 2.796).
 * Alternate Names: PidTagMessageSizeExtended,ptagMessageSizeExtended
 * Property Type: PtypInteger64
 */
#ifndef PR_MESSAGE_SIZE_EXTENDED
#define PR_MESSAGE_SIZE_EXTENDED 0x0E080014
#endif
/*
 * Description: Specifies the status of a message in a contents table.
 * Alternate Names: PidTagMessageStatus,ptagMsgStatus
 * Property Type: PtypInteger32
 */
#ifndef PR_MSG_STATUS
#define PR_MSG_STATUS 0x0E170003
#endif
/*
 * Description: Contains a message identifier assigned by a message transfer agent.
 * Alternate Names: PidTagMessageSubmissionId,ptagMessageSubmissionId
 * Property Type: PtypBinary
 */
#ifndef PR_MESSAGE_SUBMISSION_ID
#define PR_MESSAGE_SUBMISSION_ID 0x00470102
#endif
/*
 * Description: Indicates that the receiving mailbox owner is one of the primary recipients of this
 * Alternate Names: PidTagMessageToMe,ptagMessageToMe
 * Property Type: PtypBoolean
 */
#ifndef PR_MESSAGE_TO_ME
#define PR_MESSAGE_TO_ME 0x0057000B
#endif
/*
 * Description: Contains a value that contains the MID of the message currently being synchronized.
 * Alternate Names: 
 * Property Type: PtypInteger64
 */
#ifndef PidTagMid
#define PidTagMid 0x674A0014
#endif
/*
 * Description: Specifies the middle name(s) of the contact.
 * Alternate Names: PidTagMiddleName,PR_MIDDLE_NAME_A,PR_MIDDLE_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_MIDDLE_NAME
#define PR_MIDDLE_NAME 0x3A44001F
#endif
/*
 * Description: Contains the top-level MIME message headers, all MIME message body part headers,
 * Alternate Names: PidTagMimeSkeleton
 * Property Type: PtypBinary
 */
#ifndef ptagMimeSkeleton
#define ptagMimeSkeleton 0x64F00102
#endif
/*
 * Description: Contains the mail user's cellular telephone number.
 * Alternate Names: PidTagMobileTelephoneNumber,PR_MOBILE_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_MOBILE_TELEPHONE_NUMBER
#define PR_MOBILE_TELEPHONE_NUMBER 0x3A1C001F
#endif
/*
 * Description: Indicates the best available format for storing the message body.
 * Alternate Names: PidTagNativeBody,ptagNativeBodyInfo
 * Property Type: PtypInteger32
 */
#ifndef PR_NATIVE_BODY_INFO
#define PR_NATIVE_BODY_INFO 0x10160003
#endif
/*
 * Description: Specifies the server that a client is currently attempting to use to send email.
 * Alternate Names: PidTagNextSendAcct
 * Property Type: PtypString
 */
#ifndef PR_NEXT_SEND_ACCT
#define PR_NEXT_SEND_ACCT 0x0E29001F
#endif
/*
 * Description: Contains the mail user's nickname.
 * Alternate Names: PidTagNickname,PR_NICKNAME_A,PR_NICKNAME_W
 * Property Type: PtypString
 */
#ifndef PR_NICKNAME
#define PR_NICKNAME 0x3A4F001F
#endif
/*
 * Description: Contains the diagnostic code for a delivery status notification, as specified in [RFC3464].
 * Alternate Names: PidTagNonDeliveryReportDiagCode,ptagNonDeliveryDiagCode
 * Property Type: PtypInteger32
 */
#ifndef PR_NDR_DIAG_CODE
#define PR_NDR_DIAG_CODE 0x0C050003
#endif
/*
 * Description: Contains an integer value that indicates a reason for delivery failure.
 * Alternate Names: PidTagNonDeliveryReportReasonCode,ptagNDRReasonCode
 * Property Type: PtypInteger32
 */
#ifndef PR_NDR_REASON_CODE
#define PR_NDR_REASON_CODE 0x0C040003
#endif
/*
 * Description: Specifies whether the client sends a non-read receipt.
 * Alternate Names: PidTagNonDeliveryReportStatusCode,ptagNDRStatusCode,PR_NON_RECEIPT_NOTIFICATION_REQUESTED
 * Property Type: PtypBoolean
 */
#ifndef PR_NDR_STATUS_CODE
#define PR_NDR_STATUS_CODE 0x0C06000B
#endif
/*
 * Description: Contains the normalized subject of the message.
 * Alternate Names: PidTagNormalizedSubject,PR_NORMALIZED_SUBJECT_A
 * Property Type: PtypString
 */
#ifndef PR_NORMALIZED_SUBJECT
#define PR_NORMALIZED_SUBJECT 0x0E1D001F
#endif
/*
 * Description: Indicates the type of Server object.
 * Alternate Names: PidTagObjectType,ptagObjectType
 * Property Type: PtypInteger32
 */
#ifndef PR_OBJECT_TYPE
#define PR_OBJECT_TYPE 0x0FFE0003
#endif
/*
 * Description: Contains the mail user's office location.
 * Alternate Names: PidTagOfficeLocation,PR_OFFICE_LOCATION_A,PR_OFFICE_LOCATION_W
 * Property Type: PtypString
 */
#ifndef PR_OFFICE_LOCATION
#define PR_OFFICE_LOCATION 0x3A19001F
#endif
/*
 * Description: A string-formatted GUID that represents the address list container object.
 * Alternate Names: PidTagOfflineAddressBookContainerGuid,PR_OAB_CONTAINER_GUID_W
 * Property Type: PtypString8
 */
#ifndef PR_OAB_CONTAINER_GUID
#define PR_OAB_CONTAINER_GUID 0x6802001E
#endif
/*
 * Description: Contains the DN of the address list that is contained in the OAB message.
 * Alternate Names: PidTagOfflineAddressBookDistinguishedName,PR_OAB_DN_W
 * Property Type: PtypString8
 */
#ifndef PR_OAB_DN
#define PR_OAB_DN 0x6804001E
#endif
/*
 * Description: Contains the message class for full OAB messages.
 * Alternate Names: PidTagOfflineAddressBookMessageClass
 * Property Type: PtypInteger32
 */
#ifndef PR_OAB_MESSAGE_CLASS
#define PR_OAB_MESSAGE_CLASS 0x68030003
#endif
/*
 * Description: Contains the display name of the address list.
 * Alternate Names: PidTagOfflineAddressBookName,PR_OAB_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_OAB_NAME
#define PR_OAB_NAME 0x6800001F
#endif
/*
 * Description: Contains the sequence number of the OAB.
 * Alternate Names: PidTagOfflineAddressBookSequence
 * Property Type: PtypInteger32
 */
#ifndef PR_OAB_SEQUENCE
#define PR_OAB_SEQUENCE 0x68010003
#endif
/*
 * Description: Contains a list of the property tags that have been truncated or limited by the server.
 * Alternate Names: PidTagOfflineAddressBookTruncatedProperties
 * Property Type: PtypMultipleInteger32
 */
#ifndef PR_OAB_TRUNCATED_PROPS
#define PR_OAB_TRUNCATED_PROPS 0x68051003
#endif
/*
 * Description: Contains a positive number whose negative is less than or equal to the value of the
 * Alternate Names: PidTagOrdinalMost
 * Property Type: PtypInteger32
 */
#ifndef PR_ORDINAL_MOST
#define PR_ORDINAL_MOST 0x36E20003
#endif
/*
 * Description: Contains an identifier for the mail user used within the mail user's organization.
 * Alternate Names: PidTagOrganizationalIdNumber,PR_ORGANIZATIONAL_ID_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_ORGANIZATIONAL_ID_NUMBER
#define PR_ORGANIZATIONAL_ID_NUMBER 0x3A10001F
#endif
/*
 * Description: Contains an address book EntryID structure ([MS-OXCDATA] section 2.2.5.2) and is
 * Alternate Names: PidTagOriginalAuthorEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_ORIGINAL_AUTHOR_ENTRYID
#define PR_ORIGINAL_AUTHOR_ENTRYID 0x004C0102
#endif
/*
 * Description: Contains the display name of the sender of the original message referenced by a report
 * Alternate Names: PidTagOriginalAuthorName
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_AUTHOR_NAME_W
#define PR_ORIGINAL_AUTHOR_NAME_W 0x004D001F
#endif
/*
 * Description: Contains the delivery time, in UTC, from the original message.
 * Alternate Names: PidTagOriginalDeliveryTime,ptagOriginalDeliveryTime
 * Property Type: PtypTime
 */
#ifndef PR_ORIGINAL_DELIVERY_TIME
#define PR_ORIGINAL_DELIVERY_TIME 0x00550040
#endif
/*
 * Description: Contains the value of the PidTagDisplayBcc property (section 2.674) from the original
 * Alternate Names: PidTagOriginalDisplayBcc,PR_ORIGINAL_DISPLAY_BCC_A
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_DISPLAY_BCC
#define PR_ORIGINAL_DISPLAY_BCC 0x0072001F
#endif
/*
 * Description: Contains the value of the PidTagDisplayCc property(section 2.675) from the original
 * Alternate Names: PidTagOriginalDisplayCc,PR_ORIGINAL_DISPLAY_CC_A
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_DISPLAY_CC
#define PR_ORIGINAL_DISPLAY_CC 0x0073001F
#endif
/*
 * Description: Contains the value of the PidTagDisplayTo property (section 2.678) from the original
 * Alternate Names: PidTagOriginalDisplayTo,PR_ORIGINAL_DISPLAY_TO_A
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_DISPLAY_TO
#define PR_ORIGINAL_DISPLAY_TO 0x0074001F
#endif
/*
 * Description: Contains the original EntryID of an object.
 * Alternate Names: PidTagOriginalEntryId,ptagOriginalEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_ORIGINAL_ENTRYID
#define PR_ORIGINAL_ENTRYID 0x3A120102
#endif
/*
 * Description: Designates the PidTagMessageClass property ([MS-OXCMSG] section 2.2.1.3) from
 * Alternate Names: PidTagOriginalMessageClass,PR_ORIG_MESSAGE_CLASS_A
 * Property Type: PtypString
 */
#ifndef PR_ORIG_MESSAGE_CLASS
#define PR_ORIG_MESSAGE_CLASS 0x004B001F
#endif
/*
 * Description: Contains the message ID of the original message included in replies or resent messages.
 * Alternate Names: PidTagOriginalMessageId,ptagOriginalInternetMessageID
 * Property Type: PtypString
 */
#ifndef OriginalMessageId
#define OriginalMessageId 0x1046001F
#endif
/*
 * Description: Contains the value of the original message sender's PidTagSenderAddressType
 * Alternate Names: PidTagOriginalSenderAddressType,PR_ORIGINAL_SENDER_ADDRTYPE_A
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_SENDER_ADDRTYPE
#define PR_ORIGINAL_SENDER_ADDRTYPE 0x0066001F
#endif
/*
 * Description: Contains the value of the original message sender's PidTagSenderEmailAddress
 * Alternate Names: PidTagOriginalSenderEmailAddress
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_SENDER_EMAIL_ADDRESS
#define PR_ORIGINAL_SENDER_EMAIL_ADDRESS 0x0067001F
#endif
/*
 * Description: Contains an address book EntryID that is set on delivery report messages.
 * Alternate Names: PidTagOriginalSenderEntryId,ptagOriginalSenderEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_ORIGINAL_SENDER_ENTRYID
#define PR_ORIGINAL_SENDER_ENTRYID 0x005B0102
#endif
/*
 * Description: Contains the value of the original message sender's PidTagSenderName property
 * Alternate Names: PidTagOriginalSenderName,PR_ORIGINAL_SENDER_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_SENDER_NAME
#define PR_ORIGINAL_SENDER_NAME 0x005A001F
#endif
/*
 * Description: Contains an address book search key set on the original email message.
 * Alternate Names: PidTagOriginalSenderSearchKey,ptagOriginalSenderSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_ORIGINAL_SENDER_SEARCH_KEY
#define PR_ORIGINAL_SENDER_SEARCH_KEY 0x005C0102
#endif
/*
 * Description: Contains the sensitivity value of the original email message.
 * Alternate Names: PidTagOriginalSensitivity,ptagOriginalSensitivity
 * Property Type: PtypInteger32
 */
#ifndef PR_ORIGINAL_SENSITIVITY
#define PR_ORIGINAL_SENSITIVITY 0x002E0003
#endif
/*
 * Description: Contains the address type of the end user who is represented by the original email
 * Alternate Names: PidTagOriginalSentRepresentingAddressType
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_SENT_REPRESENTING_ADDRTYPE
#define PR_ORIGINAL_SENT_REPRESENTING_ADDRTYPE 0x0068001F
#endif
/*
 * Description: Contains the email address of the end user who is represented by the original email
 * Alternate Names: PidTagOriginalSentRepresentingEmailAddress
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_SENT_REPRESENTING_EMAIL_ADDRESS
#define PR_ORIGINAL_SENT_REPRESENTING_EMAIL_ADDRESS 0x0069001F
#endif
/*
 * Description: Identifies an address book EntryID that contains the entry identifier of the end user
 * Alternate Names: PidTagOriginalSentRepresentingEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_ORIGINAL_SENT_REPRESENTING_ENTRYID
#define PR_ORIGINAL_SENT_REPRESENTING_ENTRYID 0x005E0102
#endif
/*
 * Description: Contains the display name of the end user who is represented by the original email
 * Alternate Names: PidTagOriginalSentRepresentingName
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_SENT_REPRESENTING_NAME
#define PR_ORIGINAL_SENT_REPRESENTING_NAME 0x005D001F
#endif
/*
 * Description: Identifies an address book search key that contains the SearchKey of the end user who
 * Alternate Names: PidTagOriginalSentRepresentingSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_ORIGINAL_SENT_REPRESENTING_SEARCH_KEY
#define PR_ORIGINAL_SENT_REPRESENTING_SEARCH_KEY 0x005F0102
#endif
/*
 * Description: Specifies the subject of the original message.
 * Alternate Names: PidTagOriginalSubject,PR_ORIGINAL_SUBJECT_A,ptagOriginalSubject
 * Property Type: PtypString
 */
#ifndef PR_ORIGINAL_SUBJECT
#define PR_ORIGINAL_SUBJECT 0x0049001F
#endif
/*
 * Description: Specifies the original email message's submission date and time, in UTC.
 * Alternate Names: PidTagOriginalSubmitTime,ptagOriginalSubmitTime
 * Property Type: PtypTime
 */
#ifndef PR_ORIGINAL_SUBMIT_TIME
#define PR_ORIGINAL_SUBMIT_TIME 0x004E0040
#endif
/*
 * Description: Indicates whether an email sender requests an email delivery receipt from the
 * Alternate Names: PidTagOriginatorDeliveryReportRequested
 * Property Type: PtypBoolean
 */
#ifndef PR_ORIGINATOR_DELIVERY_REPORT_REQUESTED
#define PR_ORIGINATOR_DELIVERY_REPORT_REQUESTED 0x0023000B
#endif
/*
 * Description: Specifies whether an email sender requests suppression of nondelivery receipts.
 * Alternate Names: PidTagOriginatorNonDeliveryReportRequested
 * Property Type: PtypBoolean
 */
#ifndef PR_ORIGINATOR_NON_DELIVERY_REPORT_REQUESTED
#define PR_ORIGINATOR_NON_DELIVERY_REPORT_REQUESTED 0x0C08000B
#endif
/*
 * Description: Specifies whether contact synchronization with an external source is handled by the
 * Alternate Names: PidTagOscSyncEnabled
 * Property Type: PtypBoolean
 */
#ifndef PR_OSC_SYNC_ENABLEDONSERVER
#define PR_OSC_SYNC_ENABLEDONSERVER 0x7C24000B
#endif
/*
 * Description: Contains the name of the mail user's other locality, such as the town or city.
 * Alternate Names: PidTagOtherAddressCity,PR_OTHER_ADDRESS_CITY_A
 * Property Type: PtypString
 */
#ifndef PR_OTHER_ADDRESS_CITY
#define PR_OTHER_ADDRESS_CITY 0x3A5F001F
#endif
/*
 * Description: Contains the name of the mail user's other country/region.
 * Alternate Names: PidTagOtherAddressCountry,PR_OTHER_ADDRESS_COUNTRY_A
 * Property Type: PtypString
 */
#ifndef PR_OTHER_ADDRESS_COUNTRY
#define PR_OTHER_ADDRESS_COUNTRY 0x3A60001F
#endif
/*
 * Description: Contains the postal code for the mail user's other postal address.
 * Alternate Names: PidTagOtherAddressPostalCode,PR_OTHER_ADDRESS_POSTAL_CODE_A
 * Property Type: PtypString
 */
#ifndef PR_OTHER_ADDRESS_POSTAL_CODE
#define PR_OTHER_ADDRESS_POSTAL_CODE 0x3A61001F
#endif
/*
 * Description: Contains the number or identifier of the mail user's other post office box.
 * Alternate Names: PidTagOtherAddressPostOfficeBox
 * Property Type: PtypString
 */
#ifndef PR_OTHER_ADDRESS_POST_OFFICE_BOX
#define PR_OTHER_ADDRESS_POST_OFFICE_BOX 0x3A64001F
#endif
/*
 * Description: Contains the name of the mail user's other state or province.
 * Alternate Names: PidTagOtherAddressStateOrProvince
 * Property Type: PtypString
 */
#ifndef PR_OTHER_ADDRESS_STATE_OR_PROVINCE
#define PR_OTHER_ADDRESS_STATE_OR_PROVINCE 0x3A62001F
#endif
/*
 * Description: Contains the mail user's other street address.
 * Alternate Names: PidTagOtherAddressStreet,PR_OTHER_ADDRESS_STREET_A
 * Property Type: PtypString
 */
#ifndef PR_OTHER_ADDRESS_STREET
#define PR_OTHER_ADDRESS_STREET 0x3A63001F
#endif
/*
 * Description: Contains an alternate telephone number for the mail user.
 * Alternate Names: PidTagOtherTelephoneNumber,PR_OTHER_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_OTHER_TELEPHONE_NUMBER
#define PR_OTHER_TELEPHONE_NUMBER 0x3A1F001F
#endif
/*
 * Description: Indicates whether the user is OOF.
 * Alternate Names: PidTagOutOfOfficeState,ptagOOFState
 * Property Type: PtypBoolean
 */
#ifndef PR_OOF_STATE
#define PR_OOF_STATE 0x661D000B
#endif
/*
 * Description: Specifies a quasi-unique value among all of the Calendar objects in a user's mailbox.
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidTagOwnerAppointmentId
#define PidTagOwnerAppointmentId 0x00620003
#endif
/*
 * Description: Contains the mail user's pager telephone number.
 * Alternate Names: PidTagPagerTelephoneNumber,PR_PAGER_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_PAGER_TELEPHONE_NUMBER
#define PR_PAGER_TELEPHONE_NUMBER 0x3A21001F
#endif
/*
 * Description: Contains the EntryID of the folder where messages or subfolders reside.
 * Alternate Names: PidTagParentEntryId,ptagParentEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_PARENT_ENTRYID
#define PR_PARENT_ENTRYID 0x0E090102
#endif
/*
 * Description: Contains a value that contains the Folder ID (FID), as specified in [MS-OXCDATA]
 * Alternate Names: PidTagParentFolderId
 * Property Type: PtypInteger64
 */
#ifndef ptagParentFID
#define ptagParentFID 0x67490014
#endif
/*
 * Description: Contains the search key that is used to correlate the original message and the reports
 * Alternate Names: PidTagParentKey,ptagParentKey
 * Property Type: PtypBinary
 */
#ifndef PR_PARENT_KEY
#define PR_PARENT_KEY 0x00250102
#endif
/*
 * Description: Contains a value on a folder that contains the PidTagSourceKey property (section
 * Alternate Names: PidTagParentSourceKey
 * Property Type: PtypBinary
 */
#ifndef PR_PARENT_SOURCE_KEY
#define PR_PARENT_SOURCE_KEY 0x65E10102
#endif
/*
 * Description: Contains the URL of the mail user's personal home page.
 * Alternate Names: PidTagPersonalHomePage,PR_PERSONAL_HOME_PAGE_A
 * Property Type: PtypString
 */
#ifndef PR_PERSONAL_HOME_PAGE
#define PR_PERSONAL_HOME_PAGE 0x3A50001F
#endif
/*
 * Description: Specifies the GUID of a retention tag.
 * Alternate Names: PidTagPolicyTag,ptagPolicyTag
 * Property Type: PtypBinary
 */
#ifndef PR_POLICY_TAG
#define PR_POLICY_TAG 0x30190102
#endif
/*
 * Description: Contains the mail user's postal address.
 * Alternate Names: PidTagPostalAddress,PR_POSTAL_ADDRESS_A,PR_POSTAL_ADDRESS_W
 * Property Type: PtypString
 */
#ifndef PR_POSTAL_ADDRESS
#define PR_POSTAL_ADDRESS 0x3A15001F
#endif
/*
 * Description: Contains the postal code for the mail user's postal address.
 * Alternate Names: PidTagPostalCode,PR_POSTAL_CODE_A,PR_POSTAL_CODE_W
 * Property Type: PtypString
 */
#ifndef PR_POSTAL_CODE
#define PR_POSTAL_CODE 0x3A2A001F
#endif
/*
 * Description: Contains the number or identifier of the mail user's post office box.
 * Alternate Names: PidTagPostOfficeBox,PR_POST_OFFICE_BOX_A,PR_POST_OFFICE_BOX_W
 * Property Type: PtypString
 */
#ifndef PR_POST_OFFICE_BOX
#define PR_POST_OFFICE_BOX 0x3A2B001F
#endif
/*
 * Description: Contains a value that contains a serialized representation of a PredecessorChangeList
 * Alternate Names: PidTagPredecessorChangeList
 * Property Type: PtypBinary
 */
#ifndef PR_PREDECESSOR_CHANGE_LIST
#define PR_PREDECESSOR_CHANGE_LIST 0x65E30102
#endif
/*
 * Description: Contains the telephone number of the mail user's primary fax machine.
 * Alternate Names: PidTagPrimaryFaxNumber,PR_PRIMARY_FAX_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_PRIMARY_FAX_NUMBER
#define PR_PRIMARY_FAX_NUMBER 0x3A23001F
#endif
/*
 * Description: Specifies the first server that a client is to use to send the email with.
 * Alternate Names: PidTagPrimarySendAccount
 * Property Type: PtypString
 */
#ifndef PR_PRIMARY_SEND_ACCT
#define PR_PRIMARY_SEND_ACCT 0x0E28001F
#endif
/*
 * Description: Contains the mail user's primary telephone number.
 * Alternate Names: PidTagPrimaryTelephoneNumber,PR_PRIMARY_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_PRIMARY_TELEPHONE_NUMBER
#define PR_PRIMARY_TELEPHONE_NUMBER 0x3A1A001F
#endif
/*
 * Description: Indicates the client's request for the priority with which the message is to be sent by the
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidTagPriority
#define PidTagPriority 0x00260003
#endif
/*
 * Description: Indicates whether a client has already processed a received task communication.
 * Alternate Names: PidTagProcessed
 * Property Type: PtypBoolean
 */
#ifndef PR_PROCESSED
#define PR_PROCESSED 0x7D01000B
#endif
/*
 * Description: Contains the name of the mail user's line of business.
 * Alternate Names: PidTagProfession,PR_PROFESSION_A,PR_PROFESSION_W
 * Property Type: PtypString
 */
#ifndef PR_PROFESSION
#define PR_PROFESSION 0x3A46001F
#endif
/*
 * Description: Maximum size, in kilobytes, that a user is allowed to accumulate in their mailbox
 * Alternate Names: PidTagProhibitReceiveQuota,ptagProhibitReceiveQuota
 * Property Type: PtypInteger32
 */
#ifndef PR_PROHIBIT_RECEIVE_QUOTA
#define PR_PROHIBIT_RECEIVE_QUOTA 0x666A0003
#endif
/*
 * Description: Maximum size, in kilobytes, that a user is allowed to accumulate in their mailbox
 * Alternate Names: PidTagProhibitSendQuota,ptagProhibitSendQuota
 * Property Type: PtypInteger32
 */
#ifndef PR_PROHIBIT_SEND_QUOTA
#define PR_PROHIBIT_SEND_QUOTA 0x666E0003
#endif
/*
 * Description: Contains the domain responsible for transmitting the current message.
 * Alternate Names: PidTagPurportedSenderDomain
 * Property Type: PtypString
 */
#ifndef PR_PURPORTED_SENDER_DOMAIN
#define PR_PURPORTED_SENDER_DOMAIN 0x4083001F
#endif
/*
 * Description: Contains the mail user's radio telephone number.
 * Alternate Names: PidTagRadioTelephoneNumber,PR_RADIO_TELEPHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_RADIO_TELEPHONE_NUMBER
#define PR_RADIO_TELEPHONE_NUMBER 0x3A1D001F
#endif
/*
 * Description: Indicates whether a message has been read.
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidTagRead
#define PidTagRead 0x0E69000B
#endif
/*
 * Description: Contains the address type of the end user to whom a read receipt is directed.
 * Alternate Names: PidTagReadReceiptAddressType,ptagReadReceiptAddrType
 * Property Type: PtypString
 */
#ifndef ReadReceiptAddrType
#define ReadReceiptAddrType 0x4029001F
#endif
/*
 * Description: Contains the email address of the end user to whom a read receipt is directed.
 * Alternate Names: PidTagReadReceiptEmailAddress,ptagReadReceiptEmailAddr
 * Property Type: PtypString
 */
#ifndef ReadReceiptEmailAddress
#define ReadReceiptEmailAddress 0x402A001F
#endif
/*
 * Description: Contains an address book EntryID.
 * Alternate Names: PidTagReadReceiptEntryId,ptagReadReceiptEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_READ_RECEIPT_ENTRYID
#define PR_READ_RECEIPT_ENTRYID 0x00460102
#endif
/*
 * Description: Contains the display name for the end user to whom a read receipt is directed.
 * Alternate Names: ptagReadReceiptDisplayName,ReadReceiptDisplayName
 * Property Type: PtypString
 */
#ifndef PidTagReadReceiptName
#define PidTagReadReceiptName 0x402B001F
#endif
/*
 * Description: Specifies whether the email sender requests a read receipt from all recipients when
 * Alternate Names: PidTagReadReceiptRequested,ptagReadReceiptRequested
 * Property Type: PtypBoolean
 */
#ifndef PR_READ_RECEIPT_REQUESTED
#define PR_READ_RECEIPT_REQUESTED 0x0029000B
#endif
/*
 * Description: Contains an address book search key.
 * Alternate Names: PidTagReadReceiptSearchKey,ptagReadReceiptSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_READ_RECEIPT_SEARCH_KEY
#define PR_READ_RECEIPT_SEARCH_KEY 0x00530102
#endif
/*
 * Description: Contains the SMTP email address of the user to whom a read receipt is directed.
 * Alternate Names: ptagRecipientReadReceiptSmtpAddress
 * Property Type: PtypString
 */
#ifndef PidTagReadReceiptSmtpAddress
#define PidTagReadReceiptSmtpAddress 0x5D05001F
#endif
/*
 * Description: Contains the sent time for a message disposition notification, as specified in [RFC3798].
 * Alternate Names: PidTagReceiptTime,ptagReceiptTime
 * Property Type: PtypTime
 */
#ifndef PR_RECEIPT_TIME
#define PR_RECEIPT_TIME 0x002A0040
#endif
/*
 * Description: Contains the email message receiver's email address type.
 * Alternate Names: PidTagReceivedByAddressType,PR_RECEIVED_BY_ADDRTYPE_A
 * Property Type: PtypString
 */
#ifndef PR_RECEIVED_BY_ADDRTYPE
#define PR_RECEIVED_BY_ADDRTYPE 0x0075001F
#endif
/*
 * Description: Contains the email message receiver's email address.
 * Alternate Names: PidTagReceivedByEmailAddress,PR_RECEIVED_BY_EMAIL_ADDRESS_A
 * Property Type: PtypString
 */
#ifndef PR_RECEIVED_BY_EMAIL_ADDRESS
#define PR_RECEIVED_BY_EMAIL_ADDRESS 0x0076001F
#endif
/*
 * Description: Contains the address book EntryID of the mailbox receiving the Email object.
 * Alternate Names: PidTagReceivedByEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_RECEIVED_BY_ENTRYID
#define PR_RECEIVED_BY_ENTRYID 0x003F0102
#endif
/*
 * Description: Contains the email message receiver's display name.
 * Alternate Names: PidTagReceivedByName,PR_RECEIVED_BY_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_RECEIVED_BY_NAME
#define PR_RECEIVED_BY_NAME 0x0040001F
#endif
/*
 * Description: Identifies an address book search key that contains a binary-comparable key that is
 * Alternate Names: PidTagReceivedBySearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_RECEIVED_BY_SEARCH_KEY
#define PR_RECEIVED_BY_SEARCH_KEY 0x00510102
#endif
/*
 * Description: Contains the email message receiver's SMTP email address.
 * Alternate Names: ptagRecipientRcvdBySmtpAddress
 * Property Type: PtypString
 */
#ifndef PidTagReceivedBySmtpAddress
#define PidTagReceivedBySmtpAddress 0x5D07001F
#endif
/*
 * Description: Contains the email address type for the end user represented by the receiving
 * Alternate Names: PidTagReceivedRepresentingAddressType,PR_RCVD_REPRESENTING_ADDRTYPE_A
 * Property Type: PtypString
 */
#ifndef PR_RCVD_REPRESENTING_ADDRTYPE
#define PR_RCVD_REPRESENTING_ADDRTYPE 0x0077001F
#endif
/*
 * Description: Contains the email address for the end user represented by the receiving mailbox
 * Alternate Names: PidTagReceivedRepresentingEmailAddress
 * Property Type: PtypString
 */
#ifndef PR_RCVD_REPRESENTING_EMAIL_ADDRESS
#define PR_RCVD_REPRESENTING_EMAIL_ADDRESS 0x0078001F
#endif
/*
 * Description: Contains an address book EntryID that identifies the end user represented by the
 * Alternate Names: PidTagReceivedRepresentingEntryId,ptagRcvdRepresentingEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_RCVD_REPRESENTING_ENTRYID
#define PR_RCVD_REPRESENTING_ENTRYID 0x00430102
#endif
/*
 * Description: Contains the display name for the end user represented by the receiving mailbox
 * Alternate Names: PidTagReceivedRepresentingName,PR_RCVD_REPRESENTING_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_RCVD_REPRESENTING_NAME
#define PR_RCVD_REPRESENTING_NAME 0x0044001F
#endif
/*
 * Description: Identifies an address book search key that contains a binary-comparable key of the end
 * Alternate Names: PidTagReceivedRepresentingSearchKey,ptagRcvdRepresentingSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_RCVD_REPRESENTING_SEARCH_KEY
#define PR_RCVD_REPRESENTING_SEARCH_KEY 0x00520102
#endif
/*
 * Description: Contains the SMTP email address of the user represented by the receiving mailbox
 * Alternate Names: ptagRecipientRcvdRepresentingSmtpAddress
 * Property Type: PtypString
 */
#ifndef PidTagReceivedRepresentingSmtpAddress
#define PidTagReceivedRepresentingSmtpAddress 0x5D08001F
#endif
/*
 * Description: Specifies the display name of the recipient.
 * Alternate Names: PidTagRecipientDisplayName,PR_RECIPIENT_DISPLAY_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_RECIPIENT_DISPLAY_NAME
#define PR_RECIPIENT_DISPLAY_NAME 0x5FF6001F
#endif
/*
 * Description: Identifies an Address Book object that specifies the recipient.
 * Alternate Names: PidTagRecipientEntryId,ptagRecipientEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_RECIPIENT_ENTRYID
#define PR_RECIPIENT_ENTRYID 0x5FF70102
#endif
/*
 * Description: Specifies a bit field that describes the recipient status.
 * Alternate Names: PidTagRecipientFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_RECIPIENT_FLAGS
#define PR_RECIPIENT_FLAGS 0x5FFD0003
#endif
/*
 * Description: Specifies the location of the current recipient in the recipient table.
 * Alternate Names: PidTagRecipientOrder,ptagRecipientOrder
 * Property Type: PtypInteger32
 */
#ifndef PR_RECIPIENT_ORDER
#define PR_RECIPIENT_ORDER 0x5FDF0003
#endif
/*
 * Description: Indicates that the attendee proposed a new date and/or time.
 * Alternate Names: PidTagRecipientProposed,ptagRecipientProposed
 * Property Type: PtypBoolean
 */
#ifndef PR_RECIPIENT_PROPOSED
#define PR_RECIPIENT_PROPOSED 0x5FE1000B
#endif
/*
 * Description: Indicates the meeting end time requested by the attendee in a counter proposal.
 * Alternate Names: PidTagRecipientProposedEndTime,ptagRecipientProposedEndTime
 * Property Type: PtypTime
 */
#ifndef PR_RECIPIENT_PROPOSEDENDTIME
#define PR_RECIPIENT_PROPOSEDENDTIME 0x5FE40040
#endif
/*
 * Description: Indicates the meeting start time requested by the attendee in a counter proposal.
 * Alternate Names: PidTagRecipientProposedStartTime,ptagRecipientProposedStartTime
 * Property Type: PtypTime
 */
#ifndef PR_RECIPIENT_PROPOSEDSTARTTIME
#define PR_RECIPIENT_PROPOSEDSTARTTIME 0x5FE30040
#endif
/*
 * Description: Specifies whether adding additional or different recipients is prohibited for the email
 * Alternate Names: PidTagRecipientReassignmentProhibited
 * Property Type: PtypBoolean
 */
#ifndef PR_RECIPIENT_REASSIGNMENT_PROHIBITED
#define PR_RECIPIENT_REASSIGNMENT_PROHIBITED 0x002B000B
#endif
/*
 * Description: Indicates the response status that is returned by the attendee.
 * Alternate Names: PidTagRecipientTrackStatus,ptagRecipientTrackStatus
 * Property Type: PtypInteger32
 */
#ifndef PR_RECIPIENT_TRACKSTATUS
#define PR_RECIPIENT_TRACKSTATUS 0x5FFF0003
#endif
/*
 * Description: Indicates the date and time at which the attendee responded.
 * Alternate Names: PidTagRecipientTrackStatusTime,ptagRecipientTrackStatusTime
 * Property Type: PtypTime
 */
#ifndef PR_RECIPIENT_TRACKSTATUS_TIME
#define PR_RECIPIENT_TRACKSTATUS_TIME 0x5FFB0040
#endif
/*
 * Description: Represents the recipient type of a recipient on the message.
 * Alternate Names: PidTagRecipientType,ptagRecipientType
 * Property Type: PtypInteger32
 */
#ifndef PR_RECIPIENT_TYPE
#define PR_RECIPIENT_TYPE 0x0C150003
#endif
/*
 * Description: Contains a unique binary-comparable identifier for a specific object.
 * Alternate Names: PidTagRecordKey,ptagRecordKey
 * Property Type: PtypBinary
 */
#ifndef PR_RECORD_KEY
#define PR_RECORD_KEY 0x0FF90102
#endif
/*
 * Description: Contains the name of the mail user's referral.
 * Alternate Names: PidTagReferredByName,PR_REFERRED_BY_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_REFERRED_BY_NAME
#define PR_REFERRED_BY_NAME 0x3A47001F
#endif
/*
 * Description: Contains an EntryID for the Reminders folder.
 * Alternate Names: PidTagRemindersOnlineEntryId,ptagRemOnlineEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_REM_ONLINE_ENTRYID
#define PR_REM_ONLINE_ENTRYID 0x36D50102
#endif
/*
 * Description: Contains the value of the Remote-MTA field for a delivery status notification, as
 * Alternate Names: PidTagRemoteMessageTransferAgent,ptagDsnRemoteMta
 * Property Type: PtypString
 */
#ifndef PR_DSN_REMOTE_MTA
#define PR_DSN_REMOTE_MTA 0x0C21001F
#endif
/*
 * Description: Represents an offset, in rendered characters, to use when rendering an attachment
 * Alternate Names: PidTagRenderingPosition,ptagRenderingPosition
 * Property Type: PtypInteger32
 */
#ifndef PR_RENDERING_POSITION
#define PR_RENDERING_POSITION 0x370B0003
#endif
/*
 * Description: Identifies a FlatEntryList structure ([MS-OXCDATA] section 2.3.3) of address book
 * Alternate Names: PidTagReplyRecipientEntries,ptagReplyRecipientEntries
 * Property Type: PtypBinary
 */
#ifndef PR_REPLY_RECIPIENT_ENTRIES
#define PR_REPLY_RECIPIENT_ENTRIES 0x004F0102
#endif
/*
 * Description: Contains a list of display names for recipients that are to receive a reply.
 * Alternate Names: PidTagReplyRecipientNames,PR_REPLY_RECIPIENT_NAMES_A
 * Property Type: PtypString
 */
#ifndef PR_REPLY_RECIPIENT_NAMES
#define PR_REPLY_RECIPIENT_NAMES 0x0050001F
#endif
/*
 * Description: Indicates whether a reply is requested to a Message object.
 * Alternate Names: PidTagReplyRequested,ptagReplyRequested
 * Property Type: PtypBoolean
 */
#ifndef PR_REPLY_REQUESTED
#define PR_REPLY_REQUESTED 0x0C17000B
#endif
/*
 * Description: Contains the value of the GUID that points to a Reply template.
 * Alternate Names: PidTagReplyTemplateId,ptagReplyTemplateId
 * Property Type: PtypBinary
 */
#ifndef PR_REPLY_TEMPLATE_ID
#define PR_REPLY_TEMPLATE_ID 0x65C20102
#endif
/*
 * Description: Specifies the time, in UTC, that the sender has designated for an associated work item
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagReplyTime
#define PidTagReplyTime 0x00300040
#endif
/*
 * Description: Contains a string indicating whether the original message was displayed to the user or
 * Alternate Names: PidTagReportDisposition
 * Property Type: PtypString
 */
#ifndef PR_REPORT_DISPOSITION_W
#define PR_REPORT_DISPOSITION_W 0x0080001F
#endif
/*
 * Description: Contains a description of the action that a client has performed on behalf of a user
 * Alternate Names: PidTagReportDispositionMode
 * Property Type: PtypString
 */
#ifndef PR_REPORT_DISPOSITION_MODE_W
#define PR_REPORT_DISPOSITION_MODE_W 0x0081001F
#endif
/*
 * Description: Specifies an entry ID that identifies the application that generated a report message.
 * Alternate Names: PidTagReportEntryId,ptagReportEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_REPORT_ENTRYID
#define PR_REPORT_ENTRYID 0x00450102
#endif
/*
 * Description: Contains the value of the Reporting-MTA field for a delivery status notification, as
 * Alternate Names: PidTagReportingMessageTransferAgent
 * Property Type: PtypString
 */
#ifndef ptagDsnReportingMta
#define ptagDsnReportingMta 0x6820001F
#endif
/*
 * Description: Contains the display name for the entity (usually a server agent) that generated the
 * Alternate Names: PidTagReportName,PR_REPORT_NAME_A,PR_REPORT_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_REPORT_NAME
#define PR_REPORT_NAME 0x003A001F
#endif
/*
 * Description: Contains an address book search key representing the entity (usually a server agent)
 * Alternate Names: PidTagReportSearchKey,ptagReportSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_REPORT_SEARCH_KEY
#define PR_REPORT_SEARCH_KEY 0x00540102
#endif
/*
 * Description: Contains the data that is used to correlate the report and the original message.
 * Alternate Names: PidTagReportTag,ptagReportTag
 * Property Type: PtypBinary
 */
#ifndef PR_REPORT_TAG
#define PR_REPORT_TAG 0x00310102
#endif
/*
 * Description: Contains the optional text for a report message.
 * Alternate Names: PidTagReportText,PR_REPORT_TEXT_A,ptagReportText,PR_REPORT_TEXT_W
 * Property Type: PtypString
 */
#ifndef PR_REPORT_TEXT
#define PR_REPORT_TEXT 0x1001001F
#endif
/*
 * Description: Indicates the last time that the contact list that is controlled by the
 * Alternate Names: PidTagReportTime,ptagReportTime
 * Property Type: PtypTime
 */
#ifndef PR_REPORT_TIME
#define PR_REPORT_TIME 0x00320040
#endif
/*
 * Description: Specifies how to resolve any conflicts with the message.
 * Alternate Names: PidTagResolveMethod,ptagResolveMethod
 * Property Type: PtypInteger32
 */
#ifndef PR_RESOLVE_METHOD
#define PR_RESOLVE_METHOD 0x3FE70003
#endif
/*
 * Description: Indicates whether a response is requested to a Message object.
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidTagResponseRequested
#define PidTagResponseRequested 0x0063000B
#endif
/*
 * Description: Specifies whether another mail agent has ensured that the message will be delivered.
 * Alternate Names: PidTagResponsibility,ptagResponsibility
 * Property Type: PtypBoolean
 */
#ifndef PR_RESPONSIBILITY
#define PR_RESPONSIBILITY 0x0E0F000B
#endif
/*
 * Description: Specifies the date, in UTC, after which a Message object is expired by the server.
 * Alternate Names: PidTagRetentionDate,ptagRetentionDate
 * Property Type: PtypTime
 */
#ifndef PR_RETENTION_DATE
#define PR_RETENTION_DATE 0x301C0040
#endif
/*
 * Description: Contains flags that specify the status or nature of an item's retention tag or archive
 * Alternate Names: PidTagRetentionFlags,ptagRetentionFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_RETENTION_FLAGS
#define PR_RETENTION_FLAGS 0x301D0003
#endif
/*
 * Description: Specifies the number of days that a Message object can remain unarchived.
 * Alternate Names: PidTagRetentionPeriod,ptagRetentionPeriod
 * Property Type: PtypInteger32
 */
#ifndef PR_RETENTION_PERIOD
#define PR_RETENTION_PERIOD 0x301A0003
#endif
/*
 * Description: Specifies a user's folder permissions.
 * Alternate Names: PidTagRights,ptagRights
 * Property Type: PtypInteger32
 */
#ifndef PR_RIGHTS
#define PR_RIGHTS 0x66390003
#endif
/*
 * Description: Contains a bitmask that indicates which stream properties exist on the message.
 * Alternate Names: PidTagRoamingDatatypes
 * Property Type: PtypInteger32
 */
#ifndef PR_ROAMING_DATATYPES
#define PR_ROAMING_DATATYPES 0x7C060003
#endif
/*
 * Description: Contains a dictionary stream, as specified in [MS-OXOCFG] section 2.2.5.1.
 * Alternate Names: PidTagRoamingDictionary
 * Property Type: PtypBinary
 */
#ifndef PR_ROAMING_DICTIONARY
#define PR_ROAMING_DICTIONARY 0x7C070102
#endif
/*
 * Description: Contains an XML stream, as specified in [MS-OXOCFG] section 2.2.5.2.
 * Alternate Names: PidTagRoamingXmlStream
 * Property Type: PtypBinary
 */
#ifndef PR_ROAMING_XMLSTREAM
#define PR_ROAMING_XMLSTREAM 0x7C080102
#endif
/*
 * Description: Contains a unique identifier for a recipient in a message's recipient table.
 * Alternate Names: PidTagRowid,ptagRowId
 * Property Type: PtypInteger32
 */
#ifndef PR_ROWID
#define PR_ROWID 0x30000003
#endif
/*
 * Description: Identifies the type of the row.
 * Alternate Names: PidTagRowType,ptagRowType
 * Property Type: PtypInteger32
 */
#ifndef PR_ROW_TYPE
#define PR_ROW_TYPE 0x0FF50003
#endif
/*
 * Description: Contains message body text in compressed RTF format.
 * Alternate Names: PidTagRtfCompressed,ptagRTFCompressed
 * Property Type: PtypBinary
 */
#ifndef PR_RTF_COMPRESSED
#define PR_RTF_COMPRESSED 0x10090102
#endif
/*
 * Description: Indicates whether the PidTagBody property (section 2.618) and the
 * Alternate Names: PidTagRtfInSync,ptagRTFInSync
 * Property Type: PtypBoolean
 */
#ifndef PR_RTF_IN_SYNC
#define PR_RTF_IN_SYNC 0x0E1F000B
#endif
/*
 * Description: Contains the index of a rule action that failed.
 * Alternate Names: PidTagRuleActionNumber,ptagRuleActionNumber
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_ACTION_NUMBER
#define PR_RULE_ACTION_NUMBER 0x66500003
#endif
/*
 * Description: Contains the set of actions associated with the rule.
 * Alternate Names: PidTagRuleActions,ptagRuleActions
 * Property Type: PtypRuleAction
 */
#ifndef PR_RULE_ACTIONS
#define PR_RULE_ACTIONS 0x668000FE
#endif
/*
 * Description: Contains the ActionType field ([MS-OXORULE] section 2.2.5.1) of a rule that failed.
 * Alternate Names: PidTagRuleActionType,ptagRuleActionType
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_ACTION_TYPE
#define PR_RULE_ACTION_TYPE 0x66490003
#endif
/*
 * Description: Defines the conditions under which a rule action is to be executed.
 * Alternate Names: PidTagRuleCondition,ptagRuleCondition
 * Property Type: PtypRestriction
 */
#ifndef PR_RULE_CONDITION
#define PR_RULE_CONDITION 0x667900FD
#endif
/*
 * Description: Contains the error code that indicates the cause of an error encountered during the
 * Alternate Names: PidTagRuleError,ptagRuleError
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_ERROR
#define PR_RULE_ERROR 0x66480003
#endif
/*
 * Description: Contains the EntryID of the folder where the rule that triggered the generation of a
 * Alternate Names: PidTagRuleFolderEntryId,ptagRuleFolderEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_RULE_FOLDER_ENTRYID
#define PR_RULE_FOLDER_ENTRYID 0x66510102
#endif
/*
 * Description: Specifies a unique identifier that is generated by the messaging server for each rule
 * Alternate Names: PidTagRuleId,ptagRuleId
 * Property Type: PtypInteger64
 */
#ifndef PR_RULE_ID
#define PR_RULE_ID 0x66740014
#endif
/*
 * Description: Contains a buffer that is obtained by concatenating the PidTagRuleId property (section
 * Alternate Names: PidTagRuleIds,ptagRuleIds
 * Property Type: PtypBinary
 */
#ifndef PR_RULE_IDS
#define PR_RULE_IDS 0x66750102
#endif
/*
 * Description: Contains 0x00000000. This property is not used.
 * Alternate Names: PidTagRuleLevel,ptagRuleLevel
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_LEVEL
#define PR_RULE_LEVEL 0x66830003
#endif
/*
 * Description: Contains 0x00000000. Set on the FAI message.
 * Alternate Names: PidTagRuleMessageLevel,ptagRuleMsgLevel
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_MSG_LEVEL
#define PR_RULE_MSG_LEVEL 0x65ED0003
#endif
/*
 * Description: Specifies the name of the rule. Set on the FAI message.
 * Alternate Names: PidTagRuleMessageName
 * Property Type: PtypString
 */
#ifndef ptagRuleMsgName
#define ptagRuleMsgName 0x65EC001F
#endif
/*
 * Description: Identifies the client application that owns the rule. Set on the FAI message.
 * Alternate Names: PidTagRuleMessageProvider
 * Property Type: PtypString
 */
#ifndef ptagRuleMsgProvider
#define ptagRuleMsgProvider 0x65EB001F
#endif
/*
 * Description: Contains opaque data set by the client for the exclusive use of the client. Set on the FAI
 * Alternate Names: PidTagRuleMessageProviderData,ptagRuleMsgProviderData
 * Property Type: PtypBinary
 */
#ifndef PR_RULE_MSG_PROVIDER_DATA
#define PR_RULE_MSG_PROVIDER_DATA 0x65EE0102
#endif
/*
 * Description: Contains a value used to determine the order in which rules are evaluated and
 * Alternate Names: PidTagRuleMessageSequence,ptagRuleMsgSequence
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_MSG_SEQUENCE
#define PR_RULE_MSG_SEQUENCE 0x65F30003
#endif
/*
 * Description: Contains flags that specify the state of the rule. Set on the FAI message.
 * Alternate Names: PidTagRuleMessageState,ptagRuleMsgState
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_MSG_STATE
#define PR_RULE_MSG_STATE 0x65E90003
#endif
/*
 * Description: Contains an opaque property that the client sets for the exclusive use of the client. Set
 * Alternate Names: PidTagRuleMessageUserFlags,ptagRuleMsgUserFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_MSG_USER_FLAGS
#define PR_RULE_MSG_USER_FLAGS 0x65EA0003
#endif
/*
 * Description: Specifies the name of the rule.
 * Alternate Names: PidTagRuleName,PR_RULE_NAME_A,ptagRuleName,PR_RULE_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_RULE_NAME
#define PR_RULE_NAME 0x6682001F
#endif
/*
 * Description: A string identifying the client application that owns a rule.
 * Alternate Names: PidTagRuleProvider,ptagRuleProvider,PR_RULE_PROVIDER_W
 * Property Type: PtypString
 */
#ifndef PR_RULE_PROVIDER
#define PR_RULE_PROVIDER 0x6681001F
#endif
/*
 * Description: Contains opaque data set by the client for the exclusive use of the client.
 * Alternate Names: PidTagRuleProviderData,ptagRuleProviderData
 * Property Type: PtypBinary
 */
#ifndef PR_RULE_PROVIDER_DATA
#define PR_RULE_PROVIDER_DATA 0x66840102
#endif
/*
 * Description: Contains a value used to determine the order in which rules are evaluated and
 * Alternate Names: PidTagRuleSequence,ptagRuleSequence
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_SEQUENCE
#define PR_RULE_SEQUENCE 0x66760003
#endif
/*
 * Description: Contains flags that specify the state of the rule.
 * Alternate Names: PidTagRuleState,ptagRuleState
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_STATE
#define PR_RULE_STATE 0x66770003
#endif
/*
 * Description: Contains an opaque property that the client sets for the exclusive use of the client.
 * Alternate Names: PidTagRuleUserFlags,ptagRuleUserFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_RULE_USER_FLAGS
#define PR_RULE_USER_FLAGS 0x66780003
#endif
/*
 * Description: Contains additional rule data about the Rule FAI message.
 * Alternate Names: PidTagRwRulesStream
 * Property Type: PtypBinary
 */
#ifndef PR_RW_RULES_STREAM
#define PR_RW_RULES_STREAM 0x68020102
#endif
/*
 * Description: Contains a list of tombstones, where each tombstone represents a Meeting object that
 * Alternate Names: PidTagScheduleInfoAppointmentTombstone
 * Property Type: PtypBinary
 */
#ifndef PR_SCHDINFO_APPT_TOMBSTONE
#define PR_SCHDINFO_APPT_TOMBSTONE 0x686A0102
#endif
/*
 * Description: Indicates whether a client or server is to automatically respond to all meeting
 * Alternate Names: PidTagScheduleInfoAutoAcceptAppointments
 * Property Type: PtypBoolean
 */
#ifndef PR_SCHDINFO_AUTO_ACCEPT_APPTS
#define PR_SCHDINFO_AUTO_ACCEPT_APPTS 0x686D000B
#endif
/*
 * Description: Specifies the EntryIDs of the delegates.
 * Alternate Names: PidTagScheduleInfoDelegateEntryIds
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_SCHDINFO_DELEGATE_ENTRYIDS
#define PR_SCHDINFO_DELEGATE_ENTRYIDS 0x68451102
#endif
/*
 * Description: Specifies the names of the delegates.
 * Alternate Names: PidTagScheduleInfoDelegateNames
 * Property Type: PtypMultipleString
 */
#ifndef PR_SCHDINFO_DELEGATE_NAMES
#define PR_SCHDINFO_DELEGATE_NAMES 0x6844101F
#endif
/*
 * Description: Specifies the names of the delegates in Unicode.
 * Alternate Names: PidTagScheduleInfoDelegateNamesW,ptagDelegateNames
 * Property Type: PtypMultipleString
 */
#ifndef PR_SCHDINFO_DELEGATE_NAMES_W
#define PR_SCHDINFO_DELEGATE_NAMES_W 0x684A101F
#endif
/*
 * Description: Indicates whether the delegator wants to receive copies of the meeting-related objects
 * Alternate Names: PidTagScheduleInfoDelegatorWantsCopy
 * Property Type: PtypBoolean
 */
#ifndef PR_SCHDINFO_BOSS_WANTS_COPY
#define PR_SCHDINFO_BOSS_WANTS_COPY 0x6842000B
#endif
/*
 * Description: Indicates whether the delegator wants to receive informational updates.
 * Alternate Names: PidTagScheduleInfoDelegatorWantsInfo
 * Property Type: PtypBoolean
 */
#ifndef PR_SCHDINFO_BOSS_WANTS_INFO
#define PR_SCHDINFO_BOSS_WANTS_INFO 0x684B000B
#endif
/*
 * Description: Indicates whether a client or server, when automatically responding to meeting
 * Alternate Names: PidTagScheduleInfoDisallowOverlappingAppts
 * Property Type: PtypBoolean
 */
#ifndef PR_SCHDINFO_DISALLOW_OVERLAPPING_APPTS
#define PR_SCHDINFO_DISALLOW_OVERLAPPING_APPTS 0x686F000B
#endif
/*
 * Description: Indicates whether a client or server, when automatically responding to meeting
 * Alternate Names: PidTagScheduleInfoDisallowRecurringAppts
 * Property Type: PtypBoolean
 */
#ifndef PR_SCHDINFO_DISALLOW_RECURRING_APPTS
#define PR_SCHDINFO_DISALLOW_RECURRING_APPTS 0x686E000B
#endif
/*
 * Description: Contains a value set to TRUE by the client, regardless of user input.
 * Alternate Names: PidTagScheduleInfoDontMailDelegates
 * Property Type: PtypBoolean
 */
#ifndef PR_SCHDINFO_DONT_MAIL_DELEGATES
#define PR_SCHDINFO_DONT_MAIL_DELEGATES 0x6843000B
#endif
/*
 * Description: This property is deprecated and is not to be used.
 * Alternate Names: PidTagScheduleInfoFreeBusy
 * Property Type: PtypBinary
 */
#ifndef PR_SCHDINFO_FREEBUSY
#define PR_SCHDINFO_FREEBUSY 0x686C0102
#endif
/*
 * Description: Specifies the times for which the free/busy status is set a value of OOF.
 * Alternate Names: PidTagScheduleInfoFreeBusyAway
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_SCHDINFO_FREEBUSY_OOF
#define PR_SCHDINFO_FREEBUSY_OOF 0x68561102
#endif
/*
 * Description: Specifies the blocks of time for which the free/busy status is set to a value of busy.
 * Alternate Names: PidTagScheduleInfoFreeBusyBusy
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_SCHDINFO_FREEBUSY_BUSY
#define PR_SCHDINFO_FREEBUSY_BUSY 0x68541102
#endif
/*
 * Description: Specifies the blocks for which free/busy data of type busy or OOF is present in the
 * Alternate Names: PidTagScheduleInfoFreeBusyMerged
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_SCHDINFO_FREEBUSY_MERGED
#define PR_SCHDINFO_FREEBUSY_MERGED 0x68501102
#endif
/*
 * Description: Specifies the blocks of times for which the free/busy status is set to a value of
 * Alternate Names: PidTagScheduleInfoFreeBusyTentative
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_SCHDINFO_FREEBUSY_TENTATIVE
#define PR_SCHDINFO_FREEBUSY_TENTATIVE 0x68521102
#endif
/*
 * Description: Specifies the months for which free/busy data of type OOF is present in the free/busy
 * Alternate Names: PidTagScheduleInfoMonthsAway
 * Property Type: PtypMultipleInteger32
 */
#ifndef PR_SCHDINFO_MONTHS_OOF
#define PR_SCHDINFO_MONTHS_OOF 0x68551003
#endif
/*
 * Description: Specifies the months for which free/busy data of type busy is present in the free/busy
 * Alternate Names: PidTagScheduleInfoMonthsBusy
 * Property Type: PtypMultipleInteger32
 */
#ifndef PR_SCHDINFO_MONTHS_BUSY
#define PR_SCHDINFO_MONTHS_BUSY 0x68531003
#endif
/*
 * Description: Specifies the months for which free/busy data of type busy or OOF is present in the
 * Alternate Names: PidTagScheduleInfoMonthsMerged
 * Property Type: PtypMultipleInteger32
 */
#ifndef PR_SCHDINFO_MONTHS_MERGED
#define PR_SCHDINFO_MONTHS_MERGED 0x684F1003
#endif
/*
 * Description: Specifies the months for which free/busy data of type tentative is present in the
 * Alternate Names: PidTagScheduleInfoMonthsTentative
 * Property Type: PtypMultipleInteger32
 */
#ifndef PR_SCHDINFO_MONTHS_TENTATIVE
#define PR_SCHDINFO_MONTHS_TENTATIVE 0x68511003
#endif
/*
 * Description: Set to 0x00000000 when sending and is ignored on receipt.
 * Alternate Names: PidTagScheduleInfoResourceType
 * Property Type: PtypInteger32
 */
#ifndef PR_SCHDINFO_RESOURCE_TYPE
#define PR_SCHDINFO_RESOURCE_TYPE 0x68410003
#endif
/*
 * Description: Contains the EntryID of the folder named "SCHEDULE+ FREE BUSY" under the non-IPM
 * Alternate Names: PidTagSchedulePlusFreeBusyEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_SPLUS_FREE_BUSY_ENTRYID
#define PR_SPLUS_FREE_BUSY_ENTRYID 0x66220102
#endif
/*
 * Description: Contains a series of instructions that can be executed to format an address and the data
 * Alternate Names: PidTagScriptData
 * Property Type: PtypBinary
 */
#ifndef PR_EMS_SCRIPT_BLOB
#define PR_EMS_SCRIPT_BLOB 0x00040102
#endif
/*
 * Description: Specifies the search criteria and search options.
 * Alternate Names: PidTagSearchFolderDefinition
 * Property Type: PtypBinary
 */
#ifndef PR_WB_SF_DEFINITION
#define PR_WB_SF_DEFINITION 0x68450102
#endif
/*
 * Description: Specifies flags that control how a folder is displayed.
 * Alternate Names: PidTagSearchFolderEfpFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_WB_SF_EFP_FLAGS
#define PR_WB_SF_EFP_FLAGS 0x68480003
#endif
/*
 * Description: Contains the time, in UTC, at which the search folder container will be stale and has to
 * Alternate Names: PidTagSearchFolderExpiration
 * Property Type: PtypInteger32
 */
#ifndef PR_WB_SF_EXPIRATION
#define PR_WB_SF_EXPIRATION 0x683A0003
#endif
/*
 * Description: Contains a GUID that identifies the search folder.
 * Alternate Names: PidTagSearchFolderId
 * Property Type: PtypBinary
 */
#ifndef PR_WB_SF_ID
#define PR_WB_SF_ID 0x68420102
#endif
/*
 * Description: Contains the last time, in UTC, that the folder was accessed.
 * Alternate Names: PidTagSearchFolderLastUsed
 * Property Type: PtypInteger32
 */
#ifndef PR_WB_SF_LAST_USED
#define PR_WB_SF_LAST_USED 0x68340003
#endif
/*
 * Description: This property is not to be used.
 * Alternate Names: PidTagSearchFolderRecreateInfo
 * Property Type: PtypBinary
 */
#ifndef PR_WB_SF_RECREATE_INFO
#define PR_WB_SF_RECREATE_INFO 0x68440102
#endif
/*
 * Description: Contains flags that specify the binary large object (BLOB) data that appears in the
 * Alternate Names: PidTagSearchFolderStorageType
 * Property Type: PtypInteger32
 */
#ifndef PR_WB_SF_STORAGE_TYPE
#define PR_WB_SF_STORAGE_TYPE 0x68460003
#endif
/*
 * Description: Contains the value of the SearchFolderTag sub-property of the
 * Alternate Names: PidTagSearchFolderTag
 * Property Type: PtypInteger32
 */
#ifndef PR_WB_SF_TAG
#define PR_WB_SF_TAG 0x68470003
#endif
/*
 * Description: Contains the ID of the template that is being used for the search.
 * Alternate Names: PidTagSearchFolderTemplateId
 * Property Type: PtypInteger32
 */
#ifndef PR_WB_SF_TEMPLATE_ID
#define PR_WB_SF_TEMPLATE_ID 0x68410003
#endif
/*
 * Description: Contains a unique binary-comparable key that identifies an object for a search.
 * Alternate Names: PidTagSearchKey,ptagSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_SEARCH_KEY
#define PR_SEARCH_KEY 0x300B0102
#endif
/*
 * Description: Contains security attributes in XML.
 * Alternate Names: PidTagSecurityDescriptorAsXml
 * Property Type: PtypString
 */
#ifndef PR_NT_SECURITY_DESCRIPTOR_AS_XML
#define PR_NT_SECURITY_DESCRIPTOR_AS_XML 0x0E6A001F
#endif
/*
 * Description: This property is not set and, if set, is ignored.
 * Alternate Names: PidTagSelectable
 * Property Type: PtypBoolean
 */
#ifndef PR_SELECTABLE
#define PR_SELECTABLE 0x3609000B
#endif
/*
 * Description: Contains the email address type of the sending mailbox owner.
 * Alternate Names: PidTagSenderAddressType,PR_SENDER_ADDRTYPE_A,ptagSenderAddrType
 * Property Type: PtypString
 */
#ifndef PR_SENDER_ADDRTYPE
#define PR_SENDER_ADDRTYPE 0x0C1E001F
#endif
/*
 * Description: Contains the email address of the sending mailbox owner.
 * Alternate Names: PidTagSenderEmailAddress,PR_SENDER_EMAIL_ADDRESS_A
 * Property Type: PtypString
 */
#ifndef PR_SENDER_EMAIL_ADDRESS
#define PR_SENDER_EMAIL_ADDRESS 0x0C1F001F
#endif
/*
 * Description: Identifies an address book EntryID that contains the address book EntryID of the
 * Alternate Names: PidTagSenderEntryId,ptagSenderEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_SENDER_ENTRYID
#define PR_SENDER_ENTRYID 0x0C190102
#endif
/*
 * Description: Reports the results of a Sender-ID check.
 * Alternate Names: PidTagSenderIdStatus
 * Property Type: PtypInteger32
 */
#ifndef PR_SENDER_ID_STATUS
#define PR_SENDER_ID_STATUS 0x40790003
#endif
/*
 * Description: Contains the display name of the sending mailbox owner.
 * Alternate Names: PidTagSenderName,PR_SENDER_NAME_A,ptagSenderName
 * Property Type: PtypString
 */
#ifndef PR_SENDER_NAME
#define PR_SENDER_NAME 0x0C1A001F
#endif
/*
 * Description: Identifies an address book search key.
 * Alternate Names: PidTagSenderSearchKey,ptagSenderSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_SENDER_SEARCH_KEY
#define PR_SENDER_SEARCH_KEY 0x0C1D0102
#endif
/*
 * Description: Contains the SMTP email address format of the e–mail address of the sending mailbox
 * Alternate Names: PidTagSenderSmtpAddress,ptagSenderSmtpAddress
 * Property Type: PtypString
 */
#ifndef SenderSmtpAddress
#define SenderSmtpAddress 0x5D01001F
#endif
/*
 * Description: Contains the telephone number of the caller associated with a voice mail message.
 * Alternate Names: InternalSchemaSenderTelephoneNumber
 * Property Type: PtypString
 */
#ifndef PidTagSenderTelephoneNumber
#define PidTagSenderTelephoneNumber 0x6802001F
#endif
/*
 * Description: Contains a bitmask of message encoding preferences for email sent to an email-enabled
 * Alternate Names: PidTagSendInternetEncoding,ptagSendInternetEncoding
 * Property Type: PtypInteger32
 */
#ifndef PR_SEND_INTERNET_ENCODING
#define PR_SEND_INTERNET_ENCODING 0x3A710003
#endif
/*
 * Description: Indicates whether the email-enabled entity represented by the Address Book object
 * Alternate Names: PidTagSendRichInfo,ptagSendRichInfo
 * Property Type: PtypBoolean
 */
#ifndef PR_SEND_RICH_INFO
#define PR_SEND_RICH_INFO 0x3A40000B
#endif
/*
 * Description: Indicates the sender's assessment of the sensitivity of the Message object.
 * Alternate Names: PidTagSensitivity,ptagSensitivity
 * Property Type: PtypInteger32
 */
#ifndef PR_SENSITIVITY
#define PR_SENSITIVITY 0x00360003
#endif
/*
 * Description: Contains an EntryID that represents the Sent Items folder for the message.
 * Alternate Names: PidTagSentMailSvrEID
 * Property Type: PtypServerId
 */
#ifndef ptagSentMailSvrEID
#define ptagSentMailSvrEID 0x674000FB
#endif
/*
 * Description: Contains an email address type.
 * Alternate Names: PidTagSentRepresentingAddressType,PR_SENT_REPRESENTING_ADDRTYPE_A
 * Property Type: PtypString
 */
#ifndef PR_SENT_REPRESENTING_ADDRTYPE
#define PR_SENT_REPRESENTING_ADDRTYPE 0x0064001F
#endif
/*
 * Description: Contains an email address for the end user who is represented by the sending mailbox
 * Alternate Names: PidTagSentRepresentingEmailAddress
 * Property Type: PtypString
 */
#ifndef PR_SENT_REPRESENTING_EMAIL_ADDRESS
#define PR_SENT_REPRESENTING_EMAIL_ADDRESS 0x0065001F
#endif
/*
 * Description: Contains the identifier of the end user who is represented by the sending mailbox
 * Alternate Names: PidTagSentRepresentingEntryId,ptagSentRepresentingEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_SENT_REPRESENTING_ENTRYID
#define PR_SENT_REPRESENTING_ENTRYID 0x00410102
#endif
/*
 * Description: 
 * Alternate Names: PidTagSentRepresentingFlags
 * Property Type: PtypInteger32
 */
#ifndef ptagSentRepresentingFlags
#define ptagSentRepresentingFlags 0x401A0003
#endif
/*
 * Description: Contains the display name for the end user who is represented by the sending
 * Alternate Names: PidTagSentRepresentingName,PR_SENT_REPRESENTING_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_SENT_REPRESENTING_NAME
#define PR_SENT_REPRESENTING_NAME 0x0042001F
#endif
/*
 * Description: Contains a binary-comparable key that represents the end user who is represented by
 * Alternate Names: PidTagSentRepresentingSearchKey,ptagSentRepresentingSearchKey
 * Property Type: PtypBinary
 */
#ifndef PR_SENT_REPRESENTING_SEARCH_KEY
#define PR_SENT_REPRESENTING_SEARCH_KEY 0x003B0102
#endif
/*
 * Description: Contains the SMTP email address of the end user who is represented by the sending
 * Alternate Names: PidTagSentRepresentingSmtpAddress,ptagRecipientSentRepresentingSMTPAddress
 * Property Type: PtypString
 */
#ifndef SentRepresentingSMTPAddressXSO
#define SentRepresentingSMTPAddressXSO 0x5D02001F
#endif
/*
 * Description: Contains a serialized list of REPLID and REPLGUID pairs which represent all or part of
 * Alternate Names: PidTagSerializedReplidGuidMap
 * Property Type: PtypBinary
 */
#ifndef ptagSerializedReplidGuidMap
#define ptagSerializedReplidGuidMap 0x66380102
#endif
/*
 * Description: Contains the SMTP address of the Message object.
 * Alternate Names: PidTagSmtpAddress,PR_SMTP_ADDRESS_A,PR_SMTP_ADDRESS_W
 * Property Type: PtypString
 */
#ifndef PR_SMTP_ADDRESS
#define PR_SMTP_ADDRESS 0x39FE001F
#endif
/*
 * Description: Contains the locale identifier.
 * Alternate Names: PidTagSortLocaleId,ptagSortLocaleId
 * Property Type: PtypInteger32
 */
#ifndef PR_SORT_LOCALE_ID
#define PR_SORT_LOCALE_ID 0x67050003
#endif
/*
 * Description: Contains a value that contains an internal global identifier (GID) for this folder or
 * Alternate Names: PidTagSourceKey
 * Property Type: PtypBinary
 */
#ifndef PR_SOURCE_KEY
#define PR_SOURCE_KEY 0x65E00102
#endif
/*
 * Description: Contains a recording of the mail user's name pronunciation.
 * Alternate Names: PidTagSpokenName
 * Property Type: PtypBinary
 */
#ifndef PR_EMS_AB_UM_SPOKEN_NAME
#define PR_EMS_AB_UM_SPOKEN_NAME 0x8CC20102
#endif
/*
 * Description: Contains the name of the mail user's spouse/partner.
 * Alternate Names: PidTagSpouseName,PR_SPOUSE_NAME_A,PR_SPOUSE_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_SPOUSE_NAME
#define PR_SPOUSE_NAME 0x3A48001F
#endif
/*
 * Description: Contains the value of the PidLidAppointmentStartWhole property (section 2.29).
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagStartDate
#define PidTagStartDate 0x00600040
#endif
/*
 * Description: Contains the default retention period, and the start date from which the age of a
 * Alternate Names: PidTagStartDateEtc,ptagStartDateEtc
 * Property Type: PtypBinary
 */
#ifndef PR_START_DATE_ETC
#define PR_START_DATE_ETC 0x301B0102
#endif
/*
 * Description: Contains the name of the mail user's state or province.
 * Alternate Names: PidTagStateOrProvince,PR_STATE_OR_PROVINCE_A
 * Property Type: PtypString
 */
#ifndef PR_STATE_OR_PROVINCE
#define PR_STATE_OR_PROVINCE 0x3A28001F
#endif
/*
 * Description: Contains the unique EntryID of the message store where an object resides.
 * Alternate Names: PidTagStoreEntryId,ptagStoreEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_STORE_ENTRYID
#define PR_STORE_ENTRYID 0x0FFB0102
#endif
/*
 * Description: Indicates whether a mailbox has any active Search folders.
 * Alternate Names: PidTagStoreState
 * Property Type: PtypInteger32
 */
#ifndef PR_STORE_STATE
#define PR_STORE_STATE 0x340E0003
#endif
/*
 * Description: Indicates whether string properties within the .msg file are Unicode-encoded.
 * Alternate Names: PidTagStoreSupportMask,ptagStoreSupportMask
 * Property Type: PtypInteger32
 */
#ifndef PR_STORE_SUPPORT_MASK
#define PR_STORE_SUPPORT_MASK 0x340D0003
#endif
/*
 * Description: Contains the mail user's street address.
 * Alternate Names: PidTagStreetAddress,PR_STREET_ADDRESS_A,PR_STREET_ADDRESS_W
 * Property Type: PtypString
 */
#ifndef PR_STREET_ADDRESS
#define PR_STREET_ADDRESS 0x3A29001F
#endif
/*
 * Description: Specifies whether a folder has subfolders.
 * Alternate Names: 
 * Property Type: PtypBoolean
 */
#ifndef PidTagSubfolders
#define PidTagSubfolders 0x360A000B
#endif
/*
 * Description: Contains the subject of the email message.
 * Alternate Names: PidTagSubject,PR_SUBJECT_A,ptagSubject,PR_SUBJECT_W
 * Property Type: PtypString
 */
#ifndef PR_SUBJECT
#define PR_SUBJECT 0x0037001F
#endif
/*
 * Description: Contains the prefix for the subject of the message.
 * Alternate Names: PidTagSubjectPrefix,PR_SUBJECT_PREFIX_A,ptagSubjectPrefix
 * Property Type: PtypString
 */
#ifndef PR_SUBJECT_PREFIX
#define PR_SUBJECT_PREFIX 0x003D001F
#endif
/*
 * Description: Contains supplementary information about a delivery status notification, as specified in
 * Alternate Names: PidTagSupplementaryInfo,ptagSupplementaryInfo
 * Property Type: PtypString
 */
#ifndef PR_SUPPLEMENTARY_INFO
#define PR_SUPPLEMENTARY_INFO 0x0C1B001F
#endif
/*
 * Description: Contains the mail user's family name.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagSurname
#define PidTagSurname 0x3A11001F
#endif
/*
 * Description: Contains a secondary storage location for flags when sender flags or sender reminders
 * Alternate Names: PidTagSwappedToDoData,ptagSwappedTodoData
 * Property Type: PtypBinary
 */
#ifndef PR_SWAPPED_TODO_DATA
#define PR_SWAPPED_TODO_DATA 0x0E2D0102
#endif
/*
 * Description: Contains the value of the PidTagStoreEntryId property (section 2.1028) of the
 * Alternate Names: PidTagSwappedToDoStore,ptagSwappedTodoStore
 * Property Type: PtypBinary
 */
#ifndef PR_SWAPPED_TODO_STORE
#define PR_SWAPPED_TODO_STORE 0x0E2C0102
#endif
/*
 * Description: Contains the message ID of a Message object being submitted for optimization ([MSOXOMSG] section 3.2.4.4).
 * Alternate Names: PidTagTargetEntryId,ptagTargetEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_TARGET_ENTRYID
#define PR_TARGET_ENTRYID 0x30100102
#endif
/*
 * Description: Contains the mail user's telecommunication device for the deaf (TTY/TDD) telephone
 * Alternate Names: PidTagTelecommunicationsDeviceForDeafTelephoneNumber,PR_TTYTDD_PHONE_NUMBER_A
 * Property Type: PtypString
 */
#ifndef PR_TTYTDD_PHONE_NUMBER
#define PR_TTYTDD_PHONE_NUMBER 0x3A4B001F
#endif
/*
 * Description: Contains the mail user's telex number. This property is returned from an NSPI server
 * Alternate Names: PidTagTelexNumber,PR_TELEX_NUMBER_A,PR_TELEX_NUMBER_W
 * Property Type: 
 */
#ifndef PR_TELEX_NUMBER
#define PR_TELEX_NUMBER 0x3A2C
#endif
/*
 * Description: Describes the controls used in the template that is used to retrieve address book
 * Alternate Names: PidTagTemplateData
 * Property Type: PtypBinary
 */
#ifndef PR_EMS_TEMPLATE_BLOB
#define PR_EMS_TEMPLATE_BLOB 0x00010102
#endif
/*
 * Description: Contains the value of the PidTagEntryId property (section 2.683), expressed as a
 * Alternate Names: PidTagTemplateid
 * Property Type: PtypBinary
 */
#ifndef PR_TEMPLATEID
#define PR_TEMPLATEID 0x39020102
#endif
/*
 * Description: Specifies the character set of an attachment received via MIME with the content-type of
 * Alternate Names: PidTagTextAttachmentCharset
 * Property Type: PtypString
 */
#ifndef ptagTextAttachmentCharset
#define ptagTextAttachmentCharset 0x371B001F
#endif
/*
 * Description: Contains the mail user's photo in .jpg format.
 * Alternate Names: PidTagThumbnailPhoto
 * Property Type: PtypBinary
 */
#ifndef PR_EMS_AB_THUMBNAIL_PHOTO
#define PR_EMS_AB_THUMBNAIL_PHOTO 0x8C9E0102
#endif
/*
 * Description: Contains the mail user's job title.
 * Alternate Names: 
 * Property Type: PtypString
 */
#ifndef PidTagTitle
#define PidTagTitle 0x3A17001F
#endif
/*
 * Description: Contains a value that correlates a Transport Neutral Encapsulation Format (TNEF)
 * Alternate Names: PidTagTnefCorrelationKey
 * Property Type: PtypBinary
 */
#ifndef PR_TNEF_CORRELATION_KEY
#define PR_TNEF_CORRELATION_KEY 0x007F0102
#endif
/*
 * Description: Contains flags associated with objects.
 * Alternate Names: PidTagToDoItemFlags,ptagToDoItemFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_TODO_ITEM_FLAGS
#define PR_TODO_ITEM_FLAGS 0x0E2B0003
#endif
/*
 * Description: Contains an Address Book object's display name that is transmitted with the
 * Alternate Names: PidTagTransmittableDisplayName,PR_TRANSMITABLE_DISPLAY_NAME_A
 * Property Type: PtypString
 */
#ifndef PR_TRANSMITABLE_DISPLAY_NAME
#define PR_TRANSMITABLE_DISPLAY_NAME 0x3A20001F
#endif
/*
 * Description: Contains transport-specific message envelope information for email.
 * Alternate Names: PidTagTransportMessageHeaders,PR_TRANSPORT_MESSAGE_HEADERS_A
 * Property Type: PtypString
 */
#ifndef PR_TRANSPORT_MESSAGE_HEADERS
#define PR_TRANSPORT_MESSAGE_HEADERS 0x007D001F
#endif
/*
 * Description: Specifies whether the associated message was delivered through a trusted transport
 * Alternate Names: PidTagTrustSender,ptagTrustSender
 * Property Type: PtypInteger32
 */
#ifndef PR_TRUST_SENDER
#define PR_TRUST_SENDER 0x0E790003
#endif
/*
 * Description: Contains an ASN.1 authentication certificate for a messaging user.
 * Alternate Names: 
 * Property Type: PtypBinary
 */
#ifndef PidTagUserCertificate
#define PidTagUserCertificate 0x3A220102
#endif
/*
 * Description: Address book EntryID of the user logged on to the public folders.
 * Alternate Names: PidTagUserEntryId,ptagUserEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_USER_ENTRYID
#define PR_USER_ENTRYID 0x66190102
#endif
/*
 * Description: Contains a list of certificates for the mail user.
 * Alternate Names: PidTagUserX509Certificate
 * Property Type: PtypMultipleBinary
 */
#ifndef PR_USER_X509_CERTIFICATE
#define PR_USER_X509_CERTIFICATE 0x3A701102
#endif
/*
 * Description: Contains view definitions.
 * Alternate Names: PidTagViewDescriptorBinary
 * Property Type: PtypBinary
 */
#ifndef PR_VD_BINARY
#define PR_VD_BINARY 0x70010102
#endif
/*
 * Description: Contains the view descriptor name.
 * Alternate Names: PidTagViewDescriptorName,PR_VD_NAME_W
 * Property Type: PtypString
 */
#ifndef PR_VD_NAME
#define PR_VD_NAME 0x7006001F
#endif
/*
 * Description: Contains view definitions in string format.
 * Alternate Names: PidTagViewDescriptorStrings,PR_VD_STRINGS_W
 * Property Type: PtypString
 */
#ifndef PR_VD_STRINGS
#define PR_VD_STRINGS 0x7002001F
#endif
/*
 * Description: Contains the View Descriptor version.
 * Alternate Names: PidTagViewDescriptorVersion
 * Property Type: PtypInteger32
 */
#ifndef PR_VD_VERSION
#define PR_VD_VERSION 0x70070003
#endif
/*
 * Description: Contains a list of file names for the audio file attachments that are to be played as part
 * Alternate Names: InternalSchemaVoiceMessageAttachmentOrder
 * Property Type: PtypString
 */
#ifndef PidTagVoiceMessageAttachmentOrder
#define PidTagVoiceMessageAttachmentOrder 0x6805001F
#endif
/*
 * Description: Specifies the length of the attached audio message, in seconds.
 * Alternate Names: InternalSchemaVoiceMessageDuration
 * Property Type: PtypInteger32
 */
#ifndef PidTagVoiceMessageDuration
#define PidTagVoiceMessageDuration 0x68010003
#endif
/*
 * Description: Specifies the name of the caller who left the attached voice message, as provided by the
 * Alternate Names: InternalSchemaVoiceMessageSenderName
 * Property Type: PtypString
 */
#ifndef PidTagVoiceMessageSenderName
#define PidTagVoiceMessageSenderName 0x6803001F
#endif
/*
 * Description: Contains the date of the mail user's wedding anniversary.
 * Alternate Names: 
 * Property Type: PtypTime
 */
#ifndef PidTagWeddingAnniversary
#define PidTagWeddingAnniversary 0x3A410040
#endif
/*
 * Description: Specifies the value of the PidTagEntryId property (section 2.683) of the user to whom
 * Alternate Names: PidTagWlinkAddressBookEID
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_ABEID
#define PR_WLINK_ABEID 0x68540102
#endif
/*
 * Description: Specifies the value of the PidTagStoreEntryId property (section 2.1028) of the current
 * Alternate Names: PidTagWlinkAddressBookStoreEID
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_AB_EXSTOREEID
#define PR_WLINK_AB_EXSTOREEID 0x68910102
#endif
/*
 * Description: Specifies the background color of the calendar.
 * Alternate Names: PidTagWlinkCalendarColor
 * Property Type: PtypInteger32
 */
#ifndef PR_WLINK_CALENDAR_COLOR
#define PR_WLINK_CALENDAR_COLOR 0x68530003
#endif
/*
 * Description: Specifies the Client ID that allows the client to determine whether the shortcut was
 * Alternate Names: PidTagWlinkClientID
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_CLIENTID
#define PR_WLINK_CLIENTID 0x68900102
#endif
/*
 * Description: Specifies the EntryID of the folder pointed to by the shortcut.
 * Alternate Names: PidTagWlinkEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_ENTRYID
#define PR_WLINK_ENTRYID 0x684C0102
#endif
/*
 * Description: Specifies conditions associated with the shortcut.
 * Alternate Names: PidTagWlinkFlags
 * Property Type: PtypInteger32
 */
#ifndef PR_WLINK_FLAGS
#define PR_WLINK_FLAGS 0x684A0003
#endif
/*
 * Description: Specifies the type of folder pointed to by the shortcut.
 * Alternate Names: PidTagWlinkFolderType
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_FOLDER_TYPE
#define PR_WLINK_FOLDER_TYPE 0x684F0102
#endif
/*
 * Description: Specifies the value of the PidTagWlinkGroupHeaderID property (section 2.1070) of
 * Alternate Names: PidTagWlinkGroupClsid
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_GROUP_CLSID
#define PR_WLINK_GROUP_CLSID 0x68500102
#endif
/*
 * Description: Specifies the ID of the navigation shortcut that groups other navigation shortcuts.
 * Alternate Names: 
 * Property Type: PtypBinary
 */
#ifndef PidTagWlinkGroupHeaderID
#define PidTagWlinkGroupHeaderID 0x68420102
#endif
/*
 * Description: Specifies the value of the PidTagNormalizedSubject (section 2.812) of the group
 * Alternate Names: PidTagWlinkGroupName
 * Property Type: PtypString
 */
#ifndef PR_WLINK_GROUP_NAME
#define PR_WLINK_GROUP_NAME 0x6851001F
#endif
/*
 * Description: Specifies a variable-length binary property to be used to sort shortcuts lexicographically.
 * Alternate Names: PidTagWlinkOrdinal
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_ORDINAL
#define PR_WLINK_ORDINAL 0x684B0102
#endif
/*
 * Description: Specifies the value of PidTagRecordKey property (section 2.910) of the folder pointed
 * Alternate Names: PidTagWlinkRecordKey
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_RECKEY
#define PR_WLINK_RECKEY 0x684D0102
#endif
/*
 * Description: Specifies the type of group header.
 * Alternate Names: PidTagWlinkROGroupType
 * Property Type: PtypInteger32
 */
#ifndef PR_WLINK_RO_GROUP_TYPE
#define PR_WLINK_RO_GROUP_TYPE 0x68920003
#endif
/*
 * Description: Specifies an integer that allows a client to identify with a high probability whether the
 * Alternate Names: 
 * Property Type: PtypInteger32
 */
#ifndef PidTagWlinkSaveStamp
#define PidTagWlinkSaveStamp 0x68470003
#endif
/*
 * Description: Specifies the section where the shortcut will be grouped.
 * Alternate Names: PidTagWlinkSection
 * Property Type: PtypInteger32
 */
#ifndef PR_WLINK_SECTION
#define PR_WLINK_SECTION 0x68520003
#endif
/*
 * Description: Specifies the value of the PidTagStoreEntryId property (section 2.1028) of the folder
 * Alternate Names: PidTagWlinkStoreEntryId
 * Property Type: PtypBinary
 */
#ifndef PR_WLINK_STORE_ENTRYID
#define PR_WLINK_STORE_ENTRYID 0x684E0102
#endif
/*
 * Description: Specifies the type of navigation shortcut.
 * Alternate Names: PidTagWlinkType
 * Property Type: PtypInteger32
 */
#ifndef PR_WLINK_TYPE
#define PR_WLINK_TYPE 0x68490003
#endif

#endif // MS_OXPROPS_H
