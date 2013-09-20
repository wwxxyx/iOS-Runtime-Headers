/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, NSCache;

@interface MPMediaQueryNowPlayingItem : MPAVItem {
    NSCache *_cache;
    MPMediaItem *_mediaItem;
}

@property(readonly) MPMediaItem * mediaItem;

+ (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1 forQueuedItems:(id)arg2 currentQuery:(id)arg3;
+ (void)setShouldAlwaysAirplayFromCloud:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (id)_chapterTitleForTime:(double)arg1;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (id)_newTimeMarkersForChapterType:(int)arg1;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(BOOL)arg2;
- (id)album;
- (id)albumArtist;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (BOOL)allowsEQ;
- (id)artist;
- (id)artworkImageData;
- (id)artworkMIMEType;
- (id)artworkTimeMarkers;
- (BOOL)canSeedGenius;
- (id)chapterTimeMarkers;
- (id)composer;
- (int)customAVEQPreset;
- (id)description;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)displayableText;
- (double)durationFromExternalMetadata;
- (id)genre;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)hasDataForItemArtwork;
- (id)imageCache;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)initWithMediaItem:(id)arg1;
- (BOOL)isAssetURLValid;
- (BOOL)isExplicitTrack;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isStreamable;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned long long)persistentID;
- (double)playbackCheckpointCurrentTime;
- (void)reevaluateType;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (BOOL)supportsAddStation;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;

@end
