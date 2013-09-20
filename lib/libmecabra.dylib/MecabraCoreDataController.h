/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSEntityDescription, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface MecabraCoreDataController : NSObject {
    NSEntityDescription *_entityDescription;
    NSURL *_localInfoPlistURL;
    NSURL *_localStoreURL;
    NSURL *_localURL;
    NSString *_localURLLastPartOfName;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSMutableDictionary *_propertyDictionary;
    NSURL *_storeURL;
    NSArray *_storedElementsForMerge;
    NSString *_type;
}

@property(readonly) NSEntityDescription * entityDescription;
@property(readonly) NSURL * localInfoPlistURL;
@property(retain) NSURL * localStoreURL;
@property(retain) NSURL * localURL;
@property(retain) NSManagedObjectContext * managedObjectContext;
@property(retain) NSManagedObjectModel * managedObjectModel;
@property(retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;
@property(retain) NSMutableDictionary * propertyDictionary;
@property(retain) NSURL * storeURL;
@property(retain) NSArray * storedElementsForMerge;
@property(retain) NSString * type;

+ (void)resetDatabaseWithType:(id)arg1 URL:(id)arg2;
+ (id)sharedDictionaryProperties;

- (void)addEntry:(id)arg1;
- (unsigned int)addEntryAndSave:(id)arg1;
- (void)addEntryWithoutSaving:(id)arg1;
- (void)clearStoredMergeEntries;
- (id)copyUbiquityTokenInDefaults;
- (void)databaseDidChangeStore:(id)arg1;
- (id)databaseName;
- (id)databasePropertyForKey:(id)arg1;
- (void)databaseSynced:(id)arg1;
- (void)dealloc;
- (void)deleteAllElements;
- (void)deleteAllMatchingEntries:(id)arg1;
- (void)deleteEntry:(id)arg1;
- (BOOL)dictionaryEntryHasAllRequiredKeys:(id)arg1;
- (id)dictionaryValuesFromManagedObjects:(id)arg1;
- (id)entityDescription;
- (id)entityDescriptionForContext:(id)arg1;
- (id)entriesToMerge;
- (void)flushDatabaseProperties;
- (id)initWithType:(id)arg1 URL:(id)arg2;
- (id)localInfoPlistURL;
- (id)localStoreURL;
- (id)localURL;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3;
- (id)persistentStoreCoordinator;
- (void)prepareURLForDatabaseFile:(id)arg1;
- (id)propertyDictionary;
- (id)propertyDictionary;
- (void)refreshDatabase;
- (id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned int)arg4 identifierKey:(id)arg5;
- (void)save;
- (id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3;
- (id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2;
- (id)searchResultsWithValueDictionary:(id)arg1;
- (void)sendRemoteNotification;
- (void)setDatabaseProperty:(id)arg1 forKey:(id)arg2;
- (void)setLocalStoreURL:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setManagedObjectModel:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPropertyDictionary:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setStoredElementsForMerge:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUbiquityTokenInDefaults;
- (void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3;
- (id)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2;
- (BOOL)shouldSyncDatabase;
- (id)storeURL;
- (id)storedElementsForMerge;
- (void)tearDownDatabase;
- (id)type;
- (id)ubiquityTokenLookupKey;

@end
