/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKRotate : SKAction {
    struct SKCRotate { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; float x7; float x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; int x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; } *_mycaction;
}

+ (id)rotateByAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateByX:(float)arg1 duration:(double)arg2;
+ (id)rotateByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)rotateByY:(float)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateToX:(float)arg1 duration:(double)arg2;
+ (id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)rotateToY:(float)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
