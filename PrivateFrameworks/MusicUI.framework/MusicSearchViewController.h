/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class <MPHSearchViewControllerDelegate>, NSArray, NSDate, NSMutableArray, NSString, NSTimer, SKUICircleProgressIndicator, UIButton, UILabel, UITableView, UITapGestureRecognizer, UIView;

@interface MusicSearchViewController : UIViewController <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    SKUICircleProgressIndicator *_activityIndicatorView;
    BOOL _canShowContinueSearch;
    UIButton *_continueSearchButton;
    <MPHSearchViewControllerDelegate> *_delegate;
    NSDate *_lastSearchDate;
    UILabel *_loadingLabel;
    UILabel *_noResultsLabel;
    NSMutableArray *_nonEmptySearchDataSources;
    NSString *_pendingSearch;
    NSTimer *_pendingSearchTimer;
    NSArray *_searchDataSources;
    NSString *_searchTerm;
    UITableView *_tableView;
    UIView *_tableViewBackgroundView;
    UIView *_tableViewDimmingView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property <MPHSearchViewControllerDelegate> * delegate;
@property(retain) NSDate * lastSearchDate;
@property(copy) NSString * pendingSearch;
@property(retain) NSTimer * pendingSearchTimer;
@property(readonly) NSString * searchTerm;
@property(readonly) UITableView * tableView;

- (void).cxx_destruct;
- (void)_continueSearchAction:(id)arg1;
- (BOOL)_isSearchInProgress;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_musicDefaultsDidChangeNotification:(id)arg1;
- (id)_newSearchDataSources;
- (void)_performDefaultActionForSearchDataSource:(id)arg1 entity:(id)arg2;
- (void)_reloadData;
- (Class)_searchCellConfigurationClassForSearchDataSource:(id)arg1;
- (void)_searchDataSourceDidInvalidateNotification:(id)arg1;
- (id)_searchSectionTitleForSearchDataSource:(id)arg1;
- (void)_startPendingSearch;
- (void)_storeRestrictionsDidChangeNotification:(id)arg1;
- (void)_tapGestureRecognizerAction:(id)arg1;
- (void)_updateResultsForSearchTerm:(id)arg1;
- (void)_updateVisibleHeadersState;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)lastSearchDate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)pendingSearch;
- (id)pendingSearchTimer;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (id)searchTerm;
- (void)setDelegate:(id)arg1;
- (void)setLastSearchDate:(id)arg1;
- (void)setPendingSearch:(id)arg1;
- (void)setPendingSearchTimer:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (id)tableView;
- (void)tableViewDidFinishReload:(id)arg1;

@end
