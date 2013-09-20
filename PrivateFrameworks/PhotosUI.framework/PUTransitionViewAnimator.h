/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUTransitionViewAnimatorDelegate>, CADisplayLink, PUValueFilter, UIView;

@interface PUTransitionViewAnimator : NSObject {
    struct { 
        unsigned int respondsToDidUpdate : 1; 
        unsigned int respondsToWillEnd : 1; 
        unsigned int respondsToDidEnd : 1; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
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
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    CADisplayLink *__autoUpdateDisplayLink;
    float __currentRotation;
    float __currentScale;
    float __currentSizeMixFactor;
    float __desiredRotation;
    float __desiredScale;
    float __desiredSizeMixFactor;
    } __desiredTranslation;
    BOOL __isAutoUpdating;
    BOOL __isEnding;
    PUValueFilter *__progressFilter;
    PUValueFilter *__rampUpFilter;
    PUValueFilter *__shouldFinishFilter;
    } __targetAspectRatioSourceFrame;
    float __targetScale;
    } _anchorPoint;
    BOOL _autoUpdates;
    } _currentTranslation;
    <PUTransitionViewAnimatorDelegate> *_delegate;
    } _delegateFlags;
    unsigned int _direction;
    float _progress;
    double _rampUpDuration;
    BOOL _shouldFinish;
    BOOL _shouldUseTargetAspectRatio;
    } _sourceFrame;
    } _targetFrame;
    float _unfilteredProgress;
    UIView *_view;
}

@property(setter=_setAutoUpdateDisplayLink:,retain) CADisplayLink * _autoUpdateDisplayLink;
@property(setter=_setCurrentRotation:) float _currentRotation;
@property(setter=_setCurrentScale:) float _currentScale;
@property(setter=_setCurrentSizeMixFactor:) float _currentSizeMixFactor;
@property(setter=_setDesiredRotation:) float _desiredRotation;
@property(setter=_setDesiredScale:) float _desiredScale;
@property(setter=_setDesiredSizeMixFactor:) float _desiredSizeMixFactor;
@property(setter=_setDesiredTranslation:) struct CGPoint { float x1; float x2; } _desiredTranslation;
@property(setter=_setAutoUpdating:) BOOL _isAutoUpdating;
@property(setter=_setEnding:) BOOL _isEnding;
@property(setter=_setProgressFilter:,retain) PUValueFilter * _progressFilter;
@property(setter=_setRampUpFilter:,retain) PUValueFilter * _rampUpFilter;
@property(setter=_setShouldFinishFilter:,retain) PUValueFilter * _shouldFinishFilter;
@property(setter=_setTargetAspectRatioSourceFrame:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _targetAspectRatioSourceFrame;
@property(setter=_setTargetScale:) float _targetScale;
@property(setter=_setAnchorPoint:) struct CGPoint { float x1; float x2; } anchorPoint;
@property BOOL autoUpdates;
@property struct CGPoint { float x1; float x2; } currentTranslation;
@property <PUTransitionViewAnimatorDelegate> * delegate;
@property unsigned int direction;
@property float progress;
@property(setter=_setRampUpDuration:) double rampUpDuration;
@property BOOL shouldFinish;
@property(setter=_setShouldUseTargetAspectRatio:) BOOL shouldUseTargetAspectRatio;
@property(setter=_setSourceFrame:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceFrame;
@property(setter=_setTargetFrame:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetFrame;
@property float unfilteredProgress;
@property(setter=_setView:,retain) UIView * view;

- (void).cxx_destruct;
- (void)_autoUpdate:(id)arg1;
- (id)_autoUpdateDisplayLink;
- (float)_currentRotation;
- (float)_currentScale;
- (float)_currentSizeMixFactor;
- (float)_desiredRotation;
- (float)_desiredScale;
- (float)_desiredSizeMixFactor;
- (struct CGPoint { float x1; float x2; })_desiredTranslation;
- (void)_endWithTranslationVelocity:(struct CGPoint { float x1; float x2; })arg1 rotationVelocity:(float)arg2 scaleVelocity:(float)arg3 shouldBounce:(BOOL)arg4 finish:(BOOL)arg5 animated:(BOOL)arg6;
- (BOOL)_isAutoUpdating;
- (BOOL)_isEnding;
- (id)_progressFilter;
- (id)_rampUpFilter;
- (void)_setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setAutoUpdateDisplayLink:(id)arg1;
- (void)_setAutoUpdating:(BOOL)arg1;
- (void)_setCurrentRotation:(float)arg1;
- (void)_setCurrentScale:(float)arg1;
- (void)_setCurrentSizeMixFactor:(float)arg1;
- (void)_setCurrentTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setDesiredRotation:(float)arg1;
- (void)_setDesiredScale:(float)arg1;
- (void)_setDesiredSizeMixFactor:(float)arg1;
- (void)_setDesiredTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setDirection:(unsigned int)arg1;
- (void)_setEnding:(BOOL)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setProgressFilter:(id)arg1;
- (void)_setRampUpDuration:(double)arg1;
- (void)_setRampUpFilter:(id)arg1;
- (void)_setShouldFinish:(BOOL)arg1;
- (void)_setShouldFinishFilter:(id)arg1;
- (void)_setShouldUseTargetAspectRatio:(BOOL)arg1;
- (void)_setSourceFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setTargetAspectRatioSourceFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setTargetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setTargetScale:(float)arg1;
- (void)_setUnfilteredProgress:(float)arg1;
- (void)_setView:(id)arg1;
- (id)_shouldFinishFilter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_targetAspectRatioSourceFrame;
- (float)_targetScale;
- (void)_update;
- (void)_updateAutoUpdateDisplayLink;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (BOOL)autoUpdates;
- (void)cancelWithTranslationVelocity:(struct CGPoint { float x1; float x2; })arg1 rotationVelocity:(float)arg2 scaleVelocity:(float)arg3 shouldBounce:(BOOL)arg4;
- (void)cancelWithoutAnimation;
- (struct CGPoint { float x1; float x2; })currentTranslation;
- (id)delegate;
- (unsigned int)direction;
- (void)finishWithTranslationVelocity:(struct CGPoint { float x1; float x2; })arg1 rotationVelocity:(float)arg2 scaleVelocity:(float)arg3 shouldBounce:(BOOL)arg4;
- (id)initWithView:(id)arg1 sourceFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 targetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 anchorPoint:(struct CGPoint { float x1; float x2; })arg4 shouldUseTargetAspectRatio:(BOOL)arg5 rampUpDuration:(double)arg6 direction:(unsigned int)arg7;
- (float)progress;
- (double)rampUpDuration;
- (void)setAutoUpdates:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldFinish;
- (BOOL)shouldUseTargetAspectRatio;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetFrame;
- (float)unfilteredProgress;
- (void)updateWithTranslation:(struct CGPoint { float x1; float x2; })arg1 rotation:(float)arg2 scale:(float)arg3;
- (id)view;

@end
