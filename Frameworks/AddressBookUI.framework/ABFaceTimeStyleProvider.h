/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, UIFont;

@interface ABFaceTimeStyleProvider : ABTabletStyleProvider <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider> {
}

@property(readonly) UIColor * tonePickerCellBackgroundColor;
@property(readonly) UIColor * tonePickerCellHighlightedTextColor;
@property(readonly) UIColor * tonePickerCellTextColor;
@property(readonly) UIFont * tonePickerCellTextFont;
@property(readonly) UIColor * tonePickerHeaderTextColor;
@property(readonly) UIFont * tonePickerHeaderTextFont;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tonePickerHeaderTextPaddingInsets;
@property(readonly) UIColor * tonePickerHeaderTextShadowColor;
@property(readonly) struct UIOffset { float x1; float x2; } tonePickerHeaderTextShadowOffset;
@property(readonly) int tonePickerTableViewSeparatorStyle;
@property(readonly) BOOL tonePickerUsesOpaqueBackground;
@property(readonly) UIColor * vibrationPickerCellBackgroundColor;
@property(readonly) UIColor * vibrationPickerCellHighlightedTextColor;
@property(readonly) UIColor * vibrationPickerCellTextColor;
@property(readonly) UIFont * vibrationPickerCellTextFont;
@property(readonly) UIColor * vibrationPickerHeaderTextColor;
@property(readonly) UIFont * vibrationPickerHeaderTextFont;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } vibrationPickerHeaderTextPaddingInsets;
@property(readonly) UIColor * vibrationPickerHeaderTextShadowColor;
@property(readonly) struct UIOffset { float x1; float x2; } vibrationPickerHeaderTextShadowOffset;
@property(readonly) int vibrationPickerTableViewSeparatorStyle;
@property(readonly) BOOL vibrationPickerUsesOpaqueBackground;
@property(readonly) BOOL wantsCustomTonePickerHeaderView;
@property(readonly) BOOL wantsCustomVibrationPickerHeaderView;

- (id)_accessoryDisclosureIndicatorHighlightedImage;
- (id)_accessoryDisclosureIndicatorHighlightedImageShadowed;
- (id)_accessoryDisclosureIndicatorImage;
- (id)_accessoryDisclosureIndicatorImageShadowed;
- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForCardTableWhenEditing:(BOOL)arg1;
- (int)abCellStyleForGroupsTableGrouped;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForMembersTable;
- (id)cardActionButtonBackgroundHighlighted;
- (id)cardActionButtonBackgroundNormal;
- (int)cardActionButtonType;
- (id)cardActionConferenceIcon;
- (id)cardActionConferenceIconPressed;
- (BOOL)cardActionsAllowFaceTimeFavorites;
- (BOOL)cardActionsAllowVoiceFavorites;
- (id)cardCellBackgroundColor;
- (id)cardCellDividerColorVertical:(BOOL)arg1;
- (id)cardCellDividerShadowColorVertical:(BOOL)arg1;
- (BOOL)cardCellLooksDifferentWhenEditing;
- (int)cardCellSelectionStyle;
- (id)cardClippingImageLabelBevelColor;
- (id)cardClippingImageLabelColor;
- (id)cardDeleteButtonImage;
- (id)cardDeleteButtonImagePressed;
- (id)cardHeaderDefaultLabelTextColor;
- (id)cardHeadlineTextColor;
- (id)cardLabelEmphasizedHighlightedTextColor;
- (id)cardLabelHighlightedTextColor;
- (id)cardLabelSelectedBackgroundColor;
- (id)cardLabelTextColor;
- (id)cardPhotoBackgroundImage;
- (id)cardPhotoEditOverlayImage;
- (id)cardPhotoEditPlaceholderImage;
- (id)cardPhotoFacebookAttributionImage;
- (float)cardPhotoFrameBorderSize;
- (id)cardPhotoMaskImage;
- (struct CGSize { float x1; float x2; })cardPhotoOffset;
- (id)cardPhotoOverlayImage;
- (id)cardPhotoShadowImage;
- (struct CGSize { float x1; float x2; })cardPhotoShadowOffset;
- (BOOL)cardPhotoShouldApplyOverlayImageWhenLabelPresent;
- (id)cardPlaceholderCompanyImage;
- (BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)cardPlaceholderPersonImage;
- (BOOL)cardSectionAlwaysWantsHeader;
- (BOOL)cardSectionDrawsDefaultTopShadow;
- (BOOL)cardShouldUseSeparateSectionsForUnknownCardActions;
- (id)cardTableCellBorderColor;
- (BOOL)cardTableShouldRemoveBackgroundView;
- (BOOL)cardTableUsesRowFadeAnimation;
- (BOOL)cardTableViewUsesDistinctSectionHeaderFooterHeights;
- (id)cardTaglineTextColor;
- (id)cardValueClearButtonImage;
- (id)cardValueHighlightedTextColor;
- (BOOL)cardValueHighlightsWhenTouched;
- (id)cardValueTextColor;
- (BOOL)datePickerHasNavigationTitle;
- (int)dialogStyleForDeleteConfirmation;
- (id)editorViewColor;
- (id)groupAccountNameColor;
- (id)groupAccountNameShadowColor;
- (id)groupCellBackgroundColor;
- (id)groupCellHighlightedTextColor;
- (int)groupCellSelectionStyle;
- (id)groupCellShadowColor;
- (id)groupCellTextColor;
- (id)groupHeaderBackgroudColor;
- (id)groupsTableBackgroundColor;
- (BOOL)groupsTableShouldRemoveBackgroundView;
- (int)headerViewBorderStyle;
- (BOOL)labelPickerUsesOpaqueBackground;
- (id)memberHeaderBackgroundView;
- (id)memberNameMeCardTextColor;
- (id)memberNameSelectedColor;
- (id)memberNameSelectedShadowColor;
- (id)memberNameShadowColor;
- (id)memberNameTextColor;
- (id)memberPhotoMaskImage;
- (id)memberPhotoOverlayImage;
- (id)memberPlaceholderCompanyImage;
- (id)memberPlaceholderPersonImage;
- (id)memberSearchFieldBackgroundColor;
- (id)memberSectionListHeaderImage;
- (id)membersBackgroundColor;
- (id)membersHeaderBackgroundColor;
- (id)membersHeaderContentViewBackgroundColor;
- (float)membersIndexMaximumHeight;
- (id)membersIndexTextColor;
- (id)membersIndexTrackingBackgroundColor;
- (BOOL)membersSearchBarIsInTableHeader;
- (int)membersSelectionStyle;
- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForCellStyle:(int)arg1 selected:(BOOL)arg2;
- (id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
- (id)newCardDividerViewVertical:(BOOL)arg1;
- (id)newTableFooterViewForCellStyle:(int)arg1;
- (int)peoplePickerBarStyle;
- (BOOL)peoplePickerBarStyleIsTranslucent;
- (id)personActionColor;
- (id)personActionFont;
- (id)personActionHighlightedColor;
- (id)personActionShadowColor;
- (struct CGSize { float x1; float x2; })personActionShadowOffset;
- (id)personHeaderPasteboardColor;
- (id)personHeaderShadowColor;
- (struct CGSize { float x1; float x2; })personHeaderShadowOffset;
- (id)personLabelColor;
- (id)personLabelHighlightedColor;
- (id)personLabelShadowColor;
- (id)personValueEmphasizedColor;
- (id)personValueEmphasizedHighlightColor;
- (id)personValueImportantColor;
- (id)personValueImportantHighlightColor;
- (id)personViewGetFavoritesBadge;
- (id)personViewGetFavoritesBadgeHighlighted;
- (float)personViewHeaderImageHeight;
- (float)personViewHeaderImageWidth;
- (int)pickerTransitionStyle;
- (BOOL)presentDatePickerInPopover;
- (BOOL)presentModalViewInPopover;
- (BOOL)presentNewContactsControllersInPopover;
- (id)separatorColorForCellStyle:(int)arg1;
- (int)separatorStyleForCellStyle:(int)arg1;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2;
- (id)shadowColorForCellStyle:(int)arg1;
- (BOOL)shouldDefinePickerTransitionStyle;
- (BOOL)shouldPropagateStylesToPickers;
- (BOOL)shouldUseCardContentProviderWhenAvailable;
- (BOOL)shouldUsePeoplePickerBarStyle;
- (id)tonePickerCellBackgroundColor;
- (id)tonePickerCellHighlightedTextColor;
- (id)tonePickerCellSelectedTextColor;
- (id)tonePickerCellTextColor;
- (id)tonePickerCellTextFont;
- (id)tonePickerHeaderTextColor;
- (id)tonePickerHeaderTextFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tonePickerHeaderTextPaddingInsets;
- (id)tonePickerHeaderTextShadowColor;
- (struct UIOffset { float x1; float x2; })tonePickerHeaderTextShadowOffset;
- (int)tonePickerTableViewSeparatorStyle;
- (BOOL)tonePickerUsesOpaqueBackground;
- (id)vibrationPickerCellBackgroundColor;
- (id)vibrationPickerCellHighlightedTextColor;
- (id)vibrationPickerCellSelectedTextColor;
- (id)vibrationPickerCellTextColor;
- (id)vibrationPickerCellTextFont;
- (id)vibrationPickerHeaderTextColor;
- (id)vibrationPickerHeaderTextFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })vibrationPickerHeaderTextPaddingInsets;
- (id)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset { float x1; float x2; })vibrationPickerHeaderTextShadowOffset;
- (int)vibrationPickerTableViewSeparatorStyle;
- (BOOL)vibrationPickerUsesOpaqueBackground;
- (BOOL)wantsCustomTonePickerHeaderView;
- (BOOL)wantsCustomVibrationPickerHeaderView;

@end
