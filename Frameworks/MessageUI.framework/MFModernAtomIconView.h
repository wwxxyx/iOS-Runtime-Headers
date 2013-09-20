/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray;

@interface MFModernAtomIconView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    } _drawingOffset;
    NSArray *_iconImages;
    float _iconPadding;
}

@property struct CGPoint { float x1; float x2; } drawingOffset;
@property(retain) NSArray * iconImages;
@property float iconPadding;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })drawingOffset;
- (id)iconImages;
- (float)iconPadding;
- (float)preferredWidth;
- (void)setDrawingOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setIconImages:(id)arg1;
- (void)setIconPadding:(float)arg1;

@end
