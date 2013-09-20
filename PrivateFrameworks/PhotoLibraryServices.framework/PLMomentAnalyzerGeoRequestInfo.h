/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class GEOBatchReverseGeocodeRequest, NSArray, NSManagedObjectID, NSString, PLRevGeoLocationInfo;

@interface PLMomentAnalyzerGeoRequestInfo : NSObject {
    NSArray *_assetIds;
    NSArray *_extraAssetIds;
    NSArray *_extraLocations;
    unsigned int _failureCount;
    NSManagedObjectID *_momentId;
    NSString *_momentUuid;
    unsigned int _requestType;
    PLRevGeoLocationInfo *_revGeoLocationInfo;
    GEOBatchReverseGeocodeRequest *_reverseGeocodeRequest;
}

@property(copy) NSArray * assetIds;
@property(copy) NSArray * extraAssetIds;
@property(getter=hasExtraData,readonly) BOOL extraData;
@property(copy) NSArray * extraLocations;
@property unsigned int failureCount;
@property(retain) NSManagedObjectID * momentId;
@property(copy) NSString * momentUuid;
@property unsigned int requestType;
@property(retain) PLRevGeoLocationInfo * revGeoLocationInfo;
@property(retain) GEOBatchReverseGeocodeRequest * reverseGeocodeRequest;

- (id)assetIds;
- (void)dealloc;
- (id)description;
- (id)extraAssetIds;
- (id)extraLocations;
- (unsigned int)failureCount;
- (BOOL)hasExtraData;
- (unsigned int)hash;
- (id)initWithRequestType:(unsigned int)arg1 momentId:(id)arg2 momentUuid:(id)arg3 assetIds:(id)arg4 reverseGeocodeRequest:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)momentId;
- (id)momentUuid;
- (unsigned int)requestType;
- (id)revGeoLocationInfo;
- (id)reverseGeocodeRequest;
- (void)setAssetIds:(id)arg1;
- (void)setExtraAssetIds:(id)arg1;
- (void)setExtraLocations:(id)arg1;
- (void)setFailureCount:(unsigned int)arg1;
- (void)setMomentId:(id)arg1;
- (void)setMomentUuid:(id)arg1;
- (void)setRequestType:(unsigned int)arg1;
- (void)setRevGeoLocationInfo:(id)arg1;
- (void)setReverseGeocodeRequest:(id)arg1;

@end
