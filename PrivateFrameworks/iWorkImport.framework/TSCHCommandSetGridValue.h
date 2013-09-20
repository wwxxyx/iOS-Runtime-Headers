/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSNumber;

@interface TSCHCommandSetGridValue : TSCHChartCommand {
    unsigned int mColumnIndex;
    NSNumber *mNewValue;
    NSNumber *mOldValue;
    unsigned int mRowIndex;
}

- (const struct ChartCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; boolx5; int x6; unsigned int x7[1]; }*)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)commitPrimitive;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithChartInfo:(id)arg1 rowIndex:(unsigned int)arg2 columnIndex:(unsigned int)arg3 value:(id)arg4;
- (BOOL)process;
- (void)redoPrimitive;
- (void)saveToArchiver:(id)arg1;
- (void)undoPrimitive;

@end
