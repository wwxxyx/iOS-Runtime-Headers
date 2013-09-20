/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, NSMutableArray, NSMutableDictionary, TSDTextureSet;

@interface TSDTexturedRectangle : NSObject <NSCopying> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSMutableDictionary *mAttributes;
    struct CGImage { } *mBakedImage;
    struct CGColorSpace { } *mColorSpace;
    } mContentRect;
    BOOL mIsFlattened;
    CALayer *mLayer;
    } mOffset;
    } mOriginalFrame;
    } mOriginalPosition;
    TSDTextureSet *mParent;
    id mRenderBlock;
    BOOL mSingleTextureContainsMipmaps;
    unsigned int mSingleTextureName;
    } mSize;
    struct CGImage { } *mSourceImage;
    NSMutableArray *mTags;
    float mTextureOpacity;
    int mTextureType;
}

@property(retain) NSMutableDictionary * attributes;
@property struct CGColorSpace { }* colorSpace;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(readonly) struct CGImage { }* image;
@property BOOL isFlattened;
@property(readonly) CALayer * layer;
@property struct CGPoint { float x1; float x2; } offset;
@property(readonly) float opacityFromAttributes;
@property struct CGPoint { float x1; float x2; } originalPosition;
@property TSDTextureSet * parent;
@property(readonly) unsigned int singleTextureName;
@property(readonly) float singleTextureOpacity;
@property(readonly) unsigned int singleTextureTarget;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(retain) NSMutableArray * tags;
@property float textureOpacity;
@property int textureType;
@property(readonly) struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transformFromAttributes;

- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint { float x1; float x2; })arg1;
- (id)attributes;
- (void)bakeLayerWithAngle:(float)arg1 scale:(float)arg2;
- (struct CGColorSpace { }*)colorSpace;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 offset:(struct CGPoint { float x1; float x2; })arg2 renderBlock:(id)arg3;
- (BOOL)isFlattened;
- (id)layer;
- (struct CGPoint { float x1; float x2; })offset;
- (float)opacityFromAttributes;
- (struct CGPoint { float x1; float x2; })originalPosition;
- (struct CGColorSpace { }*)p_colorSpace;
- (struct CGImage { }*)p_newImageAndBufferWithAngle:(float)arg1 scale:(float)arg2 offset:(struct CGPoint { float x1; float x2; })arg3;
- (id)parent;
- (void)releaseSingleTexture;
- (void)renderIntoContext:(struct CGContext { }*)arg1;
- (void)renderLayerContentsIfNeeded;
- (void)resetAnchorPoint;
- (void)setAttributes:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsFlattened:(BOOL)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setOriginalPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setParent:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setTextureOpacity:(float)arg1;
- (void)setTextureType:(int)arg1;
- (void)setupSingleTexture;
- (void)setupSingleTextureAndGenerateMipMaps:(BOOL)arg1;
- (unsigned int)singleTextureName;
- (float)singleTextureOpacity;
- (unsigned int)singleTextureTarget;
- (struct CGSize { float x1; float x2; })size;
- (id)tags;
- (void)teardown;
- (float)textureOpacity;
- (int)textureType;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transformFromAttributes;

@end
