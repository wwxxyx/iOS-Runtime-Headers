/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController {
}

@property BOOL colorSamplingEnabled;

- (BOOL)colorSamplingEnabled;
- (id)initWithPhoto:(id)arg1;
- (id)initWithUIImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithUIImage:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)setColorSamplingEnabled:(BOOL)arg1;
- (void)updateLegibility;
- (void)viewWillAppear:(BOOL)arg1;
- (id)wallpaperImage;

@end
