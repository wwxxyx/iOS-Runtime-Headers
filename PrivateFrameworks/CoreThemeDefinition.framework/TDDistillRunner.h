/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSString, NSURL, TDDistiller, TDLogger;

@interface TDDistillRunner : NSObject {
    int _assetStoreVersionNumber;
    NSString *_assetStoreVersionString;
    NSURL *_carScratchURL;
    TDDistiller *_distiller;
    TDLogger *_logger;
    NSURL *_outputURL;
}

@property int assetStoreVersionNumber;
@property(copy) NSString * assetStoreVersionString;
@property(retain) TDLogger * logger;
@property(copy) NSURL * outputURL;

- (BOOL)_isDistillUnnecessaryForDocument:(id)arg1;
- (void)_moveScratchToOutputPath;
- (void)_removeScratchPath;
- (int)assetStoreVersionNumber;
- (id)assetStoreVersionString;
- (id)carScratchURL;
- (void)dealloc;
- (id)init;
- (id)logger;
- (id)outputURL;
- (BOOL)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(BOOL)arg3 forceDistill:(BOOL)arg4;
- (void)setAssetStoreVersionNumber:(int)arg1;
- (void)setAssetStoreVersionString:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setOutputURL:(id)arg1;

@end
