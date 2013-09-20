/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIShapeEffectPreset : NSObject {
    struct { 
        unsigned int effectType; 
        unsigned int effectParameter; 
        union { 
            float floatValue; 
            unsigned int intValue; 
            struct _rgbcolor { 
                unsigned char r; 
                unsigned char g; 
                unsigned char b; 
            } colorValue; 
            short angleValue; 
        } effectValue; 
    unsigned int _effectIndex[8];
    } _parameterList[35];
    float _scaleFactor;
}

+ (id)requiredEffectParametersForEffectType:(unsigned int)arg1;

- (id)CUIEffectDataRepresentation;
- (void)_insertEffectTuple:(struct { unsigned int x1; unsigned int x2; union { float x_3_1_1; unsigned int x_3_1_2; struct _rgbcolor { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; } x_3_1_3; short x_3_1_4; } x3; })arg1 atEffectIndex:(unsigned int)arg2;
- (unsigned int)_parameterCount;
- (void)addBevelEmbossWithHighlightColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(float)arg4 shadowColorRed:(unsigned int)arg5 green:(unsigned int)arg6 blue:(unsigned int)arg7 opacity:(float)arg8 blur:(int)arg9 soften:(int)arg10;
- (void)addColorFillWithRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(float)arg4;
- (void)addColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withNewEffectType:(unsigned int)arg5;
- (void)addDropShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(float)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7;
- (void)addExtraShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(float)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7;
- (void)addFloatValue:(float)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addGradientFillWithTopColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 bottomColorRed:(unsigned int)arg4 green:(unsigned int)arg5 blue:(unsigned int)arg6 opacity:(float)arg7;
- (void)addInnerGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(float)arg4 blur:(int)arg5;
- (void)addInnerShadowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(float)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7;
- (void)addIntValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)addOuterGlowWithColorRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 opacity:(float)arg4 blur:(int)arg5;
- (void)addValue:(union { float x1; unsigned int x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; })arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3 atEffectIndex:(unsigned int)arg4;
- (void)addValue:(union { float x1; unsigned int x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; })arg1 forParameter:(unsigned int)arg2 withNewEffectType:(unsigned int)arg3;
- (void)appendAngleValue:(int)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendColorValueRed:(unsigned int)arg1 green:(unsigned int)arg2 blue:(unsigned int)arg3 forParameter:(unsigned int)arg4 withEffectType:(unsigned int)arg5;
- (void)appendFloatValue:(float)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendIntValue:(unsigned int)arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (void)appendValue:(union { float x1; unsigned int x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; })arg1 forParameter:(unsigned int)arg2 withEffectType:(unsigned int)arg3;
- (unsigned int)effectCount;
- (float)effectScale;
- (unsigned int)effectTypeAtIndex:(unsigned int)arg1;
- (void)getEffectTuples:(struct { /* ? */ }**)arg1 count:(unsigned int*)arg2 atEffectIndex:(unsigned int)arg3;
- (id)init;
- (id)initWithConstantPreset:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1; unsigned int x_5_1_2; union { float x_3_2_1; unsigned int x_3_2_2; struct _rgbcolor { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned char x_3_3_3; } x_3_2_3; short x_3_2_4; } x_5_1_3; } x5[35]; }*)arg1;
- (id)initWithEffectScale:(float)arg1;
- (union { float x1; unsigned int x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; })valueForParameter:(unsigned int)arg1 inEffectAtIndex:(unsigned int)arg2;

@end
