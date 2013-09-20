/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSOperationQueue;

@interface RadioImageCache : NSObject {
    NSOperationQueue *_imageRequestQueue;
}

+ (struct __CFURLStorageSession { }*)_newSharedCacheStorageSession;
+ (struct _CFURLCache { }*)_sharedCFURLCache;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_cachedResponseForRequest:(id)arg1;
- (id)_init;
- (void)_removeAllCachedImages;
- (id)_requestForStation:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 isExactSizeMatch:(BOOL*)arg3;
- (id)cachedImageDataForStation:(id)arg1 withExactSize:(struct CGSize { float x1; float x2; })arg2;
- (void)dealloc;
- (id)init;
- (void)loadImageForStation:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 completionHandler:(id)arg3;

@end
