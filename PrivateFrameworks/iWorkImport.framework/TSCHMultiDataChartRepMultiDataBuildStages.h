/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject <TSCHUnretainedParent> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    unsigned int mCurrentStage;
    float mDuration;
    TSCHMultiDataChartRep *mRep;
    } mStages;
    float mTotalDuration;
}

@property(readonly) unsigned int currentStage;
@property(readonly) float duration;

+ (id)buildStagesWithRep:(id)arg1 stages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 totalDuration:(float)arg3;
+ (unsigned int)dataSetIndexForRep:(id)arg1 buildStage:(unsigned int)arg2;
+ (unsigned int)numberOfFadingBuildStages;

- (id).cxx_construct;
- (void)advanceStage;
- (id)chartLayout;
- (void)clearParent;
- (unsigned int)currentStage;
- (unsigned int)dataSetIndexForStage:(unsigned int)arg1;
- (void)dealloc;
- (float)duration;
- (BOOL)hasStage;
- (id)initWithRep:(id)arg1 stages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 totalDuration:(float)arg3;
- (BOOL)isBackgroundOnly;
- (BOOL)isBackgroundOnlyStage:(unsigned int)arg1;
- (BOOL)isFadingInLayers;
- (BOOL)isLastStageBackgroundOnly;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)setupLayoutDataSetIndexForNextStage;

@end
