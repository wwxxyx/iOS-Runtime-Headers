/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
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
    } _currentFrame;
    float _easing;
    BOOL _orientation;
    float _targetEasing;
    } _targetFrame;
    BOOL _wantsDrawerLayout;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } currentFrame;
@property float easing;
@property BOOL orientation;
@property float targetEasing;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetFrame;
@property BOOL wantsDrawerLayout;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentFrame;
- (float)easing;
- (BOOL)orientation;
- (void)setCurrentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEasing:(float)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setTargetEasing:(float)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setWantsDrawerLayout:(BOOL)arg1;
- (float)targetEasing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetFrame;
- (BOOL)wantsDrawerLayout;

@end
