/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSSet;

@interface TSDConnectionLineEditor : TSDShapeEditor {
    NSSet *mSelectedObjectsSupportingConnectionLineAttributes;
}

+ (id)commandForSettingConnectionLineLayout:(id)arg1 toType:(int)arg2;

- (void)beginChangingConnectionOutset;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)canvasDidLayout;
- (void)dealloc;
- (void)didChangeConnectionLeftOutset:(float)arg1;
- (void)didChangeConnectionRightOutset:(float)arg1;
- (void)endChangingConnectionOutset;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (float)leftOutset;
- (void)p_didChangeConnectionOutset:(float)arg1 onLeft:(BOOL)arg2;
- (float)p_outsetOnLeft:(BOOL)arg1;
- (float)rightOutset;
- (id)selectedObjectsSupportingConnectionLineAttributes;
- (void)setConnectionLineType:(int)arg1;
- (void)toggleLineType:(id)arg1;

@end
