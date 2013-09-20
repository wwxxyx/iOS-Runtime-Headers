/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying> {
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mBottomRightCellID;
    } mBoundingCellRange;
    unsigned int mCellCount;
    struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } *mCellRanges;
    unsigned int mCellRangesCount;
    NSIndexSet *mIntersectingColumnsIndexSet;
    NSIndexSet *mIntersectingRowsIndexSet;
    } mUpperLeftCellID;
}

@property(readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } bottomRightCellID;
@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } boundingCellRange;
@property(readonly) unsigned int cellCount;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isRectangle;
@property(readonly) unsigned short numberOfIntersectingColumns;
@property(readonly) unsigned short numberOfIntersectingRows;
@property(readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } upperLeftCellID;

+ (id)invalidRegion;
+ (id)region:(id)arg1 addingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)region:(id)arg1 addingRegion:(id)arg2;
+ (id)region:(id)arg1 intersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)region:(id)arg1 subtractingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
+ (id)region:(id)arg1 subtractingRegion:(id)arg2;
+ (id)regionFillingColumnsFromRegion:(id)arg1;
+ (id)regionFillingRowsFromRegion:(id)arg1;
+ (id)regionFromCellMap:(id)arg1;
+ (id)regionFromColumnIndices:(id)arg1;
+ (id)regionFromRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
+ (id)regionFromRowIndices:(id)arg1;
+ (id)unionEveryRangeInRegion:(id)arg1 withRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;

- (id).cxx_construct;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })bottomRightCellID;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })boundingCellRange;
- (unsigned int)cellCount;
- (BOOL)containsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)containsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)containsCellRegion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateCellIDsUsingBlock:(id)arg1;
- (void)enumerateCellRangesUsingBlock:(id)arg1;
- (void)enumerateColumnRangesUsingBlock:(id)arg1;
- (void)enumerateColumnsUsingBlock:(id)arg1;
- (void)enumerateInDirection:(int)arg1 usingBlock:(id)arg2;
- (void)enumerateRowRangesUsingBlock:(id)arg1;
- (void)enumerateRowsUsingBlock:(id)arg1;
- (BOOL)equalsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)equalsCellRegion:(id)arg1;
- (void)fillCellRangeColMajorSet:(struct set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> > { struct __tree<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> > { struct __tree_node<TSUColumnRowRect, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUColumnRowRect, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg1 leftToRight:(BOOL)arg2;
- (void)fillCellRangeRowMajorSet:(struct set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> > { struct __tree<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> > { struct __tree_node<TSUColumnRowRect, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUColumnRowRect, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)arg1 leftToRight:(BOOL)arg2;
- (id)init;
- (id)initFromMessage:(const struct CellRegion { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TST::CellRange> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1;
- (id)intersectingColumnsIndexSet;
- (id)intersectingRowsIndexSet;
- (BOOL)intersectsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)intersectsColumn:(unsigned char)arg1;
- (BOOL)intersectsRow:(unsigned short)arg1;
- (BOOL)isEmpty;
- (BOOL)isRectangle;
- (BOOL)isValid;
- (struct NSObject { Class x1; }*)iterator;
- (unsigned short)numberOfIntersectingColumns;
- (unsigned short)numberOfIntersectingRows;
- (void)p_calculateAncillaryInformation;
- (void)p_calculateIntersectingColumns;
- (void)p_calculateIntersectingRows;
- (void)p_calculateUpperLeftAndBottomRightCellID;
- (void)p_insertRangeIntoRegion:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)partiallyIntersectsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionByAddingColumns:(id)arg1;
- (id)regionByAddingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByAddingRows:(id)arg1;
- (id)regionByApplyingRowMapping:(id)arg1;
- (id)regionByIntersectingColumnIndices:(id)arg1;
- (id)regionByIntersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionByIntersectingRowIndices:(id)arg1;
- (id)regionByRemovingColumns:(id)arg1;
- (id)regionByRemovingRows:(id)arg1;
- (id)regionBySubtractingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionBySubtractingRegion:(id)arg1;
- (id)regionByUnioningEveryRangeInRegionWithRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)regionOffsetBy:(struct { int x1; int x2; })arg1;
- (struct NSObject { Class x1; }*)rightToLeftIterator;
- (void)saveToMessage:(struct CellRegion { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TST::CellRange> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })suitableAnchor;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })suitableCursor;
- (struct NSObject { Class x1; }*)topToBottomIterator;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })upperLeftCellID;

@end
