/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSCache, SLRemoteSessionProxy<SLWeiboRemoteSessionProtocol>;

@interface SLWeiboSession : NSObject <SLWeiboClientSessionProtocol, SLMicroBlogSheetDelegate> {
    id _connectionResetBlock;
    id _locationInformationChangedBlock;
    NSCache *_profileImageCache;
    SLRemoteSessionProxy<SLWeiboRemoteSessionProtocol> *_remoteSession;
}

@property(copy) id connectionResetBlock;
@property(copy) id locationInformationChangedBlock;

+ (id)_remoteInterface;

- (void).cxx_destruct;
- (void)acceptLocationUpdate:(id)arg1;
- (id)cachedProfileImageDataForScreenName:(id)arg1;
- (int)characterCountForText:(id)arg1 shortenedURLCost:(int)arg2;
- (id)connectionResetBlock;
- (BOOL)countMediaAttachmentsTowardCharacterCount;
- (void)ensureUserRecordStore;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)fetchCurrentUrlLimits:(id)arg1;
- (void)fetchGeotagStatus:(id)arg1;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchRelationshipWithScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchSessionInfo:(id)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(id)arg1;
- (id)init;
- (id)locationInformationChangedBlock;
- (void)overrideLocationWithLatitude:(float)arg1 longitude:(float)arg2 name:(id)arg3;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (id)serviceAccountTypeIdentifier;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setConnectionResetBlock:(id)arg1;
- (void)setGeotagAccountSetting:(BOOL)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)setLocationInformationChangedBlock:(id)arg1;
- (void)setOverrideGeotagInfo:(id)arg1;
- (void)showSettingsIfNeeded;
- (void)tearDownConnectionToRemoteSession;

@end
