/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DShaderVariable;

@interface TSCH3DGeometryVertexElement : NSObject {
    struct AttributeSpecs { 
        unsigned int stride; 
        unsigned int offset; 
        unsigned int components; 
    TSCH3DShaderVariable *mName;
    } mSpecs;
}

@property(readonly) TSCH3DShaderVariable * name;

+ (id)elementForName:(id)arg1 inArray:(id)arg2;
+ (id)elementWithName:(id)arg1 specs:(const struct AttributeSpecs { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 specs:(const struct AttributeSpecs { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (struct AttributeSpecs { unsigned int x1; unsigned int x2; unsigned int x3; }*)specs;

@end
