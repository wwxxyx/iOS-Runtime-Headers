/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CIColor, NSString;

@interface UIColor : NSObject <NSSecureCoding, NSCopying> {
    NSString *_systemColorName;
}

@property(readonly) struct CGColor { }* CGColor;
@property(readonly) CIColor * CIColor;
@property(getter=_systemColorName,setter=_setSystemColorName:,retain) NSString * systemColorName;

+ (id)__halfTransparentBlackColor;
+ (id)__halfTransparentWhiteColor;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_barHairlineShadowColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(float)arg4;
+ (id)_dimmingViewColor;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)_grayColorForFontSize:(float)arg1;
+ (id)_iAd_colorWithRGBA:(unsigned int)arg1;
+ (float)_luminanceWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)_mapkit_userLocationAccuracyRingFillColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColorSatellite;
+ (id)_markedTextBackgroundColor;
+ (id)_markedTextBorderColor;
+ (id)_remoteUI_colorWithString:(id)arg1;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithName:(id)arg1;
+ (id)_systemDestructiveTintColor;
+ (id)_systemInteractionTintColor;
+ (id)_systemMidGrayTintColor;
+ (id)_systemSelectedColor;
+ (id)_translucentPaperTextureColor;
+ (id)_webContentBackgroundColor;
+ (id)ab_colorWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)cardBackgroundInPopoverColor;
+ (id)cardCellBackgroundColor;
+ (id)cardCellReadonlyBackgroundColor;
+ (id)cardCellSeparatorColor;
+ (id)cardLabelReadonlyTextColor;
+ (id)cardValueReadonlyTextColor;
+ (id)cardValueTextColor;
+ (id)checkerboardColorWithColor:(id)arg1 andColor:(id)arg2 squareSize:(struct CGSize { float x1; float x2; })arg3;
+ (id)checkerboardColorWithColor:(id)arg1 andColor:(id)arg2 squareSize:(struct CGSize { float x1; float x2; })arg3;
+ (id)classFallbacksForKeyedArchiver;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithComponentRGBA:(struct { float x1; float x2; float x3; float x4; })arg1;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithPKColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithStyleString:(id)arg1;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)cyanColor;
+ (id)darkGrayColor;
+ (id)darkTextColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeBabyBlueColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeDarkSeparatorColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightBabyBlueColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeLightSeparatorColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeSectionOutlineColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)faceTimeShadowedGroupBackgroundColor;
+ (id)grayCheckerboardColor;
+ (id)grayCheckerboardColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)groupTableViewBackgroundColor;
+ (id)infoTextOverPinStripeTextColor;
+ (void)initialize;
+ (id)insertionPointColor;
+ (id)lightGrayColor;
+ (id)lightTextColor;
+ (id)magentaColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)orangeColor;
+ (id)pinStripeColor;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)selectionGrabberColor;
+ (id)selectionHighlightColor;
+ (id)siriui_glyphColor;
+ (id)siriui_highlightColor;
+ (id)siriui_keylineColor;
+ (id)siriui_keylineColorStark;
+ (id)siriui_maskingColor;
+ (id)siriui_maskingHighlightColor;
+ (id)siriui_semiTransparentTextColor;
+ (id)siriui_snippetBackgroundColor;
+ (id)siriui_textColor;
+ (id)siriui_textHighlightColor;
+ (BOOL)supportsSecureCoding;
+ (id)systemBlueColor;
+ (id)systemGrayColor;
+ (id)systemGreenColor;
+ (id)systemMidGrayColor;
+ (id)systemOrangeColor;
+ (id)systemPinkColor;
+ (id)systemRedColor;
+ (id)systemTealColor;
+ (id)systemYellowColor;
+ (id)tableBackgroundColor;
+ (id)tableCellBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableCellValue1BlueColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellbackgroundColorPigglyWiggly;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tableSelectionColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableSeparatorLightColor;
+ (id)tableShadowColor;
+ (id)tableViewBackgroundColor;
+ (id)tableViewBackgroundColorOpaque;
+ (id)tableViewCellDarkBlueTextColor;
+ (id)tableViewCellDarkBlueTextColor;
+ (id)tangierScrollViewTexturedBackgroundColor;
+ (id)textFieldAtomBlueColor;
+ (id)textFieldAtomPurpleColor;
+ (id)transparentGrayCheckerboardColor;
+ (id)transparentGrayCheckerboardColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_colorCombinedWithColor:(id)arg1;
- (id)_colorCombinedWithColors:(id)arg1;
- (BOOL)_getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)_getWhite:(float*)arg1 alpha:(float*)arg2;
- (float)_gkLuminance;
- (BOOL)_isSimilarToColor:(id)arg1 withinPercentage:(float)arg2;
- (float)_luminance;
- (id)_mapkit_blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)_mapkit_getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)_mapkit_isWhite;
- (void)_setSystemColorName:(id)arg1;
- (id)_systemColorName;
- (float)alpha;
- (float)alphaComponent;
- (float)blue;
- (float)blueComponent;
- (float)brightnessComponent;
- (id)burnWithColor:(id)arg1;
- (struct CGColor { }*)cgColor;
- (Class)classForCoder;
- (id)colorByAlteringOpacityToPercentage:(float)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (struct { float x1; float x2; float x3; float x4; })componentRGBA;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkerColorByPercentage:(float)arg1;
- (void)dealloc;
- (float)differenceFromColor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (float)green;
- (float)greenComponent;
- (unsigned int)hash;
- (float)hueComponent;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithStyleString:(id)arg1;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGreenOrYellow;
- (BOOL)isPatternColor;
- (float)luminance;
- (id)overlayWithColor:(id)arg1;
- (id)pu_colorWithIncreasedAlpha;
- (id)pu_colorWithIncreasedBrightness;
- (id)pu_darkerColor;
- (float)red;
- (float)redComponent;
- (float)saturationComponent;
- (void)set;
- (void)setFill;
- (void)setStroke;
- (id)soverWithColor:(id)arg1;
- (id)styleString;
- (id)tpImageFromColor;

@end
