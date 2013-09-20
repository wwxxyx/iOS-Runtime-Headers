/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSCHChartType;

@interface TSCHChartFeature : NSObject <TSCHUnretainedParent> {
    NSArray *mCategoryAxisIDs;
    TSCHChartType *mChartType;
    NSArray *mValueAxisIDs;
}

@property(readonly) NSArray * categoryAxisIDs;
@property(readonly) NSArray * valueAxisIDs;

- (id)categoryAxisIDs;
- (id)categoryLabelPositioner;
- (void)clearParent;
- (id)columnShapeUIName;
- (void)dealloc;
- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (BOOL)drawValueLabelsForZero;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (id)initWithChartType:(id)arg1;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })arg2;
- (BOOL)isHorizontal;
- (BOOL)isPie;
- (int)labelOrientation;
- (float)maxDepthRatio;
- (void)p_initializeAxisIDs;
- (Class)p_selectAxisClassForScale:(int)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4;
- (Class)presetImagerClass;
- (BOOL)requiresAxisOrdinal;
- (BOOL)reverseSingleColumnLegendOrder;
- (float)sageMaxDepthRatio;
- (int)stackingSignRule;
- (Class)stageClass;
- (unsigned int)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsCategoryAxisSeriesNames;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsColumnShape;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEditing;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (BOOL)supportsElementChunking;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsErrorBars;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsInterSetDepthGap;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsMoreThanOneLiveCategory;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)supportsPercentNumberFormatting;
- (BOOL)supportsReverseChunking;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsSharedAndSeparateX;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueLabels;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (id)valueAxisIDs;
- (id)valueLabelPositioner;

@end
