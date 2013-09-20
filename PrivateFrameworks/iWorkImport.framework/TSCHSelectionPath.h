/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, TSCHSelectionPath, TSCHSelectionPathType;

@interface TSCHSelectionPath : NSObject <NSCopying> {
    NSArray *mArguments;
    TSCHSelectionPathType *mPathType;
    TSCHSelectionPath *mSubSelection;
}

@property(readonly) TSCHSelectionPathType * pathType;
@property(readonly) TSCHSelectionPath * subSelection;

+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2;
+ (id)selectionPathWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;
+ (id)seriesSelectionPathWithSeriesIndex:(unsigned int)arg1;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned int)arg1;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned int)arg1;

- (id)argumentAtIndex:(unsigned int)arg1;
- (unsigned int)argumentsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debuggingName;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct ChartSelectionPathArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ChartSelectionPathTypeArchive {} *x3; struct ChartSelectionPathArchive {} *x4; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; int x6; unsigned int x7[1]; }*)arg1;
- (id)initWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
- (id)initWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)pathType;
- (id)rangeOfPathsToPath:(id)arg1;
- (void)saveToArchive:(struct ChartSelectionPathArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ChartSelectionPathTypeArchive {} *x3; struct ChartSelectionPathArchive {} *x4; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; int x6; unsigned int x7[1]; }*)arg1;
- (id)subSelection;
- (id)type;

@end
