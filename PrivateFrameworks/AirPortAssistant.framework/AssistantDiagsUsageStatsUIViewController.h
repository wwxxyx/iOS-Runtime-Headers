/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class TextLinkButton, UIView;

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate> {
    UIView *_blankTopView;
    UIView *_linkContainerView;
    TextLinkButton *linkButton;
    id previousNavDelegate;
    UIView *tableHeaderContainerView;
}

@property(retain) UIView * blankTopView;
@property(retain) UIView * linkContainerView;
@property(retain) UIView * tableHeaderContainerView;

- (id)blankTopView;
- (void)dealloc;
- (void)handleTextLinkTap;
- (id)linkContainerView;
- (void)setBlankTopView:(id)arg1;
- (void)setLinkContainerView:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setUpInitialTableFooter;
- (void)setUpInitialTableHeaderConfiguration;
- (id)tableHeaderContainerView;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
