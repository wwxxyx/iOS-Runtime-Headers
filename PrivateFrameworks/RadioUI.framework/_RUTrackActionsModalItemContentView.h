/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUTrackActionsDelegate>, NSString, RUTrackActionsView, UIImage, _UIBackdropView;

@interface _RUTrackActionsModalItemContentView : _UIModalItemContentView <RUTrackActioning, RUTrackActionsDelegate> {
    _UIBackdropView *_backdropView;
    <RUTrackActionsDelegate> *_trackActionsDelegate;
    RUTrackActionsView *_trackActionsView;
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
- (void)_layoutViewHierarchy;
- (int)actionForButtonIndex:(int)arg1;
- (id)artistText;
- (id)artworkImage;
- (int)cancelIndex;
- (struct CGSize { float x1; float x2; })contentSize;
- (int)enabledActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)onActions;
- (void)setArtistText:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setEnabledActions:(int)arg1;
- (void)setModalItem:(id)arg1;
- (void)setOnActions:(int)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSongText:(id)arg1;
- (void)setTrackActionsDelegate:(id)arg1;
- (id)songText;
- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (void)trackActioningObjectDidChangeContentSize:(id)arg1;
- (id)trackActionsDelegate;

@end
