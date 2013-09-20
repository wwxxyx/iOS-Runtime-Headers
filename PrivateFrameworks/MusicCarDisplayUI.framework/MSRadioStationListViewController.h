/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class NSArray, NSMutableDictionary;

@interface MSRadioStationListViewController : MSTableViewController {
    NSMutableDictionary *_stationArtworkRequests;
    NSArray *_stations;
}

@property(retain) NSArray * stations;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (void)setStations:(id)arg1;
- (id)stations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
