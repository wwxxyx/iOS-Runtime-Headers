/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3MusicLibrarySchema_AddedColumn : NSObject {
    NSString *_columnName;
    NSString *_foreignColumnName;
    NSString *_foreignTableName;
    NSString *_joinColumnName;
}

@property(readonly) NSString * columnName;
@property(readonly) NSString * foreignColumnName;
@property(readonly) NSString * foreignTableName;
@property(readonly) NSString * joinColumnName;

- (void).cxx_destruct;
- (id)columnName;
- (id)foreignColumnName;
- (id)foreignTableName;
- (BOOL)importFromForeignTable;
- (id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4;
- (id)joinColumnName;

@end
