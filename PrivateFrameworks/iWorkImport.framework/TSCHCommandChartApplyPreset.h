/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSCHChartStylePreset, TSCHCommandStyleSwap;

@interface TSCHCommandChartApplyPreset : TSCHChartCommand {
    unsigned int mBehavior;
    TSCHChartStylePreset *mPreset;
    TSCHCommandStyleSwap *mStyleSwapCommand;
}

- (const struct ChartCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; boolx5; int x6; unsigned int x7[1]; }*)chartCommandArchiveFromUnarchiver:(id)arg1;
- (void)commitPrimitive;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithChartInfo:(id)arg1 preset:(id)arg2 behavior:(unsigned int)arg3;
- (id)initWithChartInfo:(id)arg1 preset:(id)arg2;
- (void)p_swapInfoPreset;
- (void)redoPrimitive;
- (void)saveToArchiver:(id)arg1;
- (void)undoPrimitive;

@end
