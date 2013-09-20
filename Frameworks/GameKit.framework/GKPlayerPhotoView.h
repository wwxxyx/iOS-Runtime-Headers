/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlayer;

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer> {
    int _onAdaptiveBackground;
    GKPlayer *_player;
}

@property(getter=isOnAdaptiveBackground) int onAdaptiveBackground;
@property(retain) GKPlayer * player;

+ (void)initialize;

- (void)dealloc;
- (void)invalidateIntrinsicContentSize;
- (int)isOnAdaptiveBackground;
- (id)player;
- (void)refreshPhoto;
- (void)refreshPhotoWithCompletionHandler:(id)arg1;
- (void)setOnAdaptiveBackground:(int)arg1;
- (void)setPlayer:(id)arg1;

@end
