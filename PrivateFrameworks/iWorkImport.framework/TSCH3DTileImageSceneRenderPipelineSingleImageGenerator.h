/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DPixelBuffer;

@interface TSCH3DTileImageSceneRenderPipelineSingleImageGenerator : TSCH3DTileImageSceneRenderPipelineImageGenerator {
    TSCH3DPixelBuffer *mBuffer;
}

+ (id)generatorWithFullViewportSize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;

- (void)dealloc;
- (id)images;
- (id)initWithFullViewportSize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)processSourceRegion:(const struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; }*)arg1 targetRegion:(const struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; }*)arg2;

@end
