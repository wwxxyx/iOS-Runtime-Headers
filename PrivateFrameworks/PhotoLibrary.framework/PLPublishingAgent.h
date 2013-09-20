/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPublishingAgentDelegate>, NSData, NSMutableArray, NSString, PLVideoRemaker, UIViewController;

@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate, UIAlertViewDelegate> {
    unsigned int _remakingWasCancelled : 1;
    unsigned int _remaking : 1;
    unsigned int _publishing : 1;
    BOOL _allowsHDOver3GUpload;
    long long _approximateHDUploadSize;
    long long _approximateSDUploadSize;
    double _changeRate;
    SEL _completionSelector;
    long long _currentValue;
    id _delegate;
    BOOL _deleteAfterPublishing;
    BOOL _enableHDUpload;
    double _endTime;
    double _estimatedTimeRemaining;
    long long _maxValue;
    NSData *_mediaData;
    BOOL _mediaIsHDVideo;
    NSString *_mediaPath;
    NSString *_mimeType;
    BOOL _needsRemaking;
    BOOL _needsTrimming;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    BOOL _ownerIsCamera;
    UIViewController *_parentNavigationController;
    float _percentComplete;
    float _progressMultiplier;
    PLVideoRemaker *_remaker;
    int _remakerMode;
    float _remakingPercentComplete;
    int _selectedOption;
    BOOL _shouldCancelPublish;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    double _startTime;
    id _userInfo;
}

@property(readonly) BOOL allowsCellularAccessForRequests;
@property BOOL allowsHDOver3GUpload;
@property long long approximateHDUploadSize;
@property long long approximateSDUploadSize;
@property <PLPublishingAgentDelegate> * delegate;
@property BOOL enableHDUpload;
@property BOOL mediaIsHDVideo;
@property BOOL needsTrimming;
@property BOOL ownerIsCamera;
@property float progressMultiplier;
@property int remakerMode;
@property int selectedOption;
@property BOOL shouldCancelPublish;

+ (id)publishingAgentForBundleNamed:(id)arg1 toPublishMedia:(id)arg2;

- (void)_agentIsReadyToPublish:(id)arg1;
- (void)_cancelRemaking:(id)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_remakerDidFinish:(id)arg1;
- (int)_remakerModeForSelectedOption;
- (void)_setApproximateVideoUploadSizes;
- (void)_setUpPublishingParams;
- (void)_startNetworkObservation;
- (void)_stopNetworkObservation;
- (void)_transcodeVideo:(id)arg1;
- (void)_updateStatisticsFromSnapshots;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)allowsCellularAccessForRequests;
- (BOOL)allowsHDOver3GUpload;
- (BOOL)allowsTellingFriend;
- (BOOL)allowsViewingOnHost;
- (long long)approximateHDUploadSize;
- (long long)approximateSDUploadSize;
- (void)cancelButtonClicked;
- (void)cancelRemaking;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteMediaFileAfterPublishing;
- (void)dismiss;
- (void)doneButtonClicked;
- (BOOL)enableHDUpload;
- (double)estimatedTimeRemaining;
- (id)initWithMedia:(id)arg1;
- (BOOL)isPublishing;
- (BOOL)isRemaking;
- (BOOL)isVideoMedia;
- (double)maximumVideoDuration;
- (id)mediaData;
- (BOOL)mediaIsHDVideo;
- (id)mediaPath;
- (id)mediaTitle;
- (id)mediaURL;
- (id)navigationController;
- (BOOL)needsTrimming;
- (BOOL)ownerIsCamera;
- (id)parentNavigationController;
- (float)percentComplete;
- (void)presentModalSheetInViewController:(id)arg1;
- (float)progressMultiplier;
- (id)progressViewMessageDuringRemake;
- (void)publish;
- (int)remakerMode;
- (float)remakingPercentComplete;
- (void)resignPublishingSheetResponders;
- (int)selectedOption;
- (id)serviceName;
- (void)setAllowsHDOver3GUpload:(BOOL)arg1;
- (void)setApproximateHDUploadSize:(long long)arg1;
- (void)setApproximateSDUploadSize:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteMediaFileAfterPublishing:(BOOL)arg1;
- (void)setEnableHDUpload:(BOOL)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaIsHDVideo:(BOOL)arg1;
- (void)setMediaPath:(id)arg1;
- (void)setNeedsTrimming:(BOOL)arg1;
- (void)setOwnerIsCamera:(BOOL)arg1;
- (void)setProgressMultiplier:(float)arg1;
- (void)setPublishing:(BOOL)arg1;
- (void)setRemakerMode:(int)arg1;
- (void)setSelectedOption:(int)arg1;
- (void)setShouldCancelPublish:(BOOL)arg1;
- (void)setTotalBytesWritten:(int)arg1 totalBytes:(int)arg2;
- (void)setTrimStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)setUserInfo:(id)arg1;
- (BOOL)shouldCancelPublish;
- (void)showAlertWithError:(id)arg1;
- (void)snapshot;
- (id)tellAFriendBody;
- (id)tellAFriendSubject;
- (id)tellAFriendURL;
- (id)userInfo;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;

@end
