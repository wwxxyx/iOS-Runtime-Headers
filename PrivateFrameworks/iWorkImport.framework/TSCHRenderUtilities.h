/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHRenderUtilities : NSObject {
}

+ (void)addTextSubselectionHalosToArray:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
+ (void)addTextSubselectionKnobsToArray:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
+ (BOOL)centerPointForSeries:(id)arg1 index:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 point:(struct CGPoint { float x1; float x2; }*)arg4 nullsUseIntercept:(BOOL)arg5;
+ (BOOL)centerPointForSeries:(id)arg1 index:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 point:(struct CGPoint { float x1; float x2; }*)arg4;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext { }*)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext { }*)arg2 path:(struct CGPath { }*)arg3;
+ (void)drawNullFillSwatchInContext:(struct CGContext { }*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void)drawSymbol:(int)arg1 inContext:(struct CGContext { }*)arg2 at:(struct CGPoint { float x1; float x2; })arg3 width:(float)arg4 fill:(id)arg5 stroke:(id)arg6;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })integralFillRenderingRectFromElementRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelRectFromClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 elementSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)lightenFillOrStroke:(id)arg1 byPercent:(float)arg2;
+ (struct CGPath { }*)newClipPathForSymbol:(int)arg1 at:(struct CGPoint { float x1; float x2; })arg2 width:(float)arg3 stroke:(id)arg4;
+ (struct CGImage { }*)newImageFromFills:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 spaceBetween:(struct CGSize { float x1; float x2; })arg3 scale:(float)arg4 borderColor:(id)arg5 outFillRects:(struct CGRect {}**)arg6;
+ (struct CGColor { }*)newLightenedColor:(struct CGColor { }*)arg1 byPercent:(float)arg2;
+ (struct CGPath { }*)newStrokedPathFromPath:(struct CGPath { }*)arg1 stroke:(id)arg2;
+ (struct CGPath { }*)newUnitPathForSymbol:(int)arg1 symbolSize:(float)arg2 stroke:(id)arg3;
+ (struct CGPath { }*)p_newCirclePath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newCrossPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newDiamondPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newPathForSymbol:(int)arg1 context:(struct CGContext { }*)arg2 at:(struct CGPoint { float x1; float x2; })arg3 width:(float)arg4 pathLocation:(int)arg5 stroke:(id)arg6;
+ (struct CGPath { }*)p_newPlusPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
+ (struct CGPath { }*)p_newSquarePath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
+ (struct CGPath { }*)p_newTrianglePath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newYieldPath:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
+ (id)printCGPath:(struct CGPath { }*)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scaleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toFit:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
