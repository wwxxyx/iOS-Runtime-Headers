/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORegionalResourceTileData, NSMutableArray;

@interface _GEORegionalResourcesTileLoader : NSObject {
    BOOL _canceled;
    id _errorHandler;
    id _finishedHandler;
    NSMutableArray *_pendingDownloads;
    GEORegionalResourceTileData *_tile;
}

- (void)_addDownloadForName:(id)arg1 ofType:(int)arg2 baseURLString:(id)arg3 expectedChecksum:(id)arg4;
- (id)_destinationPathForResource:(id)arg1;
- (void)_loadNextResource;
- (BOOL)_loadRegionalResourceFromFilesystemIfPossible:(id)arg1 resourceChecksum:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (void)loadResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 finished:(id)arg2 error:(id)arg3;

@end
