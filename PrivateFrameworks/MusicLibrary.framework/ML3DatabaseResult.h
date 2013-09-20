/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseStatement, NSDictionary;

@interface ML3DatabaseResult : NSObject {
    NSDictionary *_columnNameIndexMap;
    ML3DatabaseStatement *_statement;
}

@property(readonly) ML3DatabaseStatement * statement;

- (void).cxx_destruct;
- (id)columnNameIndexMap;
- (void)dealloc;
- (void)enumerateRowsWithBlock:(id)arg1;
- (BOOL)hasAtLeastOneRow;
- (unsigned int)indexForColumnName:(id)arg1;
- (id)init;
- (id)initWithStatement:(id)arg1;
- (long long)int64ValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (id)rows;
- (id)statement;
- (id)stringValueForFirstRowAndColumn;

@end
