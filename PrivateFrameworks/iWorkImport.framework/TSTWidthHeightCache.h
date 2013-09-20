/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWidthHeightCache : NSObject {
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol> > { 
        struct WHCCol {} *__begin_; 
        struct WHCCol {} *__end_; 
        struct __compressed_pair<TSTWidthHeightCache_Private::WHCCol *, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol> > { 
            struct WHCCol {} *__first_; 
        } __end_cap_; 
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow> > { 
        struct WHCRow {} *__begin_; 
        struct WHCRow {} *__end_; 
        struct __compressed_pair<TSTWidthHeightCache_Private::WHCRow *, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow> > { 
            struct WHCRow {} *__first_; 
        } __end_cap_; 
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    } mFittingColumnWidth;
    } mFittingRowHeight;
    } mLock;
    unsigned char mMaxCol;
    unsigned short mMaxRow;
    } mModelColumnWidth;
    } mModelRowHeight;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_increaseColCapacity:(unsigned int)arg1;
- (void)_increaseRowCapacity:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (BOOL)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (id)description;
- (float)getFitHeightForRow:(unsigned short)arg1;
- (float)getFitWidthForCol:(unsigned char)arg1;
- (id)getListOfInvalidColsInRow:(unsigned short)arg1;
- (float)getModelHeightForRow:(unsigned short)arg1;
- (float)getModelWidthForColumn:(unsigned char)arg1;
- (id)init;
- (id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2;
- (BOOL)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2;
- (BOOL)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2;
- (void)logInternalState;
- (BOOL)moveColsFrom:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 toCol:(unsigned char)arg2;
- (BOOL)moveRowsFrom:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 toRow:(unsigned short)arg2;
- (unsigned long)numModelColumnWidths;
- (unsigned long)numModelRowHeights;
- (void)resetAllCol;
- (unsigned int)resetAllInvalidColsInRow:(unsigned short)arg1;
- (void)resetAllRow;
- (void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (void)resetFitHeightForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)resetModelCache;
- (BOOL)resetModelCacheRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)resetRowHeightForCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (void)resetWidthsHeightsForRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)setFitDims:(struct CGSize { float x1; float x2; })arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (BOOL)setFitHeight:(float)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (BOOL)setFitWidth:(float)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (BOOL)setModelHeight:(float)arg1 forRow:(unsigned short)arg2;
- (BOOL)setModelWidth:(float)arg1 forColumn:(unsigned char)arg2;
- (void)setNumsRows:(unsigned short)arg1 andNumCols:(unsigned char)arg2;
- (id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2;
- (BOOL)verifyDims:(struct CGSize { float x1; float x2; })arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;

@end
