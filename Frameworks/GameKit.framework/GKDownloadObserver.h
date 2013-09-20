/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class SSDownloadManager;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {
    SSDownloadManager *_downloadManager;
}

@property(retain) SSDownloadManager * downloadManager;

+ (id)sharedObserver;

- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)downloadManager;
- (id)init;
- (BOOL)isDownloadingGame:(id)arg1;
- (void)setDownloadManager:(id)arg1;

@end
