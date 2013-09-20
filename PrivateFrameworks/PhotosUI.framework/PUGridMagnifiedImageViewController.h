/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSIndexPath, PUGridMagnifiedView;

@interface PUGridMagnifiedImageViewController : UIViewController {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
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
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _canShowFullScreen;
    id _delegate;
    } _gestureWindLocation;
    int _imageFormat;
    NSIndexPath *_itemIndexPath;
    } _itemWindFrame;
    } _lastLocation;
    } _magnifiedDragEdgeInsets;
    } _magnifiedSize;
    PUGridMagnifiedView *_magnifiedView;
    float _magnifiedYOffset;
    } _shadowOffset;
    float _shadowOpacity;
    float _shadowRadius;
    } _trackingWindFrame;
}

@property(readonly) BOOL canShowFullScreen;
@property id delegate;
@property struct CGPoint { float x1; float x2; } gestureWindLocation;
@property int imageFormat;
@property(retain) NSIndexPath * itemIndexPath;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } itemWindFrame;
@property struct CGPoint { float x1; float x2; } lastLocation;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } magnifiedDragEdgeInsets;
@property struct CGSize { float x1; float x2; } magnifiedSize;
@property(retain) PUGridMagnifiedView * magnifiedView;
@property float magnifiedYOffset;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowOpacity;
@property float shadowRadius;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } trackingWindFrame;

- (void).cxx_destruct;
- (void)beginMagnification;
- (BOOL)canShowFullScreen;
- (void)continueMagnification;
- (id)delegate;
- (void)endMagnification;
- (BOOL)gestureInNewLocation;
- (struct CGPoint { float x1; float x2; })gestureWindLocation;
- (void)hideMagnifiedThumbnailWithAnimation:(BOOL)arg1;
- (id)imageForIndexPath:(id)arg1;
- (id)imageForMagnifyLocation:(struct CGPoint { float x1; float x2; })arg1;
- (int)imageFormat;
- (id)initWithDelegate:(id)arg1;
- (id)installMagnifiedView;
- (BOOL)isValidMagnifyLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)itemIndexPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })itemWindFrame;
- (struct CGPoint { float x1; float x2; })lastLocation;
- (void)loadView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })magnifiedDragEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })magnifiedImageWindFrame;
- (struct CGSize { float x1; float x2; })magnifiedSize;
- (id)magnifiedView;
- (float)magnifiedYOffset;
- (void)prepareForRelease;
- (void)setDelegate:(id)arg1;
- (void)setGestureWindLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setImageFormat:(int)arg1;
- (void)setItemIndexPath:(id)arg1;
- (void)setItemWindFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLastLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMagnifiedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMagnifiedView:(id)arg1;
- (void)setMagnifiedYOffset:(float)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setTrackingWindFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setupMagnifiedView;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)shadowOpacity;
- (float)shadowRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackingWindFrame;

@end
