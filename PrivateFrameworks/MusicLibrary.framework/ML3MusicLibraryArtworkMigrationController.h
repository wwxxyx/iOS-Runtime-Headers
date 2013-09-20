/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary, NSMutableArray, NSString;

@interface ML3MusicLibraryArtworkMigrationController : NSObject {
    NSMutableArray *_artworkConversionCompletionHandlers;
    NSString *_artworkConverterPIDNotifyName;
    int _artworkConverterPIDToken;
    BOOL _isConvertingArtwork;
    ML3MusicLibrary *_library;
}

@property ML3MusicLibrary * library;

+ (id)artworkConversionManifestKeys;
+ (BOOL)automaticDatabaseArtworkConversionEnabled;
+ (void)disableAutomaticDatabaseArtworkConversion;
+ (void)enumerateArtworkConversionFormatPairingsWithBlock:(id)arg1;
+ (BOOL)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)arg1;
+ (void)resetArtworkConversionManifestFormatPairs:(id)arg1 usingConnection:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_appendDeoprphaningWriteBlockToArray:(id)arg1 forCacheID:(id)arg2;
- (void)_atomicClearIsConvertingArtwork;
- (BOOL)_atomicTestAndSetIsConvertingArtworkWithCompletionHandler:(id)arg1;
- (unsigned int)_convertAlbumGridBGRA1xToJPEG1xWithNotificationInterval:(double)arg1;
- (unsigned int)_convertAlbumListJPEGToBGRAWithNotificationInterval:(double)arg1;
- (BOOL)_convertArtworkCacheID:(id)arg1 fromArtworkFormat:(unsigned int)arg2 toArtworkFormat:(unsigned int)arg3 sourceOptions:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (unsigned int)_convertArtworkInManifsetFromArtworkFormat:(unsigned int)arg1 toArtworkFormat:(unsigned int)arg2 deleteOldFormat:(BOOL)arg3 notificationInterval:(double)arg4;
- (unsigned int)_convertLegacyArtworkFromArtworkBlobFilePath:(id)arg1 success:(BOOL*)arg2;
- (unsigned int)_convertOriginalJPEGToFormatID1x:(unsigned int)arg1 formatID2x:(unsigned int)arg2 notificationInterval:(double)arg3;
- (void)_deleteUnnecessaryFormats;
- (void)_deorphanOriginalJPEGArtwork;
- (void)_noteUnnecessaryConversionForDeviceTypeFromArtworkFormat:(unsigned int)arg1 toArtworkFormat:(unsigned int)arg2;
- (void)_performOnGlobalArtworkConversionQueue:(id)arg1;
- (void)convertArtworkFormatsInBackground:(BOOL)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;

@end
