/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator;

@interface PFUbiquityPeerRangeReservationContext : NSObject {
    NSMutableDictionary *_globalIDToLocalURI;
    NSArray *_globalObjectIDs;
    NSManagedObjectContext *_moc;
    int _numRangesToReserve;
    NSMutableDictionary *_peerEntityNameRangeStartSet;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    NSMutableDictionary *_storeNameToFetchedMetadata;
    NSMutableArray *_unresolvedGlobalObjectIDs;
}

@property(readonly) NSArray * globalObjectIDs;
@property(readonly) NSManagedObjectContext * moc;
@property(readonly) int numRangesToReserve;
@property(readonly) NSPersistentStoreCoordinator * psc;
@property(readonly) NSPersistentStore * store;

- (id)createLocalIDStringForStoreUUID:(id)arg1 entityName:(id)arg2 andPrimaryKeyString:(id)arg3;
- (BOOL)createNewPeerRangesWithCache:(id)arg1 Error:(id*)arg2;
- (void)dealloc;
- (id)globalObjectIDs;
- (id)init;
- (id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2;
- (id)moc;
- (int)numRangesToReserve;
- (void)prepareForRangeReservationWithRangeStart:(id)arg1 andGlobalID:(id)arg2 andEntityName:(id)arg3;
- (id)psc;
- (id)store;

@end
