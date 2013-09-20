/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSObject<OS_dispatch_queue>, NSURL, TSPDocumentResourceCache, TSUDownloadManager;

@interface TSPDocumentResourceManager : NSObject {
    NSURL *_appDocumentResourcesMetadataURL;
    NSURL *_appDocumentResourcesURL;
    TSPDocumentResourceCache *_cache;
    NSDictionary *_documentResourcesConfiguration;
    NSObject<OS_dispatch_queue> *_documentResourcesConfigurationQueue;
    long _documentResourcesConfigurationToken;
    TSUDownloadManager *_downloadManager;
}

@property(readonly) TSPDocumentResourceCache * cache;
@property(readonly) TSUDownloadManager * downloadManager;

+ (id)appDocumentResourcesMetadataURL;
+ (id)appDocumentResourcesURL;
+ (void)setAppDocumentResourcesMetadataURL:(id)arg1;
+ (void)setAppDocumentResourcesURL:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)URLForAppDocumentResourceWithDigestString:(id)arg1 extension:(id)arg2;
- (id)URLForCachedDocumentResourceWithDigestString:(id)arg1;
- (id)applicationDataStorageForInfo:(id)arg1 isValidated:(BOOL)arg2;
- (id)cache;
- (id)cachedDocumentResourceDataStorageForInfo:(id)arg1 isValidated:(BOOL)arg2;
- (void)clearCache;
- (id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 infoToDownload:(id*)arg4;
- (id)documentResourcesConfiguration;
- (id)downloadManager;
- (id)findDocumentResourceUsingDigestString:(id)arg1 locator:(id)arg2;
- (id)init;
- (id)initWithAppDocumentResourcesURL:(id)arg1 appDocumentResourcesMetadataURL:(id)arg2 cache:(id)arg3 downloadManager:(id)arg4;
- (id)newDataProviderForContext:(id)arg1;

@end
