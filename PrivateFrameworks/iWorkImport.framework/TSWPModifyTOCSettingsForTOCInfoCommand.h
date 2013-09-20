/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, TSSPropertyMap, TSSStylesheet, TSWPTOCInfo;

@interface TSWPModifyTOCSettingsForTOCInfoCommand : TSWPModifyTOCSettingsBaseCommand {
    BOOL _coalesceable;
    NSSet *_paragraphStyles;
    TSSPropertyMap *_propertyMap;
    TSSStylesheet *_stylesheet;
    TSWPTOCInfo *_tocInfo;
}

- (const struct ModifyTOCSettingsBaseCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)tocCommandArchiveFromUnarchiver:(id)arg1;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTOCInfo:(id)arg1 coalesceable:(BOOL)arg2 paragraphStyles:(id)arg3 stylesheet:(id)arg4 propertyMap:(id)arg5;
- (id)initWithTOCInfo:(id)arg1 tocSettings:(id)arg2 coalesceable:(BOOL)arg3;
- (id)initWithTOCInfo:(id)arg1 tocSettings:(id)arg2;
- (void)loadFromMessage:(const struct ModifyTOCSettingsForTOCInfoCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ModifyTOCSettingsBaseCommandArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)p_undoRedo;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct ModifyTOCSettingsForTOCInfoCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ModifyTOCSettingsBaseCommandArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (BOOL)shouldRunSynchronously;
- (void)undo;

@end
