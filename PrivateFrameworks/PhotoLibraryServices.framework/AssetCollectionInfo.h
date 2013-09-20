/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSDictionary, NSNumber, NSString;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {
    NSString *_GUID;
    BOOL _hasVideoAsset;
    NSNumber *_height;
    BOOL _isDeletable;
    BOOL _isMine;
    NSDictionary *_metaData;
    NSString *_personID;
    NSDate *_timestamp;
    NSNumber *_width;
}

@property(readonly) NSString * GUID;
@property(readonly) BOOL hasVideoAsset;
@property(readonly) NSNumber * height;
@property(readonly) BOOL isDeletable;
@property(readonly) BOOL isMine;
@property(readonly) NSDictionary * metaData;
@property(readonly) NSString * personID;
@property(readonly) NSDate * timestamp;
@property(readonly) NSNumber * width;

+ (BOOL)supportsSecureCoding;

- (id)GUID;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasVideoAsset;
- (id)height;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)isMine;
- (id)metaData;
- (id)personID;
- (id)timestamp;
- (id)width;

@end
