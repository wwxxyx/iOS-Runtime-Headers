/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNBuild, KNBuildChunk, KNBuildRenderer;

@interface KNAnimatedBuild : NSObject {
    BOOL mAnimateAtEndOfPreviousBuild;
    BOOL mAutomatic;
    KNBuildChunk *mBuildStage;
    double mDuration;
    double mEndTime;
    double mEventEndTime;
    int mEventIndex;
    double mEventStartTime;
    BOOL mIsVisibleAtBeginning;
    BOOL mIsVisibleAtEnd;
    KNBuildRenderer *mRenderer;
    int mStageIndex;
    double mStartTime;
}

@property BOOL animateAtEndOfPreviousBuild;
@property(readonly) BOOL automatic;
@property(readonly) KNBuild * buildDescription;
@property(readonly) KNBuildChunk * buildStage;
@property(readonly) int buildType;
@property double duration;
@property(readonly) double endTime;
@property(readonly) double eventEndTime;
@property int eventIndex;
@property(readonly) double eventStartTime;
@property(readonly) BOOL isActionBuild;
@property(readonly) BOOL isBuildIn;
@property(readonly) BOOL isBuildOut;
@property(readonly) BOOL isDriftBuild;
@property(readonly) BOOL isEmphasisBuild;
@property(readonly) BOOL isMovieStartBuild;
@property(readonly) BOOL isVerticalText;
@property BOOL isVisibleAtBeginning;
@property BOOL isVisibleAtEnd;
@property(readonly) KNBuildRenderer * renderer;
@property(readonly) int stageIndex;
@property(readonly) double startTime;

+ (id)createWithBuildStage:(id)arg1 eventIndex:(int)arg2 stageIndex:(int)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 duration:(double)arg6 automatic:(BOOL)arg7 renderer:(id)arg8 animateAtEndOfPreviousBuild:(BOOL)arg9;

- (BOOL)animateAtEndOfPreviousBuild;
- (id)applyActionEffectToAttributes:(id)arg1;
- (BOOL)automatic;
- (id)buildDescription;
- (id)buildStage;
- (int)buildType;
- (void)dealloc;
- (id)description;
- (double)duration;
- (double)endTime;
- (double)eventEndTime;
- (int)eventIndex;
- (double)eventStartTime;
- (id)initWithBuildStage:(id)arg1 eventIndex:(int)arg2 stageIndex:(int)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 duration:(double)arg6 automatic:(BOOL)arg7 renderer:(id)arg8 animateAtEndOfPreviousBuild:(BOOL)arg9;
- (BOOL)isActionBuild;
- (BOOL)isBuildIn;
- (BOOL)isBuildOut;
- (BOOL)isDriftBuild;
- (BOOL)isEmphasisBuild;
- (BOOL)isMovieStartBuild;
- (BOOL)isVerticalText;
- (BOOL)isVisibleAtBeginning;
- (BOOL)isVisibleAtEnd;
- (void)p_setVisibility;
- (id)renderer;
- (void)setAnimateAtEndOfPreviousBuild:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setEventIndex:(int)arg1;
- (void)setIsVisibleAtBeginning:(BOOL)arg1;
- (void)setIsVisibleAtEnd:(BOOL)arg1;
- (int)stageIndex;
- (double)startTime;

@end
