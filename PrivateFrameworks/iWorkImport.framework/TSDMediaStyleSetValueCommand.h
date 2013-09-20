/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSSPropertyMap;

@interface TSDMediaStyleSetValueCommand : TSDStyledInfoSetStyleCommand {
    TSSPropertyMap *mPropertyMap;
}

- (void)computeStyle;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithMedia:(id)arg1 property:(int)arg2 boxedValue:(id)arg3;
- (void)loadFromArchive:(const struct MediaStyleSetValueCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyledInfoSetStyleCommandArchive {} *x3; struct MediaStylePropertiesArchive {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct MediaStyleSetValueCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyledInfoSetStyleCommandArchive {} *x3; struct MediaStylePropertiesArchive {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
