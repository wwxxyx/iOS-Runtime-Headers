/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestInternal, NSURLRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequest : NSObject {
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}

@property(getter=isCancelled,readonly) BOOL cancelled;
@property(readonly) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest;
@property(readonly) AVAssetResourceLoadingDataRequest * dataRequest;
@property(getter=isFinished,readonly) BOOL finished;
@property(copy) NSURLRequest * redirect;
@property(readonly) NSURLRequest * request;
@property(copy) NSURLResponse * response;

- (void)_addFigPlaybackItemListeners;
- (void)_appendToCachedData:(id)arg1;
- (id)_getAndClearCachedData;
- (void)_removeFigPlaybackItemListeners;
- (id)_requestDictionary;
- (id)_resourceLoader;
- (void)_sendDataIncrementally:(id)arg1 data:(id)arg2;
- (void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2;
- (void)_setContentInformationRequest:(id)arg1;
- (void)_setDataRequest:(id)arg1;
- (BOOL)_tryToMarkAsCancelled;
- (id)_weakReference;
- (id)contentInformationRequest;
- (id)dataRequest;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;
- (BOOL)finished;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(id)arg4;
- (id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)redirect;
- (id)request;
- (id)response;
- (id)serializableRepresentation;
- (void)setRedirect:(id)arg1;
- (void)setResponse:(id)arg1;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end
