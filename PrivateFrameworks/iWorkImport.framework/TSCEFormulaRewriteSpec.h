/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSCETectonicShift, TSKShuffleMapping;

@interface TSCEFormulaRewriteSpec : NSObject {
    union { 
        TSCETectonicShift *mTectonicShift; 
        struct { 
            struct __CFUUID {} *mTableID; 
            TSKShuffleMapping *mSortMapping; 
            BOOL mExplodeRanges; 
        } mRemapSortMappingInfo; 
        struct { 
            struct { 
                struct { 
                    struct { 
                        unsigned short row; 
                        unsigned char column; 
                        unsigned char reserved; 
                    } mTopLeft; 
                    struct { 
                        unsigned short row; 
                        unsigned char column; 
                        unsigned char reserved; 
                    } mBottomRight; 
                } range; 
                struct __CFUUID {} *tableID; 
            } mFromReference; 
            struct { 
                struct { 
                    struct { 
                        unsigned short row; 
                        unsigned char column; 
                        unsigned char reserved; 
                    } mTopLeft; 
                    struct { 
                        unsigned short row; 
                        unsigned char column; 
                        unsigned char reserved; 
                    } mBottomRight; 
                } range; 
                struct __CFUUID {} *tableID; 
            } mToReference; 
        } mRangeMovedInfo; 
        struct __CFUUID {} *mDeletedOwnerID; 
        struct { 
            struct __CFUUID {} *mTableID; 
            struct { 
                struct { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mTopLeft; 
                struct { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mBottomRight; 
            } mOldTableSize; 
            struct { 
                struct { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mTopLeft; 
                struct { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mBottomRight; 
            } mNewTableSize; 
        } mTableResizedInfo; 
        struct { 
            struct __CFUUID {} *mTableID; 
            struct { 
                struct { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mTopLeft; 
                struct { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mBottomRight; 
            } mMergedRange; 
        } mCellMergedInfo; 
    } mInfo;
    int mType;
}

- (id).cxx_construct;
- (struct __CFUUID { }*)affectedOwnerID;
- (void)dealloc;
- (id)description;
- (id)initWithArchive:(const struct FormulaRewriteSpecArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TectonicShiftArchive {} *x3; struct RewriteSortMappingArchive {} *x4; struct RangeMovedInfoArchive {} *x5; struct CFUUIDArchive {} *x6; struct TableResizedInfoArchive {} *x7; struct CellMergeInfoArchive {} *x8; int x9; int x10; unsigned int x11[1]; }*)arg1;
- (id)initWithCellMergeInTable:(struct __CFUUID { }*)arg1 mergedRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2;
- (id)initWithOwnerDeletion:(struct __CFUUID { }*)arg1;
- (id)initWithRangeMoveFrom:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 to:(struct { struct { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg2;
- (id)initWithSortMapping:(id)arg1 tableID:(struct __CFUUID { }*)arg2 explodeRanges:(BOOL)arg3;
- (id)initWithTableResize:(struct __CFUUID { }*)arg1 oldTableSize:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2 newTableSize:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg3;
- (id)initWithTectonicShift:(id)arg1;
- (union { id x1; struct { struct __CFUUID {} *x_2_1_1; id x_2_1_2; BOOL x_2_1_3; } x2; struct { struct { struct { struct { unsigned short x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_1_3_1; struct { unsigned short x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; } x_1_3_2; } x_1_2_1; struct __CFUUID {} *x_1_2_2; } x_3_1_1; struct { struct { struct { unsigned short x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_1_3_1; struct { unsigned short x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; } x_1_3_2; } x_2_2_1; struct __CFUUID {} *x_2_2_2; } x_3_1_2; } x3; struct __CFUUID {} *x4; struct { struct __CFUUID {} *x_5_1_1; struct { struct { unsigned short x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; } x_2_2_2; } x_5_1_2; struct { struct { unsigned short x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_3_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; } x_3_2_2; } x_5_1_3; } x5; struct { struct __CFUUID {} *x_6_1_1; struct { struct { unsigned short x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; struct { unsigned short x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; } x_2_2_2; } x_6_1_2; } x6; })rewriteInfo;
- (int)rewriteType;
- (void)saveToArchive:(struct FormulaRewriteSpecArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TectonicShiftArchive {} *x3; struct RewriteSortMappingArchive {} *x4; struct RangeMovedInfoArchive {} *x5; struct CFUUIDArchive {} *x6; struct TableResizedInfoArchive {} *x7; struct CellMergeInfoArchive {} *x8; int x9; int x10; unsigned int x11[1]; }*)arg1 archiver:(id)arg2;

@end
