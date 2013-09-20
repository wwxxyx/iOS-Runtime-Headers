/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@class NSDictionary;

@interface PLPerAppDataUsageSnapshot : NSObject {
    NSDictionary *_perAppDataUsage;
    double _timeSinceEpoch;
}

@property(retain) NSDictionary * perAppDataUsage;
@property double timeSinceEpoch;

- (void)dealloc;
- (id)description;
- (id)initWithPerAppDataUsage:(id)arg1 time:(double)arg2;
- (id)perAppDataUsage;
- (void)setPerAppDataUsage:(id)arg1;
- (void)setTimeSinceEpoch:(double)arg1;
- (double)timeSinceEpoch;

@end
