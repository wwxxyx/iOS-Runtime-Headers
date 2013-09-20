/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDFill, TSDLineEnd, TSDPathSource, TSDShapeStyle;

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable> {
    TSDLineEnd *mHeadLineEnd;
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
    TSDLineEnd *mTailLineEnd;
}

@property(copy) TSDFill * fill;
@property(retain) TSDLineEnd * headLineEnd;
@property(retain) TSDPathSource * pathSource;
@property(readonly) TSDShapeStyle * shapeStyle;
@property(retain) TSDLineEnd * tailLineEnd;

- (id)animationFilters;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)commandToFlipWithOrientation:(int)arg1;
- (id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (Class)editorClass;
- (int)elementKind;
- (id)fill;
- (id)headLineEnd;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ShapeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct Reference {} *x4; struct PathSourceArchive {} *x5; struct LineEndArchive {} *x6; struct LineEndArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (void)p_correctLineSegmentGeometry;
- (void)p_correctNearZeroWidthLines;
- (id)pathSource;
- (Class)repClass;
- (void)saveToArchive:(struct ShapeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct Reference {} *x4; struct PathSourceArchive {} *x5; struct LineEndArchive {} *x6; struct LineEndArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHeadLineEnd:(id)arg1;
- (void)setPathSource:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTailLineEnd:(id)arg1;
- (void)setValuesForProperties:(id)arg1;
- (id)shapeStyle;
- (id)style;
- (Class)styleClass;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)tailLineEnd;
- (struct CGSize { float x1; float x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;

@end
