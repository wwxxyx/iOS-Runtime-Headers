/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore {
    DAFolder *_DAFolder;
}

- (id)_additionalHeadersForAction:(int)arg1 ofMessage:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForSearchResult:(id)arg1 format:(int)arg2 streamConsumer:(id)arg3;
- (BOOL)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4;
- (id)_folderIDForFetching;
- (void)_remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 filterByDate:(BOOL)arg3 handler:(id)arg4;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (BOOL)allowsAppend;
- (id)bestAlternativeForPart:(id)arg1;
- (BOOL)canDeleteMessage:(id)arg1;
- (BOOL)canFetchSearchResults;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)defaultAlternativeForPart:(id)arg1;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (int)fetchNumMessages:(unsigned int)arg1 preservingUID:(id)arg2 options:(unsigned int)arg3;
- (unsigned int)fetchWindow;
- (unsigned int)growFetchWindow;
- (BOOL)hasMoreFetchableMessages;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id*)arg3;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (BOOL)shouldGrowFetchWindow;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

@end
