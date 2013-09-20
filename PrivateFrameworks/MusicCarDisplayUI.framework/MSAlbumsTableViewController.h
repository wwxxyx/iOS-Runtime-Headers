/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MSAlbumsTableViewController : MSSectionedTableViewController <AFContextProvider> {
    BOOL _shouldShowArtistSubtitle;
}

@property BOOL shouldShowArtistSubtitle;

- (id)_representedCollectionForQuery;
- (BOOL)allowContextProvider:(id)arg1;
- (void)dealloc;
- (id)getCurrentContext;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (void)setShouldShowArtistSubtitle:(BOOL)arg1;
- (BOOL)shouldShowArtistSubtitle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
