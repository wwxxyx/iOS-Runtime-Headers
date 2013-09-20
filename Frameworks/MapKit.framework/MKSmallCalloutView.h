/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKCalloutBackgroundView, NSString, UILabel, UIView, UIView<_MKCalloutDetailView>, _MKSmallCalloutPassthroughButton;

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {
    struct CGSize { 
        float width; 
        float height; 
    MKCalloutBackgroundView *_calloutBackgroundView;
    UIView<_MKCalloutDetailView> *_detailView;
    UIView *_leftView;
    int _mapDisplayStyle;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    float _maxWidth;
    } _preferredContentSize;
    UIView *_rightView;
    BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_unmaskedContainerView;
}

@property(readonly) struct CGSize { float x1; float x2; } _preferredContentSize;
@property(retain) MKCalloutBackgroundView * calloutBackgroundView;
@property(copy) NSString * calloutSubtitle;
@property(copy) NSString * calloutTitle;
@property(retain) UIView * detailView;
@property(retain) UIView * leftView;
@property int mapDisplayStyle;
@property(retain) UIView * rightView;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_centerRect;
- (float)_leftTextMargin;
- (void)_preLayoutCenterSubviews;
- (struct CGSize { float x1; float x2; })_preferredContentSize;
- (float)_rightTextMargin;
- (id)_subtitleLabel;
- (void)_updatePreferredContentSize;
- (float)_widthWithoutTruncation;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutBackgroundView;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (BOOL)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftView;
- (int)mapDisplayStyle;
- (float)maxCenterTextWidth;
- (void)reset;
- (id)rightView;
- (void)setCalloutBackgroundView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(BOOL)arg2;
- (void)setDetailView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1;
- (void)setMapDisplayStyle:(int)arg1;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
