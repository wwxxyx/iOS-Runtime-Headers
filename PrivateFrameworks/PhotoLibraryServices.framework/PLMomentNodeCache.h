/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableArray, NSMutableDictionary;

@interface PLMomentNodeCache : NSObject {
    struct sqlite3 { } *__momentsDatabase;
    NSMutableDictionary *__nodesByObjectID;
    NSMutableArray *__nodesByRowID;
    struct sqlite3_stmt { } *__spatialInsertStatement;
    struct sqlite3_stmt { } *__spatialSelectStatement;
    struct sqlite3_stmt { } *__temporalInsertStatement;
    struct sqlite3_stmt { } *__temporalSelectStatement;
}

@property(readonly) struct sqlite3 { }* _momentsDatabase;
@property(readonly) NSMutableDictionary * _nodesByObjectID;
@property(readonly) NSMutableArray * _nodesByRowID;
@property(readonly) struct sqlite3_stmt { }* _spatialInsertStatement;
@property(readonly) struct sqlite3_stmt { }* _spatialSelectStatement;
@property(readonly) struct sqlite3_stmt { }* _temporalInsertStatement;
@property(readonly) struct sqlite3_stmt { }* _temporalSelectStatement;

- (struct sqlite3 { }*)_momentsDatabase;
- (id)_nodesByObjectID;
- (id)_nodesByRowID;
- (struct sqlite3_stmt { }*)_spatialInsertStatement;
- (struct sqlite3_stmt { }*)_spatialSelectStatement;
- (struct sqlite3_stmt { }*)_temporalInsertStatement;
- (struct sqlite3_stmt { }*)_temporalSelectStatement;
- (void)closeMomentsDatabase;
- (unsigned int)countOfTemporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;
- (id)databaseURL;
- (void)dealloc;
- (void)executePreparedStatement:(struct sqlite3_stmt { }*)arg1 withStatementBlock:(id)arg2;
- (id)init;
- (void)insertNode:(id)arg1;
- (id)nodeForAsset:(id)arg1;
- (id)nodeWithPartialAssetDictionary:(id)arg1;
- (void)openMomentsDatabase;
- (void)performBatch:(id)arg1;
- (void)prepareAndExecuteStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)prepareStatement:(const char *)arg1;
- (void)setupMomentsDatabase;
- (id)spatialNeighborsOfNodes:(id)arg1 forSigma:(double)arg2;
- (id)temporalNeighborsOfNode:(id)arg1 forTheta:(double)arg2;

@end
