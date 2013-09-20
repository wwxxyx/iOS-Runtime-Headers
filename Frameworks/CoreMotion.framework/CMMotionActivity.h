/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSDate;

@interface CMMotionActivity : CMLogItem {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        float tilt; 
        double timestamp; 
        int exitState; 
        double estExitTime; 
        double startTime; 
    } fState;
}

@property(readonly) BOOL automotive;
@property(readonly) int confidence;
@property(readonly) BOOL running;
@property(readonly) NSDate * startDate;
@property(readonly) BOOL stationary;
@property(readonly) BOOL unknown;
@property(readonly) BOOL walking;

- (id).cxx_construct;
- (BOOL)automotive;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; double x6; int x7; double x8; double x9; })arg1;
- (BOOL)running;
- (id)startDate;
- (BOOL)stationary;
- (BOOL)unknown;
- (BOOL)walking;

@end
