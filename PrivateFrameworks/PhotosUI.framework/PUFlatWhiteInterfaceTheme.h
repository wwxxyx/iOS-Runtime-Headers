/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSDictionary, UIColor, UIFont, UIImage;

@interface PUFlatWhiteInterfaceTheme : NSObject <PUInterfaceTheme> {
}

@property(readonly) UIColor * albumListBackgroundColor;
@property(readonly) float albumListDisabledAlbumStackViewAlpha;
@property(readonly) float albumListDisabledAlbumTitleAlpha;
@property(readonly) UIFont * albumListSubtitleLabelFont;
@property(readonly) UIFont * albumListTitleLabelFont;
@property(readonly) UIColor * bannerBackgroundColor;
@property(readonly) float bannerHeight;
@property(readonly) UIColor * cloudFeedBackgroundColor;
@property(readonly) NSDictionary * cloudFeedDefaultTextAttributes;
@property(readonly) NSDictionary * cloudFeedEmphasizedTextAttributes;
@property(readonly) NSDictionary * cloudFeedInteractionLargerTextAttributes;
@property(readonly) NSDictionary * cloudFeedInteractionTextAttributes;
@property(readonly) NSDictionary * cloudFeedInvitationSubtitleTextAttributes;
@property(readonly) NSDictionary * cloudFeedInvitationTitleTextAttributes;
@property(readonly) NSDictionary * cloudFeedLargerDefaultTextAttributes;
@property(readonly) NSDictionary * cloudFeedLargerEmphasizedTextAttributes;
@property(readonly) UIImage * cloudFeedMiniChevronImage;
@property(readonly) UIImage * cloudFeedSectionHeaderBackgroundImage;
@property(readonly) UIColor * cloudFeedSeparatorColor;
@property(readonly) float cloudFeedSeparatorHeight;
@property(readonly) NSDictionary * cloudFeedWhiteDefaultTextAttributes;
@property(readonly) NSDictionary * cloudFeedWhiteEmphasizedTextAttributes;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } commentsButtonTextInset;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentCommentsButtonImageInset;
@property(readonly) UIColor * contentCommentsHiddenButtonImageColor;
@property(readonly) NSDictionary * contentCommentsHiddenButtonTextAttributes;
@property(readonly) UIColor * contentCommentsShownButtonImageColor;
@property(readonly) NSDictionary * contentCommentsShownButtonTextAttributes;
@property(readonly) int defaultKeyboardAppearance;
@property(readonly) unsigned int emptyPlaceholderStyle;
@property(readonly) UIColor * emptyPlaceholderViewBackgroundColor;
@property(readonly) UIColor * gridViewCellBannerBackgroundColor;
@property(readonly) UIImage * gridViewCellBannerBackgroundImage;
@property(readonly) UIColor * gridViewCellBannerTextColor;
@property(readonly) UIFont * gridViewCellBannerTextFont;
@property(readonly) UIColor * photoBrowserChromeHiddenBackgroundColor;
@property(readonly) UIColor * photoBrowserChromeVisibleBackgroundColor;
@property(readonly) int photoBrowserStatusBarStyle;
@property(readonly) UIColor * photoCollectionToolbarButtonTintColor;
@property(readonly) float photoCollectionToolbarIconToTextSpacerWidth;
@property(readonly) UIImage * photoCollectionToolbarShadowImage;
@property(readonly) int photoCollectionToolbarStyle;
@property(readonly) float photoCollectionToolbarTextTitleSpacerWidth;
@property(readonly) UIColor * photoCollectionToolbarTintColor;
@property(readonly) BOOL photoCollectionToolbarTranslucent;
@property(readonly) UIColor * photoCollectionViewBackgroundColor;
@property(readonly) int photoCollectionViewBackgroundColorValue;
@property(readonly) UIFont * sharedAlbumCommentCardAlbumTitleFont;
@property(readonly) UIFont * sharedAlbumCommentCardButtonFont;
@property(readonly) UIFont * sharedAlbumCommentCardTextFont;
@property(readonly) UIFont * sharedAlbumCommentCardTitleFont;
@property(readonly) UIColor * toolbarCommentsHiddenButtonImageColor;
@property(readonly) NSDictionary * toolbarCommentsHiddenButtonTextAttributes;
@property(readonly) UIColor * toolbarCommentsShownButtonImageColor;
@property(readonly) NSDictionary * toolbarCommentsShownButtonTextAttributes;
@property(readonly) UIColor * topLevelNavigationBarButtonTintColor;
@property(readonly) UIImage * topLevelNavigationBarShadowImage;
@property(readonly) int topLevelNavigationBarStyle;
@property(readonly) UIColor * topLevelNavigationBarTintColor;
@property(readonly) NSDictionary * topLevelNavigationBarTitleTextAttributes;
@property(readonly) BOOL topLevelNavigationBarTranslucent;
@property(readonly) int topLevelStatusBarStyle;
@property(readonly) UIImage * topLevelTabBarBackgroundImage;
@property(readonly) UIColor * topLevelTabBarSelectedImageTintColor;
@property(readonly) UIImage * topLevelTabBarSelectionIndicatorImage;
@property(readonly) UIImage * topLevelTabBarShadowImage;
@property(readonly) UIColor * topLevelTabBarTintColor;
@property(readonly) float videoPaletteBottomMargin;
@property(readonly) float videoPaletteSideMargin;
@property(readonly) UIFont * wallpaperCategoryLabelFont;

- (id)_commentsFont;
- (id)_themeImageWithBaseName:(id)arg1;
- (id)albumListBackgroundColor;
- (float)albumListDisabledAlbumStackViewAlpha;
- (float)albumListDisabledAlbumTitleAlpha;
- (id)albumListSubtitleLabelFont;
- (id)albumListTitleLabelFont;
- (id)attributedStringForCloudFeedGroupHeaderWithText:(id)arg1;
- (id)bannerBackgroundColor;
- (float)bannerHeight;
- (id)cloudFeedBackgroundColor;
- (id)cloudFeedDefaultTextAttributes;
- (id)cloudFeedEmphasizedTextAttributes;
- (id)cloudFeedInteractionLargerTextAttributes;
- (id)cloudFeedInteractionTextAttributes;
- (id)cloudFeedInvitationSubtitleTextAttributes;
- (id)cloudFeedInvitationTitleTextAttributes;
- (id)cloudFeedLargerDefaultTextAttributes;
- (id)cloudFeedLargerEmphasizedTextAttributes;
- (id)cloudFeedMiniChevronImage;
- (id)cloudFeedSectionHeaderBackgroundImage;
- (id)cloudFeedSeparatorColor;
- (float)cloudFeedSeparatorHeight;
- (id)cloudFeedWhiteDefaultTextAttributes;
- (id)cloudFeedWhiteEmphasizedTextAttributes;
- (id)commentsButtonStringForCount:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })commentsButtonTextInset;
- (void)configureAlbumListDeleteButton:(id)arg1;
- (void)configureAlbumListEmptyStackViewPadPhotoDecoration:(id)arg1;
- (void)configureAlbumListEmptyStackViewPhonePhotoDecoration:(id)arg1;
- (void)configureAlbumListStackViewPadPhotoDecoration:(id)arg1;
- (void)configureAlbumListStackViewPhonePhotoDecoration:(id)arg1;
- (void)configureAlbumListSubtitleLabel:(id)arg1;
- (void)configureAlbumListTitleTextField:(id)arg1;
- (void)configureBannerLabel:(id)arg1;
- (void)configureBannerStackView:(id)arg1;
- (void)configureCloudFeedCommentButton:(id)arg1 withCount:(int)arg2;
- (void)configureCloudFeedInvitationReplyButton:(id)arg1;
- (void)configureCloudFeedStackView:(id)arg1 withStackSize:(struct CGSize { float x1; float x2; })arg2;
- (void)configureMapViewAnnotationCountLabel:(id)arg1;
- (void)configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1;
- (void)configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1;
- (void)configurePhotoCollectionHeaderDateLabel:(id)arg1 forStyle:(int)arg2;
- (void)configurePhotoCollectionHeaderLocationsLabel:(id)arg1 forStyle:(int)arg2;
- (void)configurePhotoCollectionHeaderTitleLabel:(id)arg1 forStyle:(int)arg2;
- (void)configurePhotoCollectionToolbarButton:(id)arg1;
- (void)configurePhotoCollectionToolbarDeleteButton:(id)arg1;
- (void)configureTopLevelNavigationBarButton:(id)arg1;
- (void)configureTopLevelNavigationBarDoneButton:(id)arg1;
- (void)configureTopLevelTabBarItem:(id)arg1 withBaseName:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentCommentsButtonImageInset;
- (id)contentCommentsHiddenButtonImageColor;
- (id)contentCommentsHiddenButtonTextAttributes;
- (id)contentCommentsShownButtonImageColor;
- (id)contentCommentsShownButtonTextAttributes;
- (id)createCloudFeedCommentButton;
- (int)defaultKeyboardAppearance;
- (unsigned int)emptyPlaceholderStyle;
- (id)emptyPlaceholderViewBackgroundColor;
- (id)gridViewCellBannerBackgroundColor;
- (id)gridViewCellBannerBackgroundImage;
- (id)gridViewCellBannerTextColor;
- (id)gridViewCellBannerTextFont;
- (id)photoBrowserChromeHiddenBackgroundColor;
- (id)photoBrowserChromeVisibleBackgroundColor;
- (int)photoBrowserStatusBarStyle;
- (id)photoCollectionHeaderActionButtonAttributesForStyle:(int)arg1;
- (id)photoCollectionHeaderActionButtonFontForStyle:(int)arg1;
- (id)photoCollectionHeaderBackgroundColorForBackgroundStyle:(unsigned int)arg1;
- (id)photoCollectionHeaderLocationIconForStyle:(int)arg1;
- (struct UIOffset { float x1; float x2; })photoCollectionHeaderLocationIconOffsetForStyle:(int)arg1;
- (BOOL)photoCollectionHeaderSecondaryLabelsAllCapsForStyle:(int)arg1;
- (id)photoCollectionToolbarBackgroundImageForBarMetrics:(int)arg1;
- (id)photoCollectionToolbarButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)photoCollectionToolbarButtonTintColor;
- (struct UIOffset { float x1; float x2; })photoCollectionToolbarButtonTitlePositionAdjustmentforBarMetrics:(int)arg1;
- (id)photoCollectionToolbarButtonTitleTextAttributesForState:(unsigned int)arg1;
- (id)photoCollectionToolbarDeleteButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)photoCollectionToolbarDeleteButtonTitleTextAttributesForState:(unsigned int)arg1;
- (float)photoCollectionToolbarIconToTextSpacerWidth;
- (id)photoCollectionToolbarShadowImage;
- (int)photoCollectionToolbarStyle;
- (float)photoCollectionToolbarTextTitleSpacerWidth;
- (id)photoCollectionToolbarTintColor;
- (BOOL)photoCollectionToolbarTranslucent;
- (id)photoCollectionViewBackgroundColor;
- (int)photoCollectionViewBackgroundColorValue;
- (id)sharedAlbumCommentCardAlbumTitleFont;
- (id)sharedAlbumCommentCardButtonFont;
- (id)sharedAlbumCommentCardTextFont;
- (id)sharedAlbumCommentCardTitleFont;
- (id)themeImagePrefix;
- (id)toolbarCommentsHiddenButtonImageColor;
- (id)toolbarCommentsHiddenButtonTextAttributes;
- (id)toolbarCommentsShownButtonImageColor;
- (id)toolbarCommentsShownButtonTextAttributes;
- (id)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)topLevelNavigationBarBackgroundImageForBarMetrics:(int)arg1;
- (id)topLevelNavigationBarButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)topLevelNavigationBarButtonTintColor;
- (struct UIOffset { float x1; float x2; })topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(int)arg1;
- (id)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned int)arg1;
- (id)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned int)arg1;
- (id)topLevelNavigationBarShadowImage;
- (int)topLevelNavigationBarStyle;
- (id)topLevelNavigationBarTintColor;
- (id)topLevelNavigationBarTitleTextAttributes;
- (BOOL)topLevelNavigationBarTranslucent;
- (int)topLevelStatusBarStyle;
- (id)topLevelTabBarBackgroundImage;
- (id)topLevelTabBarItemTitleTextAttributesForState:(unsigned int)arg1;
- (id)topLevelTabBarSelectedImageTintColor;
- (id)topLevelTabBarSelectionIndicatorImage;
- (id)topLevelTabBarShadowImage;
- (id)topLevelTabBarTintColor;
- (float)videoPaletteBottomMargin;
- (float)videoPaletteSideMargin;
- (id)wallpaperCategoryLabelFont;

@end
