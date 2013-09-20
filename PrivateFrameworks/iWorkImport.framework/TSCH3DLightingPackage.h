/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSString;

@interface TSCH3DLightingPackage : NSObject <NSCopying> {
    NSMutableArray *mLights;
    NSString *mName;
}

@property(readonly) NSString * localizedName;
@property(copy) NSString * name;

+ (id)allNamedPackages;
+ (id)instanceWithArchive:(const struct Chart3DLightingPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)localizedNameForName:(id)arg1;
+ (id)nameFromSageLightingPackageName:(id)arg1;
+ (id)p_sageLightingPackageNames;
+ (id)package;
+ (id)packageFromName:(id)arg1;
+ (id)packageWithSageLightingPackageData:(id)arg1;
+ (id)sageNameFromLightingPackageName:(id)arg1;

- (void)addLight:(id)arg1;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DLightingPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName;
- (id)name;
- (void)saveToArchive:(struct Chart3DLightingPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)setName:(id)arg1;

@end
