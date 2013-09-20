/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate> {
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_loadRentals;
- (void)_saveRentals;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (id)init;
- (void)removeAllRentalsForDatabaseID:(id)arg1;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

@end
