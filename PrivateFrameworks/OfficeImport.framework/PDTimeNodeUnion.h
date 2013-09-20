/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimateColorBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateTimeBehavior, PDAudioNode, PDCmdBehavior, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDVideoNode;

@interface PDTimeNodeUnion : NSObject {
    PDAudioNode *mAudio;
    PDCmdBehavior *mCmdBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDAnimateTimeBehavior *mTimeBehavior;
    PDVideoNode *mVideo;
}

- (id)audio;
- (id)behavior;
- (id)cmdBehavior;
- (id)colorBehavior;
- (id)commonBehavior;
- (void)dealloc;
- (id)effectBehavior;
- (id)init;
- (id)motionBehavior;
- (id)parallel;
- (id)rotateBehavior;
- (id)scaleBehavior;
- (id)sequential;
- (void)setAudio:(id)arg1;
- (void)setBehavior:(id)arg1;
- (void)setCmdBehavior:(id)arg1;
- (void)setColorBehavior:(id)arg1;
- (void)setEffectBehavior:(id)arg1;
- (void)setMotionBehavior:(id)arg1;
- (void)setParallel:(id)arg1;
- (void)setRotateBehavior:(id)arg1;
- (void)setScaleBehavior:(id)arg1;
- (void)setSequential:(id)arg1;
- (void)setTimeBehavior:(id)arg1;
- (void)setVideo:(id)arg1;
- (id)timeBehavior;
- (id)video;

@end
