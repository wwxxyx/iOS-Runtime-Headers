/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDInteractiveCanvasController, TSDRepDragTracker;

@interface TSDKeyboardMovementManipulator : NSObject <TSDTrackerManipulator> {
    TSDInteractiveCanvasController *mICC;
    TSDRepDragTracker *mTracker;
}

- (BOOL)allowTrackerManipulatorToTakeControl:(id)arg1;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveSelectionByDelta:(struct CGPoint { float x1; float x2; })arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)operationDidEnd;
- (float)p_movementFactorInPixelSpace:(int)arg1;
- (BOOL)readyToEndOperation;
- (id)tracker;

@end
