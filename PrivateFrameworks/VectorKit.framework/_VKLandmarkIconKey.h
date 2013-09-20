/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface _VKLandmarkIconKey : NSObject {
    struct { 
        int iconStyle; 
        struct _VGLColor { 
            float r; 
            float g; 
            float b; 
            float a; 
        } iconBadgeColor; 
        struct _VGLColor { 
            float r; 
            float g; 
            float b; 
            float a; 
        } iconGradientColor[2]; 
        struct _VGLColor { 
            float r; 
            float g; 
            float b; 
            float a; 
        } iconBadgeLightColor; 
        int iconBadgeLightBlendMode; 
        struct _VGLColor { 
            float r; 
            float g; 
            float b; 
            float a; 
        } iconGlyphColor; 
        int iconGlyphStyle; 
        int iconGlyphBlendMode; 
        float iconHaloSize; 
        struct _VGLColor { 
            float r; 
            float g; 
            float b; 
            float a; 
        } iconHaloColor; 
        struct CGSize { 
            float width; 
            float height; 
        } iconDropShadowOffset; 
        float iconDropShadowSize; 
        struct _VGLColor { 
            float r; 
            float g; 
            float b; 
            float a; 
        } iconDropShadowColor; 
        float iconCornerRadius; 
        float iconBrightness; 
        float iconBevelAmount; 
        unsigned int iconSourceStyleAttributeKey; 
    NSString *_name;
    } _style;
}

- (id).cxx_construct;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; int x5; struct _VGLColor { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; int x7; int x8; float x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct CGSize { float x_11_1_1; float x_11_1_2; } x11; float x12; struct _VGLColor { float x_13_1_1; float x_13_1_2; float x_13_1_3; float x_13_1_4; } x13; float x14; float x15; float x16; unsigned int x17; }*)arg2;
- (BOOL)isEqual:(id)arg1;

@end
