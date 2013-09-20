/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray;

@interface TSCH3DGeometryVertexFormat : NSObject {
    BOOL mCompiled;
    NSMutableArray *mElements;
    unsigned int mStride;
    unsigned int mTotalComponents;
    int mVertexCount;
}

@property(readonly) BOOL compiled;
@property(readonly) NSArray * elements;
@property(readonly) unsigned int stride;
@property(readonly) unsigned int totalComponents;

- (void)compile;
- (BOOL)compiled;
- (void)dealloc;
- (id)description;
- (id)elementForName:(id)arg1 bufferInfo:(const struct DataBufferInfo { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg2;
- (id)elements;
- (void)enumerateElementsUsingBlock:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)stride;
- (unsigned int)totalComponents;

@end
