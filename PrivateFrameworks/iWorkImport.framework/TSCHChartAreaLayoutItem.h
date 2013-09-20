/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartAxisLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {
    TSCHChartAxisLayoutItem *mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem *mLeftVerticalAxis;
    unsigned int mRelayoutDepth;
    TSCHChartAxisLayoutItem *mRightVerticalAxis;
    TSCHChartAxisLayoutItem *mTopHorizontalAxis;
}

- (void)buildSubTree;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })i_currentBufferAreaUnitRect;
- (void)p_arrangeSizedChildren;
- (Class)p_axisLayoutItemClassForAxisID:(id)arg1;
- (float)p_dataSetNameLabelPadding;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)renderersWithRep:(id)arg1;

@end
