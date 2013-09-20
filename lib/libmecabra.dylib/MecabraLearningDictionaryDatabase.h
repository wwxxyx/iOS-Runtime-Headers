/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSMutableDictionary;

@interface MecabraLearningDictionaryDatabase : MecabraDatabase {
    NSMutableDictionary *_cachedEntries;
    BOOL _dirty;
    unsigned int _lastSeedValue;
    unsigned int _lastUpdateTime;
}

@property(retain) NSMutableDictionary * cachedEntries;
@property BOOL dirty;
@property unsigned int lastSeedValue;
@property unsigned int lastUpdateTime;
@property BOOL sqliteDatabaseMigrated;
@property unsigned int versionNumber;

+ (void)moveInternalDictionariesIfPresentAtURL:(id)arg1 type:(id)arg2;
+ (id)sharedDatabaseForURL:(id)arg1 type:(id)arg2;
+ (id)sharedDatabases;

- (unsigned int)addEntryAndGetIdentifier:(id)arg1;
- (id)allIdentifiers;
- (id)cachedEntries;
- (BOOL)dirty;
- (id)entryForIdentifier:(int)arg1;
- (id)identifiersForEntry:(id)arg1;
- (id)initWithURL:(id)arg1 type:(id)arg2;
- (unsigned int)lastSeedValue;
- (unsigned int)lastUpdateTime;
- (void)rebuildCache;
- (void)refresh;
- (void)removeOldEntriesBasedOnMaxCount:(unsigned int)arg1;
- (void)setCachedEntries:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setLastSeedValue:(unsigned int)arg1;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (void)setSqliteDatabaseMigrated:(BOOL)arg1;
- (id)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2 originalIdentifier:(unsigned int)arg3;
- (void)setVersionNumber:(unsigned int)arg1;
- (BOOL)sqliteDatabaseMigrated;
- (unsigned int)versionNumber;

@end
