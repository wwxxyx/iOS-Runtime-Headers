/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NetTopoMiniStaticLayout, UIActivityIndicatorView, UILabel, UIView;

@interface StepByStepUIViewController : AssistantSubUIViewController {
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    int sbsMode;
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    UIView *spinnerWithStatusBelowView;
    UIView *tableFooterContainerView;
    UIView *tableHeaderContainerView;
    UIView *topoContainerView;
    NetTopoMiniStaticLayout *topoLayout;
    UIView *topoView;
}

@property(retain) UIView * justTextContainerView;
@property UILabel * justTextLabel;
@property int sbsMode;
@property(retain) UILabel * spinnerWithStatusBelowLabel;
@property(retain) UIActivityIndicatorView * spinnerWithStatusBelowSpinner;
@property(retain) UIView * spinnerWithStatusBelowView;
@property(retain) UIView * tableFooterContainerView;
@property(retain) UIView * tableHeaderContainerView;
@property(retain) UIView * topoContainerView;
@property(retain) NetTopoMiniStaticLayout * topoLayout;
@property(retain) UIView * topoView;

- (void)dealloc;
- (id)justTextContainerView;
- (id)justTextLabel;
- (int)sbsMode;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setSbsMode:(int)arg1;
- (void)setSpinnerWithStatusBelowLabel:(id)arg1;
- (void)setSpinnerWithStatusBelowSpinner:(id)arg1;
- (void)setSpinnerWithStatusBelowView:(id)arg1;
- (void)setTableFooterContainerView:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setTopoContainerView:(id)arg1;
- (void)setTopoLayout:(id)arg1;
- (void)setTopoView:(id)arg1;
- (id)spinnerWithStatusBelowLabel;
- (id)spinnerWithStatusBelowSpinner;
- (id)spinnerWithStatusBelowView;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;
- (void)syncTopoUIForTargetProductID:(id)arg1 targetDeviceKind:(id)arg2 targetName:(id)arg3 sourceProductID:(id)arg4 sourceDeviceKind:(id)arg5 sourceName:(id)arg6 networkName:(id)arg7 connectionType:(id)arg8;
- (id)syncTopoUIInLayer:(id)arg1 withLayout:(id)arg2 targetProductID:(id)arg3 targetDeviceKind:(id)arg4 targetName:(id)arg5 sourceProductID:(id)arg6 sourceDeviceKind:(id)arg7 sourceName:(id)arg8 networkName:(id)arg9 connectionType:(id)arg10;
- (id)tableFooterContainerView;
- (id)tableHeaderContainerView;
- (id)topoContainerView;
- (id)topoLayout;
- (id)topoView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
