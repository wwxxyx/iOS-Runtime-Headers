/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesStyle : TSCHBaseStyle {
}

+ (id)bootstrappedSeriesStyleWithContext:(id)arg1 seriesIndex:(unsigned int)arg2;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)getURLForImage:(id)arg1;
+ (id)identifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)presetStyleDescriptorForOrdinal:(unsigned int)arg1;
+ (id)properties;

- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)p_upgrade3DChartProperties:(id)arg1;
- (void)p_upgrade3DFillSubclassTSDFill:(id)arg1;
- (void)p_upgradeBubbleChartProperties:(id)arg1;
- (void)p_upgradeMixedChartProperties:(id)arg1;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg1;
- (void)p_upgradeSeparateVisibilityProperties:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
