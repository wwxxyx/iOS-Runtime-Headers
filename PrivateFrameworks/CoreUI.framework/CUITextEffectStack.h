/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUITextEffectStack : CUIShapeEffectStack {
    boolrenderHighQuality;
}

- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { float x_8_1_1; float x_8_1_2; } x8; })arg1 forGlyphs:(const unsigned short*)arg2 inContext:(struct CGContext { }*)arg3 usingFont:(struct __CTFont { }*)arg4 atPositions:(const struct CGPoint { float x1; float x2; }*)arg5 count:(unsigned long)arg6;
- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { float x_8_1_1; float x_8_1_2; } x8; })arg1 forGlyphs:(const unsigned short*)arg2 inContext:(struct CGContext { }*)arg3 usingFont:(struct __CTFont { }*)arg4 withAdvances:(const struct CGSize { float x1; float x2; }*)arg5 count:(unsigned long)arg6;
- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { float x_8_1_1; float x_8_1_2; } x8; })arg1 usingQuartz:(id)arg2 inContext:(struct CGContext { }*)arg3;
- (void)drawGlyphs:(const unsigned short*)arg1 inContext:(struct CGContext { }*)arg2 usingFont:(struct __CTFont { }*)arg3 atPositions:(const struct CGPoint { float x1; float x2; }*)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg7 atScale:(float)arg8;
- (void)drawGlyphs:(const unsigned short*)arg1 inContext:(struct CGContext { }*)arg2 usingFont:(struct __CTFont { }*)arg3 withAdvances:(const struct CGSize { float x1; float x2; }*)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg7 atScale:(float)arg8;
- (void)drawProcessedMask:(struct CGContext { }*)arg1 atBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 withScale:(float)arg4;
- (void)drawUsingQuartz:(id)arg1 inContext:(struct CGContext { }*)arg2 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 atScale:(float)arg4;
- (float)effectiveInteriorFillOpacity;
- (id)initWithEffectPreset:(id)arg1;
- (struct CGColor { }*)newBackgroundPatternColorWithSize:(struct CGSize { float x1; float x2; })arg1 contentScale:(float)arg2 forContext:(struct CGContext { }*)arg3;
- (struct CGContext { }*)newGlyphMaskContextForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromContext:(struct CGContext { }*)arg2 withScale:(float)arg3;
- (BOOL)useCoreImageRendering;

@end
