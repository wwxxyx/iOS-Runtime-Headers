/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSMutableDictionary;

@interface TSCH3DTextureAtlas : NSObject {
    NSMutableDictionary *mCachedLabels;
    float mSamples;
    NSMutableArray *mTextures;
}

@property(readonly) float samples;

+ (id)atlas;
+ (id)atlasWithSamples:(float)arg1;

- (void)dealloc;
- (id)initWithSamples:(float)arg1;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })p_addLabel:(id)arg1;
- (struct tvec3<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; union { int x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; })positionForLabel:(id)arg1;
- (float)samples;
- (id)textureAtIndex:(int)arg1;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })textureSizeAtIndex:(int)arg1;

@end
