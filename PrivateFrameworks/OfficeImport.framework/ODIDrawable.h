/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIDrawable : NSObject {
}

+ (void)addArrowHeadToShapeProperties:(id)arg1;
+ (id)addShapeWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 geometry:(id)arg3 state:(id)arg4;
+ (void)map1dArrowStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)map1dArrowStyleToShape:(id)arg1 state:(id)arg2;
+ (void)mapShapeProperties:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapShapeProperties:(id)arg1 shapeStyle:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapStyleAndTextFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapStyleForLabelName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapStyleForLabelName:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (void)mapStyleForPresentationName:(id)arg1 point:(id)arg2 shape:(id)arg3 state:(id)arg4;
+ (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (id)presentationWithName:(id)arg1 point:(id)arg2;
+ (id)shapeGeometryForBezierPath:(id)arg1 gSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)shapeGeometryForEllipse;
+ (id)shapeGeometryForRectangle;
+ (id)shapeGeometryForRightArrowWithControlPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)arg1;
+ (id)shapeGeometryWithShapeType:(int)arg1 adjustValues:(const int*)arg2;
+ (struct CGSize { float x1; float x2; })sizeOfDiagram:(id)arg1;
+ (id)styleForLabelName:(id)arg1 styleCount:(int)arg2 styleIndex:(int)arg3 state:(id)arg4;
+ (id)styleForPresentation:(id)arg1 point:(id)arg2 state:(id)arg3;

@end
