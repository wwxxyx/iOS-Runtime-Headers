/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification> {
    struct CGSize { 
        float width; 
        float height; 
    } _sizeOverride;
}

@property struct CGSize { float x1; float x2; } sizeOverride;

- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)renderedImageIdentifier;
- (float)scaleForInput:(id)arg1;
- (void)setSizeOverride:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeOverride;

@end
