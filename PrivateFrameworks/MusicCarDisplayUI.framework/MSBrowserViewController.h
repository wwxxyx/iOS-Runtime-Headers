/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class <MSCarDisplayServiceProvider>, MPAVController, MSNowPlayingButton, MSTableViewController, NSArray, UITabBarController;

@interface MSBrowserViewController : UINavigationController <UITableViewDelegate, UITableViewDataSource, UITabBarControllerDelegate> {
    NSArray *_availableViewControllers;
    MSTableViewController *_knobMainViewController;
    MSNowPlayingButton *_nowPlayingButton;
    MPAVController *_player;
    <MSCarDisplayServiceProvider> *_serviceProvider;
    BOOL _showingNowPlayingRow;
    UITabBarController *_tabBarController;
    NSArray *_tabIdentifiers;
}

@property(retain) MPAVController * player;
@property <MSCarDisplayServiceProvider> * serviceProvider;

- (void).cxx_destruct;
- (BOOL)_isNowPlayingAvailable;
- (void)_itemChanged:(id)arg1;
- (void)_mediaLibraryDidChange:(id)arg1;
- (void)_nowPlayingButtonTouchUpInside:(id)arg1;
- (void)_updateNowPlayingVisibility;
- (void)dealloc;
- (id)initWithTabs:(id)arg1;
- (id)nowPlayingButton;
- (id)player;
- (void)pushNowPlaying:(BOOL)arg1;
- (void)refreshNavigationPath;
- (void)reloadWithTabs:(id)arg1;
- (id)serviceProvider;
- (void)setPlayer:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;

@end
