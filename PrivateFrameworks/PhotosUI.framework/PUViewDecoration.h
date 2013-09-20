/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class UIColor, UIImage;

@interface PUViewDecoration : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_borderColor;
    float _borderWidth;
    UIColor *_edgeColor;
    UIColor *_shadowColor;
    } _shadowOffset;
    float _shadowRadius;
}

@property(retain) UIColor * borderColor;
@property float borderWidth;
@property(retain) UIColor * edgeColor;
@property(readonly) UIImage * overlayImage;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } overlayInsets;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowRadius;

- (void).cxx_destruct;
- (BOOL)_displayBorder;
- (BOOL)_displayEdges;
- (BOOL)_displayShadow;
- (id)borderColor;
- (float)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationVariantsWithDecreasingBrightness:(int)arg1;
- (id)edgeColor;
- (id)overlayImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })overlayInsets;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setEdgeColor:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowRadius:(float)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)shadowRadius;

@end
