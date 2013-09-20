/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class <SBFWallpaperViewInternalObserver>, <SBFWallpaperViewLegibilityObserver>, NSTimer, SBFWallpaperParallaxSettings, SBFWallpaperSettings, UIColor, UIImage, UIImageView, UIView, _UILegibilitySettings, _UILegibilitySettingsProvider;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver> {
    UIImageView *_bottomGradientView;
    NSTimer *_colorSampleTimer;
    UIView *_contentView;
    BOOL _continuousColorSamplingEnabled;
    float _contrast;
    int _disallowRasterizationBlockCount;
    BOOL _filtersAverageColor;
    BOOL _generatingBlurredImages;
    <SBFWallpaperViewInternalObserver> *_internalObserver;
    UIColor *_lastAverageColor;
    <SBFWallpaperViewLegibilityObserver> *_legibilityObserver;
    _UILegibilitySettings *_legibilitySettings;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    float _parallaxAxisAdjustmentAngle;
    UIView *_parallaxCorrectionView;
    BOOL _parallaxEnabled;
    float _parallaxScaleFactor;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    UIView *_parallaxView;
    BOOL _shouldGenerateBlurredImagesWhenVisible;
    BOOL _suppressesGradients;
    UIImageView *_topGradientView;
    int _variant;
    BOOL _wallpaperAnimationEnabled;
    SBFWallpaperSettings *_wallpaperSettings;
    BOOL _wantsRasterization;
    float _zoomFactor;
}

@property(retain) UIView * contentView;
@property BOOL continuousColorSamplingEnabled;
@property float contrast;
@property BOOL filtersAverageColor;
@property <SBFWallpaperViewInternalObserver> * internalObserver;
@property <SBFWallpaperViewLegibilityObserver> * legibilityObserver;
@property(retain) _UILegibilitySettings * legibilitySettings;
@property float parallaxAxisAdjustmentAngle;
@property BOOL parallaxEnabled;
@property BOOL suppressesGradients;
@property int variant;
@property BOOL wallpaperAnimationEnabled;
@property(readonly) UIImage * wallpaperImage;
@property float zoomFactor;

+ (BOOL)_allowsParallax;
+ (BOOL)_allowsRasterization;

- (void)_applyParallaxSettings;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 smudgeRadius:(float)arg2;
- (void)_beginDisallowRasterizationBlock;
- (id)_blurReplacementImage;
- (id)_blurredImage;
- (float)_bottomGradientAlpha;
- (void)_cleanupAfterAnimatingGradients;
- (id)_computeAverageColor;
- (id)_displayedImage;
- (void)_endDisallowRasterizationBlock;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (id)_imageForBackdropParameters:(struct { int x1; int x2; int x3; })arg1 includeTint:(BOOL)arg2;
- (BOOL)_isVisible;
- (void)_notifyBlursInvalidated;
- (void)_notifyGeometryInvalidated;
- (void)_prepareToAnimateGradients;
- (void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2;
- (BOOL)_shouldShowBottomGradient;
- (BOOL)_shouldShowTopGradient;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (float)_topGradientAlpha;
- (void)_updateContentViewScale;
- (void)_updateGeneratingBlurs;
- (void)_updateGradientAlpha;
- (void)_updateGradientImage;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2;
- (void)_updateParallaxSettings;
- (void)_updateRasterizationState;
- (void)_updateScaleFactor;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSmudgeRadius:(float)arg2;
- (id)blurredImage;
- (id)contentView;
- (BOOL)continuousColorSamplingEnabled;
- (float)contrast;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contrastWithinBoxes:(float*)arg2 contrastBetweenBoxes:(float*)arg3;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)contrastRequiresTreatments;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)filtersAverageColor;
- (float)gradientOpacityInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contrastWithinBoxesFactor:(float)arg2;
- (id)imageForBackdropParameters:(struct { int x1; int x2; int x3; })arg1 includeTint:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)internalObserver;
- (void)invalidate;
- (BOOL)isDisplayingWallpaper:(id)arg1;
- (void)layoutSubviews;
- (id)legibilityObserver;
- (id)legibilitySettings;
- (float)parallaxAxisAdjustmentAngle;
- (BOOL)parallaxEnabled;
- (float)parallaxScaleFactor;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContinuousColorSamplingEnabled:(BOOL)arg1;
- (void)setContrast:(float)arg1;
- (void)setFiltersAverageColor:(BOOL)arg1;
- (void)setGeneratesBlurredImages:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setInternalObserver:(id)arg1;
- (void)setLegibilityObserver:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setParallaxAxisAdjustmentAngle:(float)arg1;
- (void)setParallaxEnabled:(BOOL)arg1;
- (void)setSuppressesGradients:(BOOL)arg1;
- (void)setVariant:(int)arg1 withAnimationFactory:(id)arg2;
- (void)setVariant:(int)arg1;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)suppressesGradients;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (int)variant;
- (BOOL)wallpaperAnimationEnabled;
- (id)wallpaperImage;
- (BOOL)wantsRasterization;
- (float)zoomFactor;

@end
