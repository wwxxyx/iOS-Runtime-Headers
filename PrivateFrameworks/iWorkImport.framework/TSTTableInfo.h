/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<TSDContainerInfo>, TSDInfoGeometry, TSKDocumentRoot, TSPObject<TSDOwningAttachment>, TSTEditingState, TSTMasterLayout, TSTTableModel, TSTTablePartitioner;

@interface TSTTableInfo : TSDDrawableInfo <TSCECalculationEngineRegistration, TSCEFormulaOwning, TSCEReferenceResolving, TSCETableModeling, TSKModel, TSKSearchable, TSSThemedObject, TSSPresetSource, TSSStyleClient, TSDContainerInfo, TSDMixing, TSWPStorageParent, TSCETableModeling> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mEditingCellID;
    TSTEditingState *mEditingState;
    BOOL mHasReference;
    BOOL mIsFormulaEditing;
    TSTMasterLayout *mMasterLayout;
    TSTTablePartitioner *mPartitioner;
    } mPreviousEditingCellID;
    TSTTableModel *mTableModel;
}

@property(getter=isAnchoredToText,readonly) BOOL anchoredToText;
@property(getter=isAttachedToBodyText,readonly) BOOL attachedToBodyText;
@property int contentWritingDirection;
@property(readonly) TSKDocumentRoot * documentRoot;
@property struct { unsigned short x1; unsigned char x2; unsigned char x3; } editingCellID;
@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } editingCellRange;
@property(retain) TSTEditingState * editingState;
@property(getter=isFloatingAboveText,readonly) BOOL floatingAboveText;
@property(getter=isFormulaEditing) BOOL formulaEditing;
@property(copy) TSDInfoGeometry * geometry;
@property BOOL hasReference;
@property(getter=isInlineWithText,readonly) BOOL inlineWithText;
@property(readonly) TSTMasterLayout * masterLayout;
@property BOOL matchesObjectPlaceholderGeometry;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property NSObject<TSDContainerInfo> * parentInfo;
@property(readonly) TSTTablePartitioner * partitioner;
@property(readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } previousEditingCellID;
@property(readonly) TSTTableModel * tableModel;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned int)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (BOOL)canPartition;
+ (id)geometryForPrototypeIndex:(int)arg1 withCanvasPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (unsigned short)numberOfColumnsForProtoIndex:(unsigned int)arg1;
+ (unsigned short)numberOfRowsForProtoIndex:(unsigned int)arg1;
+ (id)presetKinds;
+ (id)tablePrototypeWithIndex:(int)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4;

- (id).cxx_construct;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allWPStorages;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (id)buildImageTitle;
- (id)buildTitle;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (id)childEnumerator;
- (id)childInfos;
- (unsigned int)chunkCountForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2;
- (void)clearPartitioner;
- (id)componentRootObject;
- (int)contentWritingDirection;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)debugDump;
- (id)descriptionForExactCopy;
- (id)descriptionForPasteboard;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (void)didCopy;
- (void)didReplaceTextsInStoragesWithPlaceHolderString;
- (id)documentRoot;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })editingCellID;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })editingCellRange;
- (id)editingState;
- (Class)editorClass;
- (int)elementKind;
- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (BOOL)hasReference;
- (id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 carrySelection:(BOOL)arg3;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 carrySelection:(BOOL)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 otherTableInfo:(id)arg2;
- (void)invalidateForCalculationEngine:(id)arg1;
- (BOOL)isFormulaEditing;
- (BOOL)isSafeToConvertToAttributedString;
- (BOOL)isSafeToConvertToImage;
- (BOOL)isSafeToConvertToText;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct TableInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (id)masterLayout;
- (float)masterLayoutEffectiveTableNameHeight;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)notifyTableOfNewResults;
- (id)objectToArchiveInDependencyTracker;
- (void)p_didLoadRichTextPayloadTable:(id)arg1;
- (id)partitioner;
- (void)performReadForOneOffFormulaEvaluation:(id)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })previousEditingCellID;
- (struct { BOOL x1; BOOL x2; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
- (id)referencedStyles;
- (BOOL)registerLast;
- (int)registerWithCalculationEngine:(id)arg1;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (void)releaseForCalculationEngine:(id)arg1;
- (Class)repClass;
- (void)replaceReferencedStylesUsingBlock:(id)arg1;
- (struct __CFUUID { }*)resolverID;
- (void)retainForCalculationEngine:(id)arg1;
- (BOOL)reverseChunkingIsSupported;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 rewriteSpec:(id)arg3;
- (void)saveToArchive:(struct TableInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)scaleInfoGeometry:(struct CGSize { float x1; float x2; })arg1;
- (id)searchForAnnotationsWithHitBlock:(id)arg1;
- (id)searchForString:(id)arg1 options:(unsigned int)arg2 onHit:(id)arg3;
- (void)setContentWritingDirection:(int)arg1;
- (void)setEditingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setEditingState:(id)arg1;
- (void)setFormulaEditing:(BOOL)arg1;
- (void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2 scaleFactor:(struct CGSize { float x1; float x2; })arg3 shouldClearObjectPlaceholderFlag:(BOOL)arg4;
- (void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2 scaleFactor:(struct CGSize { float x1; float x2; })arg3;
- (void)setGeometry:(id)arg1 resizeInternal:(BOOL)arg2;
- (void)setGeometry:(id)arg1;
- (void)setHasReference:(BOOL)arg1;
- (void)setupTableModelForPrototypeIndex:(int)arg1;
- (void)shiftGeometryToExcludeTableNameHeight;
- (void)shiftGeometryToIncludeTableNameHeight;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (id)tableModel;
- (BOOL)textIsVertical;
- (unsigned int)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (id)trackerForController:(id)arg1;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)validate;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;

@end
