/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CAMediaTimingFunction, NSArray, NSMutableArray;

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL mAboveIntercept;
    } mChartBodyFrameInRepElementSpace;
    BOOL mCrossesIntercept;
    float mDuration;
    BOOL mElementUndefined;
    BOOL mHorizontalChart;
    } mInterceptRect;
    NSArray *mKeyTimes;
    NSMutableArray *mLayerAnimationValues;
    BOOL mShouldAnimate;
    CAMediaTimingFunction *mTimingFunction;
}

@property BOOL aboveIntercept;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } chartBodyFrameInRepElementSpace;
@property BOOL crossesIntercept;
@property float duration;
@property BOOL elementUndefined;
@property BOOL horizontalChart;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } interceptRect;
@property(copy) NSArray * keyTimes;
@property(readonly) NSArray * layerAnimationValues;
@property BOOL shouldAnimate;
@property(retain) CAMediaTimingFunction * timingFunction;

+ (id)animationInfo;

- (id).cxx_construct;
- (BOOL)aboveIntercept;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
- (void)addImageContentsAnimationForLayer:(id)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartBodyFrameInRepElementSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)crossesIntercept;
- (void)dealloc;
- (float)duration;
- (BOOL)elementUndefined;
- (BOOL)horizontalChart;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })interceptRect;
- (id)keyTimes;
- (id)layerAnimationValues;
- (void)setAboveIntercept:(BOOL)arg1;
- (void)setChartBodyFrameInRepElementSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCrossesIntercept:(BOOL)arg1;
- (void)setDuration:(float)arg1;
- (void)setElementUndefined:(BOOL)arg1;
- (void)setHorizontalChart:(BOOL)arg1;
- (void)setInterceptRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setShouldAnimate:(BOOL)arg1;
- (void)setTimingFunction:(id)arg1;
- (BOOL)shouldAnimate;
- (id)timingFunction;

@end
