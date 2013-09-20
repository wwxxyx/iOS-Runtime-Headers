/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

@property(readonly) long long currentOffset;
@property(readonly) int requestedLength;
@property(readonly) long long requestedOffset;

- (id)_loadingRequest;
- (long long)currentOffset;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(int)arg3 canSupplyIncrementalDataImmediately:(BOOL)arg4;
- (int)requestedLength;
- (long long)requestedOffset;
- (void)respondWithData:(id)arg1;

@end
