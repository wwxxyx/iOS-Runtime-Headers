/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class UIView;

@interface PUCloudSharedBackdropView : UIView {
    UIView *_backdropView;
    BOOL _hasRoundedCorners;
    BOOL _isMask;
}

@property BOOL hasRoundedCorners;

- (void).cxx_destruct;
- (BOOL)hasRoundedCorners;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 asMask:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHasRoundedCorners:(BOOL)arg1;

@end
