/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKSyncKeyValuePair, NSCopying> {
    double _bookmarkTime;
    BOOL _hasBeenPlayed;
    NSString *_itemIdentifier;
    unsigned int _playCount;
    double _timestamp;
}

@property double bookmarkTime;
@property BOOL hasBeenPlayed;
@property(copy) NSString * itemIdentifier;
@property unsigned int playCount;
@property double timestamp;

+ (id)_testableMetadataItem_1;
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(BOOL)arg3;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;

- (void).cxx_destruct;
- (double)bookmarkTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)hasBeenPlayed;
- (unsigned int)hash;
- (id)init;
- (id)initAsTestableItem;
- (BOOL)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)keyValueStorePayload;
- (id)kvsKey;
- (id)kvsPayload;
- (id)kvsValueDescription;
- (unsigned int)playCount;
- (void)setBookmarkTime:(double)arg1;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setPlayCount:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
