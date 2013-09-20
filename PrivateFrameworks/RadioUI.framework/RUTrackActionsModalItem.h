/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUTrackActionsDelegate>, NSString, UIImage, _RUTrackActionsModalItemContentView;

@interface RUTrackActionsModalItem : _UIModalItem <RUTrackActioning> {
    _RUTrackActionsModalItemContentView *_contentView;
}

@property(copy) NSString * artistText;
@property(retain) UIImage * artworkImage;
@property(readonly) int cancelIndex;
@property(readonly) struct CGSize { float x1; float x2; } contentSize;
@property int enabledActions;
@property int onActions;
@property(copy) NSString * songText;
@property <RUTrackActionsDelegate> * trackActionsDelegate;

+ (struct CGSize { float x1; float x2; })artworkSize;

- (void).cxx_destruct;
- (id)_contentView;
- (void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1;
- (int)actionForButtonIndex:(int)arg1;
- (id)artistText;
- (id)artworkImage;
- (int)cancelIndex;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (int)enabledActions;
- (id)init;
- (int)onActions;
- (void)setArtistText:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setEnabledActions:(int)arg1;
- (void)setOnActions:(int)arg1;
- (void)setSongText:(id)arg1;
- (void)setTrackActionsDelegate:(id)arg1;
- (id)songText;
- (id)trackActionsDelegate;

@end
