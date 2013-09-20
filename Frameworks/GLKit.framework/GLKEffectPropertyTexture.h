/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKEffectPropertyTexGen, NSMutableArray, NSString;

@interface GLKEffectPropertyTexture : GLKEffectProperty {
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    } _allFshMasks;
    unsigned char _enabled;
    int _envMode;
    NSString *_filePath;
    unsigned char _matrixEnabled;
    unsigned int _name;
    unsigned int _target;
    NSMutableArray *_texGenArray;
    GLKEffectPropertyTexGen *_texGenR;
    GLKEffectPropertyTexGen *_texGenS;
    GLKEffectPropertyTexGen *_texGenT;
    int _textureIndex;
    int _unit2dLoc;
    char *_unit2dNameString;
    int _unitCubeLoc;
    char *_unitCubeNameString;
}

@property(readonly) struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } allFshMasks;
@property unsigned char enabled;
@property int envMode;
@property(readonly) NSString * filePath;
@property unsigned char matrixEnabled;
@property unsigned int name;
@property(readonly) unsigned char normalizedNormalsMask;
@property unsigned int target;
@property(readonly) NSMutableArray * texGenArray;
@property(readonly) GLKEffectPropertyTexGen * texGenR;
@property(readonly) GLKEffectPropertyTexGen * texGenS;
@property(readonly) GLKEffectPropertyTexGen * texGenT;
@property int textureIndex;
@property int unit2dLoc;
@property char * unit2dNameString;
@property int unitCubeLoc;
@property char * unitCubeNameString;
@property(readonly) unsigned char useTexCoordAttribMask;
@property(readonly) unsigned char vNormalEyeMask;
@property(readonly) unsigned char vPositionEyeMask;

+ (void)clearAllTexturingMasks:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg1 fshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg2;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })allFshMasks;
- (void)bind;
- (void)dealloc;
- (id)description;
- (void)dirtyAllUniforms;
- (unsigned char)enabled;
- (int)envMode;
- (id)filePath;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (id)init;
- (void)initializeMasks;
- (unsigned char)matrixEnabled;
- (unsigned int)name;
- (unsigned char)normalizedNormalsMask;
- (void)setEnabled:(unsigned char)arg1;
- (void)setEnvMode:(int)arg1;
- (void)setMatrixEnabled:(unsigned char)arg1;
- (void)setName:(unsigned int)arg1;
- (void)setShaderBindings;
- (void)setTarget:(unsigned int)arg1;
- (void)setTextureIndex:(int)arg1;
- (void)setUnit2dLoc:(int)arg1;
- (void)setUnit2dNameString:(char *)arg1;
- (void)setUnitCubeLoc:(int)arg1;
- (void)setUnitCubeNameString:(char *)arg1;
- (unsigned int)target;
- (id)texGenArray;
- (id)texGenR;
- (id)texGenS;
- (id)texGenT;
- (int)textureIndex;
- (int)unit2dLoc;
- (char *)unit2dNameString;
- (int)unitCubeLoc;
- (char *)unitCubeNameString;
- (unsigned char)useTexCoordAttribMask;
- (unsigned char)vNormalEyeMask;
- (unsigned char)vPositionEyeMask;

@end
