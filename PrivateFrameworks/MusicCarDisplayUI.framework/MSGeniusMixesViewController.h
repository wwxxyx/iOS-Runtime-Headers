/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class <MSCarDisplayServiceProvider>, MPAVController, MPMediaQuery, MSNowPlayingButton, NSMutableArray, UIButton;

@interface MSGeniusMixesViewController : UIPageViewController <UIPageViewControllerDataSource> {
    MSNowPlayingButton *_nowPlayingButton;
    UIButton *_pageLeftButton;
    UIButton *_pageRightButton;
    MPAVController *_player;
    MPMediaQuery *_query;
    <MSCarDisplayServiceProvider> *_serviceProvider;
    NSMutableArray *_viewControllers;
}

- (void).cxx_destruct;
- (void)_itemChanged:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_pageLeftButtonTouchUpInside:(id)arg1;
- (void)_pageRightButtonTouchUpInside:(id)arg1;
- (void)_updateNowPlayingVisibility;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (void)knobPressed:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (int)presentationCountForPageViewController:(id)arg1;
- (int)presentationIndexForPageViewController:(id)arg1;
- (void)updatePageArrows;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
