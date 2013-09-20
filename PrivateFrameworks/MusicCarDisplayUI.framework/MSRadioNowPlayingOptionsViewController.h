/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class <MSCarDisplayServiceProvider>, MPAVController, MPRadioAVItem, NSString, RadioStation, UIButton, UIImage, UILabel, UITableView;

@interface MSRadioNowPlayingOptionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIImage *_albumImage;
    UIButton *_backButton;
    NSString *_headerText;
    MPRadioAVItem *_nowPlayingItem;
    MPAVController *_player;
    <MSCarDisplayServiceProvider> *_serviceProvider;
    RadioStation *_station;
    UITableView *_tableView;
    UILabel *_titleLabel;
}

@property(retain) UIImage * albumImage;
@property(retain) UITableView * tableView;

- (void).cxx_destruct;
- (void)_backButtonTouchUpInside:(id)arg1;
- (id)albumImage;
- (id)initWithItem:(id)arg1 headerText:(id)arg2 player:(id)arg3 serviceProvider:(id)arg4;
- (void)knobBackPressed:(id)arg1;
- (void)loadView;
- (void)setAlbumImage:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
