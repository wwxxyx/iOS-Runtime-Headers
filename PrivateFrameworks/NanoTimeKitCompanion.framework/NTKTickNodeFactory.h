/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTickNodeFactory : NSObject

+ (id)_shaderCache;
+ (id)_shaderWithTickWidth:(float)arg1 filterWidth:(float)arg2;
+ (id)_tickTexture;
+ (void)colorizeTicks:(id)arg1 baseColor:(id)arg2 accentColor:(id)arg3 baseAlpha:(float)arg4 accentAlpha:(float)arg5 accentModulo:(int)arg6;
+ (id)imagesDictionary;
+ (void)layoutNodes:(id)arg1 offset:(unsigned int)arg2 center:(struct CGPoint { float x1; float x2; })arg3 radius:(float)arg4 angleMultiplier:(float)arg5 scale:(float)arg6 rotate:(BOOL)arg7 round:(BOOL)arg8;
+ (void)setBackgroundColor:(id)arg1 onTicks:(id)arg2;
+ (id)textureAtlas;
+ (id)ticks:(unsigned int)arg1 center:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 color1:(id)arg4 color2:(id)arg5 smallSize:(struct CGSize { float x1; float x2; })arg6 largeSize:(struct CGSize { float x1; float x2; })arg7 smallFilterWidth:(float)arg8 largeFilterWidth:(float)arg9 l1mod:(unsigned int)arg10 l2mod:(unsigned int)arg11;

@end