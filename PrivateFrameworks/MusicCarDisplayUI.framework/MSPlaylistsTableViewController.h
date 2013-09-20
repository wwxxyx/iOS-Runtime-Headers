/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class NSArray, NSNumberFormatter;

@interface MSPlaylistsTableViewController : MSTableViewController {
    NSNumberFormatter *_formatter;
    NSArray *_sortedPlaylists;
}

@property(retain) NSArray * sortedPlaylists;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (void)setSortedPlaylists:(id)arg1;
- (id)sortedPlaylists;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)viewControllerForRowAtIndexPath:(id)arg1;

@end
