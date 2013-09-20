/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMapTable, _VKLocalIconAtlas;

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver> {
    NSMapTable *_defaultAtlases;
    _VKLocalIconAtlas *_localAtlas;
    NSMapTable *_regionalAtlases;
}

+ (id)sharedManager;

- (id)_atlasForName:(id)arg1;
- (id)_defaultAtlasForScale:(float)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)artworkForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; int x5; struct _VGLColor { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; int x7; int x8; float x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct CGSize { float x_11_1_1; float x_11_1_2; } x11; float x12; struct _VGLColor { float x_13_1_1; float x_13_1_2; float x_13_1_3; float x_13_1_4; } x13; float x14; float x15; float x16; unsigned int x17; }*)arg3 contentScale:(float)arg4;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; int x5; struct _VGLColor { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; int x7; int x8; float x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct CGSize { float x_11_1_1; float x_11_1_2; } x11; float x12; struct _VGLColor { float x_13_1_1; float x_13_1_2; float x_13_1_3; float x_13_1_4; } x13; float x14; float x15; float x16; unsigned int x17; }*)arg3 contentScale:(float)arg4 styleAttributes:(id)arg5;
- (void)dealloc;
- (id)init;
- (void)purge;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end
