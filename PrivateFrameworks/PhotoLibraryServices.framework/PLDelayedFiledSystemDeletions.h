/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject {
    NSMutableArray *_deletionInfos;
}

+ (void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2;
+ (id)deletionsFromChangeHubEvent:(id)arg1;
+ (id)filesystemDeletionQueue;
+ (void)waitForAllDelayedDeletionsToFinish;

- (void)addFilesystemDeletionInfo:(id)arg1;
- (void)appendToXPCMessage:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(id)arg2;
- (id)initWithFilesystemDeletionInfos:(id)arg1;

@end
