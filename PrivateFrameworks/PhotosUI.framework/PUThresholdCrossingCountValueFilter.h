/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@interface PUThresholdCrossingCountValueFilter : PUValueFilter {
    int _crossingCount;
    int _maximumCrossingCount;
    double _thresholdValue;
}

@property int maximumCrossingCount;
@property double thresholdValue;

- (int)maximumCrossingCount;
- (void)setMaximumCrossingCount:(int)arg1;
- (void)setThresholdValue:(double)arg1;
- (double)thresholdValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
