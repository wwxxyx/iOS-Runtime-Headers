/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@class NSData, NSDictionary;

@interface FCRFace : NSObject {
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    NSDictionary *expressionFeatures;
    } face;
    float faceAngle;
    NSDictionary *faceLandmarkPoints;
    float faceSize;
    int faceType;
    NSData *faceprint;
    } leftEye;
    } mouth;
    } rightEye;
    unsigned int trackDuration;
    int trackID;
}

@property(retain) NSDictionary * expressionFeatures;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } face;
@property float faceAngle;
@property(retain) NSDictionary * faceLandmarkPoints;
@property float faceSize;
@property int faceType;
@property(retain) NSData * faceprint;
@property(readonly) BOOL hasLeftEyeBounds;
@property(readonly) BOOL hasMouthBounds;
@property(readonly) BOOL hasRightEyeBounds;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } leftEye;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } mouth;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } rightEye;
@property unsigned int trackDuration;
@property int trackID;

- (void)dealloc;
- (id)expressionFeatures;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })face;
- (float)faceAngle;
- (id)faceLandmarkPoints;
- (float)faceSize;
- (int)faceType;
- (id)faceprint;
- (BOOL)hasLeftEyeBounds;
- (BOOL)hasMouthBounds;
- (BOOL)hasRightEyeBounds;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })leftEye;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })mouth;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })rightEye;
- (void)setExpressionFeatures:(id)arg1;
- (void)setFace:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setFaceAngle:(float)arg1;
- (void)setFaceLandmarkPoints:(id)arg1;
- (void)setFaceSize:(float)arg1;
- (void)setFaceType:(int)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setLeftEye:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setMouth:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setRightEye:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setTrackDuration:(unsigned int)arg1;
- (void)setTrackID:(int)arg1;
- (unsigned int)trackDuration;
- (int)trackID;

@end
