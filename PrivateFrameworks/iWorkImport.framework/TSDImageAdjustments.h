/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    float mBottomLevel;
    float mContrast;
    float mDenoise;
    BOOL mEnhance;
    float mExposure;
    float mGamma;
    float mHighlights;
    float mSaturation;
    float mShadows;
    float mSharpness;
    float mTemperature;
    float mTint;
    float mTopLevel;
}

@property(readonly) float bottomLevel;
@property(readonly) float contrast;
@property(readonly) float denoise;
@property(readonly) BOOL enhance;
@property(readonly) float exposure;
@property(readonly) float gamma;
@property(readonly) float highlights;
@property(readonly) float saturation;
@property(readonly) float shadows;
@property(readonly) float sharpness;
@property(readonly) float temperature;
@property(readonly) float tint;
@property(readonly) float topLevel;

- (float)bottomLevel;
- (float)contrast;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)denoise;
- (id)description;
- (BOOL)enhance;
- (float)exposure;
- (float)gamma;
- (unsigned int)hash;
- (float)highlights;
- (void)i_initFromDefaultArchive;
- (id)init;
- (id)initWithArchive:(const struct ImageAdjustmentsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; int x15; unsigned int x16[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)saturation;
- (void)saveToArchive:(struct ImageAdjustmentsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; int x15; unsigned int x16[1]; }*)arg1 archiver:(id)arg2;
- (float)shadows;
- (float)sharpness;
- (float)temperature;
- (float)tint;
- (float)topLevel;

@end
