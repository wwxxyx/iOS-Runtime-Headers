/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3AggregateQuery, ML3MusicLibrary, ML3Predicate, NSArray, NSString;

@interface ML3Query : NSObject <NSCoding> {
    Class _entityClass;
    BOOL _filtersOnDynamicProperties;
    BOOL _ignoreSystemFilterPredicates;
    ML3MusicLibrary *_library;
    ML3AggregateQuery *_nonDirectAggregateQuery;
    NSArray *_orderingTerms;
    ML3Predicate *_predicate;
    NSString *_propertyToCount;
    BOOL _usingSections;
}

@property(readonly) long long anyEntityPersistentID;
@property(readonly) unsigned int countOfEntities;
@property(readonly) Class entityClass;
@property(readonly) BOOL filtersOnDynamicProperties;
@property(readonly) BOOL hasEntities;
@property BOOL ignoreSystemFilterPredicates;
@property(readonly) ML3MusicLibrary * library;
@property(readonly) ML3AggregateQuery * nonDirectAggregateQuery;
@property(readonly) NSArray * orderingTerms;
@property(readonly) NSString * persistentIDProperty;
@property(readonly) ML3Predicate * predicate;
@property(readonly) ML3Predicate * predicateIncludingSystemwidePredicates;
@property(readonly) NSString * propertyToCount;
@property(readonly) NSString * sectionProperty;
@property(readonly) NSString * selectCountSQL;
@property(readonly) NSString * selectPersistentIDsSQL;
@property(readonly) BOOL usingSections;

- (void).cxx_destruct;
- (long long)anyEntityPersistentID;
- (unsigned int)countOfDistinctRowsForColumn:(id)arg1;
- (unsigned int)countOfEntities;
- (id)countStatementParameters;
- (BOOL)deleteAllEntitiesFromLibrary;
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2;
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(id)arg3 usingBlock:(id)arg4;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 usingBlock:(id)arg3;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (BOOL)filtersOnDynamicProperties;
- (BOOL)hasEntities;
- (BOOL)hasRowForColumn:(id)arg1;
- (BOOL)ignoreSystemFilterPredicates;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)library;
- (void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(BOOL)arg4 cancelHandler:(id)arg5;
- (id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2;
- (id)nameOrderPropertyForProperty:(id)arg1;
- (id)nonDirectAggregateQuery;
- (id)orderingTerms;
- (id)persistentIDParameters;
- (id)persistentIDProperty;
- (id)predicate;
- (id)predicateIncludingSystemwidePredicates;
- (id)propertyToCount;
- (id)sectionProperty;
- (id)sections;
- (id)sectionsParameters;
- (id)selectCountSQL;
- (id)selectPersistentIDsSQL;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 distinct:(BOOL)arg3;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(BOOL)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 distinct:(BOOL)arg6 limit:(unsigned int)arg7;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(BOOL)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned int)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2;
- (id)selectSectionsSQL;
- (id)selectUnorderedPersistentIDsSQL;
- (void)setIgnoreSystemFilterPredicates:(BOOL)arg1;
- (BOOL)usingSections;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;

@end
