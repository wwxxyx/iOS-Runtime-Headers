/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingDrawStyle : VKDrawStyle {
    struct VKProfileSparseRamp<signed char> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<signed char> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<_VGLColor> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    struct VKProfileSparseRamp<float> { 
        union _u { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    BOOL _hasStrokeColor3D;
    BOOL _hasStrokeWidth3D;
    } facadeColor;
    } flatColor;
    } footprintStrokeColor;
    } footprintStrokeWidth;
    } landmarkColor;
    } outline;
    } outlineColor;
    int roofStyle;
    } strokeColor3D;
    } strokeWidth3D;
    } topColor;
    } visibility;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })facadeColorAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })flatColorAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })footprintStrokeColorAtZoom:(float)arg1;
- (float)footprintStrokeWidthAtZoom:(float)arg1;
- (BOOL)hasStrokeColor3D;
- (BOOL)hasStrokeWidth3D;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })landmarkColorAtZoom:(float)arg1;
- (BOOL)outlineAtZoom:(float)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })outlineColorAtZoom:(float)arg1;
- (int)roofStyle;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })strokeColor3DAtZoom:(float)arg1;
- (float)strokeWidth3DAtZoom:(float)arg1;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned int)arg2 globals:(id)arg3;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })topColorAtZoom:(float)arg1;
- (id)variant;
- (BOOL)visibleAtZoom:(float)arg1;

@end
