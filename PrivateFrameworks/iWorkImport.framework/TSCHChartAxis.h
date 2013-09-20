/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSCHStyleActAlike>, TSCHChartAxisID, TSCHChartModel, TSUFastReadInvalidatingCache;

@interface TSCHChartAxis : NSObject <TSCHUnretainedParent, TSCHStyleOwning> {
    TSUFastReadInvalidatingCache *mAnalysisCache;
    TSCHChartAxisID *mAxisID;
    TSCHChartModel *mChartModel;
    <TSCHStyleActAlike> *mNonStyle;
    unsigned int mNonStyleIndex;
    <TSCHStyleActAlike> *mStyle;
    unsigned int mStyleIndex;
}

@property(readonly) TSCHChartAxisID * axisID;
@property(readonly) int currentAxisScaleSetting;
@property(readonly) BOOL isCategory;
@property(readonly) BOOL isRangeContinuous;
@property(readonly) TSCHChartModel * model;

+ (id)axisForInfo:(id)arg1;
+ (id)paragraphStyleForLabelsFontForInfo:(id)arg1;
+ (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfLabelsForInfo:(id)arg1 onlyHeight:(BOOL)arg2;
+ (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfSeriesLabelsForInfo:(id)arg1 onlyHeight:(BOOL)arg2;
+ (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfSeriesLabelsForInfo:(id)arg1;

- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)analysis;
- (id)axisID;
- (unsigned int)axisIndex;
- (id)chartInfo;
- (void)clearParent;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)context;
- (int)currentAxisScaleSetting;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (id)description;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (id)drawableInfo;
- (BOOL)editableFormatForValueStrings;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned int)arg2 multiDataSetIndex:(unsigned int)arg3;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned int)arg2;
- (id)formattedStringForValue:(id)arg1;
- (id)g_genericToDefaultPropertyMap;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (unsigned int)indexForSelectionPathLabelIndex:(unsigned int)arg1;
- (id)initWithAxisID:(id)arg1 model:(id)arg2;
- (id)inspectorStringForValue:(id)arg1;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (double)interceptForAxis:(id)arg1;
- (void)invalidateTransientState;
- (BOOL)isCategory;
- (BOOL)isRangeContinuous;
- (id)majorGridLocations;
- (double)max;
- (double)min;
- (id)minorGridLocations;
- (id)model;
- (double)modelMax;
- (double)modelMin;
- (unsigned int)nonStyleIndex;
- (id)nonstyle;
- (id)numberFormat;
- (id)numberFormatForSeries:(id)arg1 index:(unsigned int)arg2;
- (id)objectValueForProperty:(int)arg1;
- (id)p_axisAnalysisFromCurrentModel;
- (unsigned int)p_count;
- (id)p_genericToDefaultPropertyMap;
- (unsigned int)p_rangeCount;
- (id)p_swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (void)propertiesWereMutated:(id)arg1;
- (double)range;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg1;
- (unsigned int)selectionPathLabelIndexForMultiDataSetIndex:(unsigned int)arg1;
- (void)setNonStyle:(id)arg1 index:(unsigned int)arg2;
- (void)setStyle:(id)arg1 index:(unsigned int)arg2;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfLabelsForInfo:(id)arg1 enumerator:(id)arg2 onlyHeight:(BOOL)arg3;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (unsigned int)styleIndex;
- (BOOL)supportsFormattedStringForInvalidValue;
- (id)swapTuplesForMutations:(id)arg1;
- (id)swapTuplesForMutationsForImport:(id)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (double)unitSpaceCenterValueForSeries:(id)arg1 index:(unsigned int)arg2;
- (double)unitSpaceCenterValueForValue:(double)arg1;
- (double)unitSpaceCenterValueHalfOffset;
- (double*)unitSpaceCenterValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (double)unitSpaceHalfOffsetForCountSpaceHalfOffset;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1 min:(double)arg2 count:(double)arg3;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned int)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned int)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned int)arg2;
- (double*)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 min:(double)arg3 max:(double)arg4;
- (double*)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)updateMinMaxGridLocationsInAnalysis:(id)arg1;
- (void)updateModelMinMaxInAnalysis:(id)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)valueForProperty:(int)arg1;

@end
