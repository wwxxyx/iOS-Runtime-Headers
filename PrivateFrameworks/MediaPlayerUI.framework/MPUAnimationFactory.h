/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class CAMediaTimingFunction, NSArray, NSString;

@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    NSArray *_allowedKeyPaths;
    NSString *_fillMode;
    BOOL _removedOnCompletion;
    double _timeOffset;
    CAMediaTimingFunction *_timingFunction;
}

@property(copy) NSArray * allowedKeyPaths;
@property(copy) NSString * fillMode;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property double timeOffset;
@property(retain) CAMediaTimingFunction * timingFunction;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)allowedKeyPaths;
- (id)fillMode;
- (id)init;
- (BOOL)isRemovedOnCompletion;
- (void)setAllowedKeyPaths:(id)arg1;
- (void)setFillMode:(id)arg1;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (double)timeOffset;
- (id)timingFunction;

@end
