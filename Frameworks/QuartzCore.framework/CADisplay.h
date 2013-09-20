/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CADisplayMode, NSArray, NSString;

@interface CADisplay : NSObject {
    void *_impl;
}

@property BOOL allowsVirtualModes;
@property(readonly) NSArray * availableModes;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(getter=isCloned,readonly) BOOL cloned;
@property(getter=isCloningSupported,readonly) BOOL cloningSupported;
@property(copy) NSString * colorMode;
@property(retain) CADisplayMode * currentMode;
@property(readonly) NSString * deviceName;
@property(readonly) unsigned int displayId;
@property(getter=isExternal,readonly) BOOL external;
@property(readonly) NSString * name;
@property(copy) NSString * overscanAdjustment;
@property(readonly) float overscanAmount;
@property(getter=isOverscanned,readonly) BOOL overscanned;
@property(readonly) CADisplayMode * preferredMode;
@property(readonly) double refreshRate;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } safeBounds;
@property(getter=isSupported,readonly) BOOL supported;
@property(readonly) int tag;
@property(readonly) NSString * uniqueId;

+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;
+ (id)mainDisplay;

- (id)_initWithDisplay:(struct Display { int (**x1)(); id x2; struct __CFString {} *x3; struct __CFString {} *x4; unsigned int x5; struct __CFString {} *x6; struct ModeSet { unsigned int x_7_1_1; unsigned int x_7_1_2[1]; } x7; int x8; int x9; int x10; struct Bounds { int x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; unsigned int x12; unsigned int x13; float x14; int x15; boolx16; boolx17; boolx18; boolx19; boolx20; boolx21; unsigned int x22; double x23; boolx24; boolx25; }*)arg1;
- (void)_invalidate;
- (BOOL)allowsVirtualModes;
- (id)availableModes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)colorMode;
- (id)currentMode;
- (id)description;
- (id)deviceName;
- (unsigned int)displayId;
- (BOOL)isCloned;
- (BOOL)isCloningSupported;
- (BOOL)isExternal;
- (BOOL)isOverscanned;
- (BOOL)isSupported;
- (id)name;
- (id)overscanAdjustment;
- (float)overscanAmount;
- (id)preferredMode;
- (double)refreshRate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })safeBounds;
- (void)setAllowsVirtualModes:(BOOL)arg1;
- (void)setColorMode:(id)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setOverscanAdjustment:(id)arg1;
- (int)tag;
- (id)uniqueId;
- (void)update;

@end
