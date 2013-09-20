/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLVideoViewDelegate>, AVAsset, AVAssetExportSession, NSArray, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, PLManagedAsset, PLMoviePlayerController, PLPhotoBakedThumbnails, PLPhotoTileViewController, PLProgressStack, PLSlalomRangeMapper, PLSlalomRegionEditor, PLVideoEditingOverlayView, PLVideoOverlayButton, PLVideoPosterFrameView, UIActivityIndicatorView, UIImage, UIImageView, UIMovieScrubber, UIView;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _showsPlayButton : 1;
    unsigned int _showsScrubber : 1;
    unsigned int _canEdit : 1;
    unsigned int _loadMediaImmediately : 1;
    unsigned int _scrubberIsSubview : 1;
    unsigned int _viewWillAppear : 1;
    unsigned int _didLayout : 1;
    unsigned int _wasPlayingBeforeScrub : 1;
    unsigned int _playFromBeginning : 1;
    unsigned int _needsReloadScrubberThumbnails : 1;
    unsigned int _playing : 1;
    unsigned int _editing : 1;
    unsigned int _disableEditAfterTrim : 1;
    unsigned int _scrubbing : 1;
    unsigned int _scrubbingToRight : 1;
    unsigned int _deleteOriginalFile : 1;
    unsigned int _passthroughTrimming : 1;
    unsigned int _preparingMoviePlayer : 1;
    unsigned int _preparedMoviePlayer : 1;
    unsigned int _isMoviePlayerActive : 1;
    unsigned int _moviePlayerIsReady : 1;
    unsigned int _moviePlayerIsReadyForDisplay : 1;
    unsigned int _moviePlayerDidBuffer : 1;
    unsigned int _showingOverlay : 1;
    unsigned int _showingScrubber : 1;
    unsigned int _showScrubberWhenMovieIsReady : 1;
    unsigned int _playbackDidBegin : 1;
    unsigned int _loadScrubberThumbnails : 1;
    unsigned int _videoIsLandscape : 1;
    unsigned int _canCreateMetadata : 1;
    unsigned int _createPreviewPosterFrame : 1;
    unsigned int _startedDeliveringNotificationsToMainThread : 1;
    unsigned int _isTrimming : 1;
    unsigned int _wasTrimmedInPlace : 1;
    unsigned int _remakingFailed : 1;
    BOOL __didEditSlalom;
    AVAsset *__slalomOriginalAsset;
    NSArray *__slalomRegions;
    PLSlalomRangeMapper *__slalomTimeRangeMapper;
    BOOL _allowSlalomEditor;
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    double _cachedCurrentPlaybackTime;
    NSMutableDictionary *_cachedThumbnails;
    <PLVideoViewDelegate> *_delegate;
    NSMutableArray *_detailThumbnailRequestTimestamps;
    double _duration;
    AVAssetExportSession *_exportSession;
    NSArray *_imageGenerators;
    PLPhotoTileViewController *_imageTile;
    int _interfaceOrientation;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    double _lastActualValue;
    double _lastScrubbedValue;
    double _maximumTrimLength;
    PLMoviePlayerController *_moviePlayer;
    int _orientationWhenLastDisplayed;
    NSString *_pathToOriginalVideo;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UIImage *_posterFrameImage;
    PLVideoPosterFrameView *_posterFrameView;
    BOOL _prepareMoviePlayerForScrubberAutomatically;
    float _progress;
    double _remakerEndTime;
    double _remakerStartTime;
    unsigned int _scaleMode;
    UIMovieScrubber *_scrubber;
    UIView *_scrubberBackgroundView;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    float _scrubberWidth;
    UIActivityIndicatorView *_shadowSpinner;
    BOOL _shouldPlayVideoWhenViewAppears;
    PLSlalomRegionEditor *_slalomRegionEditor;
    UIImage *_snapshotImage;
    UIActivityIndicatorView *_spinner;
    NSMutableArray *_summaryThumbnailRequestTimestamps;
    NSDictionary *_thumbnailOptionsDict;
    NSObject<OS_dispatch_queue> *_thumbnailReqQueue;
    NSLock *_thumbnailReqlock;
    } _thumbnailSize;
    PLVideoEditingOverlayView *_trimMessageView;
    PLProgressStack *_trimProgressStack;
    NSTimer *_trimProgressTimer;
    NSString *_trimmedPath;
    PLManagedAsset *_trimmedVideoClip;
    PLManagedAsset *_videoCameraImage;
    UIView *_videoOverlayBackgroundView;
    PLVideoOverlayButton *_videoOverlayPlayButton;
    NSString *_videoPathAfterTrim;
    NSURL *_videoURL;
}

@property(setter=_setDidEditSlalom:) BOOL _didEditSlalom;
@property(readonly) BOOL _didSetPhotoData;
@property(readonly) BOOL _mediaIsPlayable;
@property(readonly) NSString * _pathForOriginalFile;
@property(readonly) NSString * _pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSString * _pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSString * _pathForVideoPreviewFile;
@property(setter=_setSlalomOriginalAsset:,retain) AVAsset * _slalomOriginalAsset;
@property(setter=_setSlalomRegions:,retain) NSArray * _slalomRegions;
@property(setter=_setSlalomTimeRangeMapper:,retain) PLSlalomRangeMapper * _slalomTimeRangeMapper;
@property BOOL allowSlalomEditor;
@property BOOL canEdit;
@property double currentTime;
@property <PLVideoViewDelegate> * delegate;
@property(readonly) double duration;
@property(getter=isEditing) BOOL editing;
@property(readonly) double endTime;
@property PLPhotoTileViewController * imageTile;
@property(readonly) int interfaceOrientation;
@property BOOL loadMediaImmediately;
@property(readonly) NSString * pathForVideoFile;
@property(readonly) UIImage * posterFrameImage;
@property(readonly) PLVideoPosterFrameView * posterFrameView;
@property BOOL prepareMoviePlayerForScrubberAutomatically;
@property(readonly) UIImageView * previewImageView;
@property(readonly) UIView * scrubberBackgroundView;
@property BOOL scrubberIsSubview;
@property float scrubberWidth;
@property BOOL shouldPlayVideoWhenViewAppears;
@property BOOL showsPlayOverlay;
@property BOOL showsScrubber;
@property(readonly) double startTime;
@property(retain) PLProgressStack * trimProgressStack;
@property(retain) PLManagedAsset * trimmedVideoClip;
@property(readonly) PLManagedAsset * videoCameraImage;
@property(readonly) NSString * videoPathAfterTrim;

+ (id)videoViewForVideoFileAtURL:(id)arg1;

- (void)_addThumbnailRequestForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2;
- (BOOL)_canAccessVideo;
- (BOOL)_canCreateMetadata;
- (BOOL)_canEditDuration:(double)arg1;
- (BOOL)_canPlayStreamedVideoWithLocalVideo;
- (void)_cancelRemaking:(id)arg1;
- (void)_clearImageGenerators;
- (void)_configureImageGenerator:(id)arg1 thumbnailSize:(struct CGSize { float x1; float x2; })arg2 forSummaryThumbnails:(BOOL)arg3;
- (void)_createScrubberIfNeeded;
- (void)_didBeginPlayback;
- (BOOL)_didEditSlalom;
- (void)_didScrubToValue:(double)arg1 withHandle:(int)arg2;
- (BOOL)_didSetPhotoData;
- (void)_displayPlaySpinner;
- (void)_exportCompletedWithSuccess:(BOOL)arg1;
- (void)_handleScreenConnectionChange:(BOOL)arg1;
- (void)_hideTrimMessageView:(BOOL)arg1;
- (void)_hideVideoOverlay:(BOOL)arg1;
- (void)_informDelegateAboutProgressChange:(float)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(int)arg3;
- (void)_invalidateSnapshotImage;
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(BOOL)arg2 aspectRatio:(float)arg3;
- (BOOL)_mediaIsPlayable;
- (BOOL)_mediaIsStreamedVideo;
- (BOOL)_mediaIsVideo;
- (id)_moviePlayer;
- (double)_movieScrubberDuration;
- (double)_movieTimeFromScrubberTime:(double)arg1;
- (id)_pathForOriginalFile;
- (id)_pathForPrebakedLandscapeScrubberThumbnails;
- (id)_pathForPrebakedPortraitScrubberThumbnails;
- (id)_pathForVideoPreviewFile;
- (void)_playbackFinished;
- (void)_prepareMoviePlayerIfNeeded;
- (void)_reloadScrubberThumbnailsIfNeeded;
- (void)_removePlaySpinner;
- (void)_removeScrubberUpdateTimer;
- (void)_removeTrimProgressTimer;
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_reset;
- (void)_resetScrubberUpdateTimer;
- (void)_resetSlalomData;
- (void)_resetTrimProgressTimer;
- (void)_saveCachedThumbnailsIfNecessary;
- (void)_savePreviewPosterFrameImage:(struct CGImage { }*)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_scrubToMovieTime:(double)arg1;
- (void)_scrubToSlalomRegionEditorStartHandle:(BOOL)arg1;
- (void)_scrubberAnimationFinished;
- (float)_scrubberBackgroundHeight;
- (double)_scrubberStartTime;
- (double)_scrubberTimeFromMovieTime:(double)arg1;
- (BOOL)_scrubberTimeNeedsMapping;
- (void)_serviceImageGenerationRequests;
- (void)_setDidEditSlalom:(BOOL)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setMoviePlayerActive:(BOOL)arg1;
- (void)_setNeedsReloadScrubberThumbnails:(BOOL)arg1;
- (void)_setPlaybackDidBegin:(BOOL)arg1;
- (void)_setPlaying:(BOOL)arg1;
- (void)_setSlalomOriginalAsset:(id)arg1;
- (void)_setSlalomRegions:(id)arg1;
- (void)_setSlalomTimeRangeMapper:(id)arg1;
- (void)_setupMoviePlayerIfNecessary;
- (BOOL)_shouldShowSlalomEditor;
- (void)_showVideoOverlay;
- (id)_slalomOriginalAsset;
- (id)_slalomRegions;
- (id)_slalomTimeRangeMapper;
- (void)_startDeliveringNotificationsToMainThread;
- (void)_stopDeliveringNotifications;
- (void)_tearDownMoviePlayer;
- (id)_thumbnailSourceAsset;
- (double)_thumbnailTimeFromScrubberTime:(double)arg1;
- (void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3;
- (void)_trimProgressChanged:(id)arg1;
- (void)_updateForEditing;
- (void)_updatePosterFrameVisibility;
- (void)_updatePosterImageView;
- (void)_updateScaleModeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateScrubberFrame;
- (void)_updateScrubberValue;
- (void)_updateScrubberVisibilityWithDuration:(double)arg1;
- (void)_updateSlalomRegionEditor;
- (void)_updateSlalomRegions:(id)arg1 forceSetAsset:(BOOL)arg2;
- (void)_updateSnapshotImage;
- (void)_updateTrimProgress;
- (void)_verifyOrRestartPlayback;
- (void)_videoOverlayFadeOutDidFinish;
- (id)_videoSnapshot;
- (BOOL)allowSlalomEditor;
- (BOOL)canEdit;
- (void)cancelTrim;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteOriginalFileAfterTrim;
- (id)description;
- (void)didMoveToSuperview;
- (double)duration;
- (double)endTime;
- (void)forceStop;
- (void)handleDoubleTap;
- (void)hideTrimMessage;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageTile;
- (void)importerFinishedProcessingTrimmedVideo:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(int)arg3;
- (int)interfaceOrientation;
- (BOOL)isEditing;
- (BOOL)isPlaying;
- (BOOL)isTrimming;
- (void)layoutSubviews;
- (BOOL)loadMediaImmediately;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(id)arg1;
- (BOOL)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1;
- (void)moviePlayerControllerWillResignAsActiveController:(id)arg1;
- (void)moviePlayerDurationAvailable:(id)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (void)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerPlaybackRateDidChange:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned int)arg2;
- (void)moviePlayerReadyToDisplay:(id)arg1;
- (void)moviePlayerReadyToPlay:(id)arg1;
- (id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;
- (void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidCancelEditing:(id)arg1;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubberEditingAnimationFinished:(id)arg1;
- (float)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberWillBeginEditing:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (id)newPreviewImageData:(id*)arg1;
- (id)pathForVideoFile;
- (void)pause;
- (void)play;
- (void)playButtonClicked:(id)arg1;
- (BOOL)playingToAirTunes;
- (BOOL)playingToVideoOut;
- (id)posterFrameImage;
- (id)posterFrameView;
- (void)prepareMoviePlayer;
- (BOOL)prepareMoviePlayerForScrubberAutomatically;
- (id)previewImageView;
- (void)removeVideoOverlay;
- (id)scrubberBackgroundView;
- (BOOL)scrubberIsSubview;
- (float)scrubberWidth;
- (void)setAllowSlalomEditor:(BOOL)arg1;
- (void)setCanEdit:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImageTile:(id)arg1;
- (void)setLoadMediaImmediately:(BOOL)arg1;
- (void)setMaximumTrimLength:(double)arg1;
- (void)setPosterFrameImage:(id)arg1;
- (void)setPrepareMoviePlayerForScrubberAutomatically:(BOOL)arg1;
- (void)setProgress:(id)arg1;
- (void)setScrubberIsSubview:(BOOL)arg1;
- (void)setScrubberWidth:(float)arg1;
- (void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1;
- (void)setShowsPlayOverlay:(BOOL)arg1;
- (void)setShowsScrubber:(BOOL)arg1 duration:(double)arg2;
- (void)setShowsScrubber:(BOOL)arg1;
- (void)setTrimProgressStack:(id)arg1;
- (void)setTrimmedVideoClip:(id)arg1;
- (BOOL)shouldPlayVideoWhenViewAppears;
- (BOOL)shouldShowCopyCalloutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showTrimMessage:(id)arg1 withBottomY:(float)arg2;
- (BOOL)showsPlayOverlay;
- (BOOL)showsScrubber;
- (id)slalomRegionEditor;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(BOOL)arg2;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (BOOL)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (double)startTime;
- (void)stop;
- (void)toggleScaleMode:(float)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)trimProgressStack;
- (void)trimUsingMode:(int)arg1 saveACopy:(BOOL)arg2;
- (id)trimmedVideoClip;
- (id)videoCameraImage;
- (id)videoOverlayPlayButton;
- (id)videoPathAfterTrim;
- (id)videoScrubber;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wasTrimmedInPlace;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
