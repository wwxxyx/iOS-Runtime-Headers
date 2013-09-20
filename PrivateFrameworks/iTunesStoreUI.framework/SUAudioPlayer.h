/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class AVPlayer, AVPlayerItem, AVURLAsset, NSMutableDictionary, NSURL, SUPlayerStatus;

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate> {
    AVURLAsset *_asset;
    NSURL *_certificateUrl;
    NSURL *_keyUrl;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SUPlayerStatus *_status;
    id _timeObserver;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(retain) NSURL * certificateURL;
@property(retain) NSURL * keyURL;
@property(readonly) SUPlayerStatus * playerStatus;

- (id)URL;
- (void)_applyNowPlayingInfo;
- (void)_destroyPlayer;
- (void)_destroyPlayerItem;
- (void)_failWithError:(id)arg1;
- (void)_handleAssetValuesDidLoad;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_postStatusChangeNotification;
- (void)_setPlayerState:(int)arg1;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (id)certificateURL;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)keyURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)playerStatus;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)seekToTime:(double)arg1;
- (void)setCertificateURL:(id)arg1;
- (void)setKeyURL:(id)arg1;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)stop;
- (id)valueForNowPlayingKey:(id)arg1;

@end
