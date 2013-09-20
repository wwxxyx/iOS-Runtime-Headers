/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadSignArtwork : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    float _contentScale;
    } _layoutSize;
    struct __CTLine { } *_line;
    BOOL _onRoute;
    int _orientation;
    float _scale;
}

- (id).cxx_construct;
- (void)_updateLayoutSize;
- (struct BRectImp<float> { struct Vec2Imp<float> { float x_1_1_1; float x_1_1_2; } x1; struct Vec2Imp<float> { float x_2_1_1; float x_2_1_2; } x2; })boundsAtOrigin;
- (void)dealloc;
- (id)image;
- (id)initWithString:(id)arg1 orientation:(int)arg2 contentScale:(float)arg3 onRoute:(BOOL)arg4;
- (struct Vec2Imp<float> { float x1; float x2; })offsetPixelForPixel:(struct Vec2Imp<float> { float x1; float x2; })arg1;

@end
