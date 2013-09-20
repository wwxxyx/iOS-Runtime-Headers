/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, RadioStation, RadioTrack, UIImage;

@interface MPRadioAVItem : MPAVItem {
    UIImage *_cachedArtworkImage;
    BOOL _isBanned;
    BOOL _isHeartbeatInvalid;
    BOOL _isInWishList;
    BOOL _isLiked;
    RadioTrack *_radioTrack;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
}

@property BOOL isBanned;
@property(readonly) BOOL isHeartbeatInvalid;
@property BOOL isInWishList;
@property BOOL isLiked;
@property(retain) RadioStation * station;
@property(readonly) NSString * stationHash;
@property(readonly) long long stationID;
@property(readonly) NSString * stationName;

- (void).cxx_destruct;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (id)_cachedArtworkImage;
- (void)_internalIsBannedDidChangeNotification:(id)arg1;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (void)_internalIsLikedDidChangeNotification:(id)arg1;
- (void)_sendLikeOrBanRequestWithStatus:(int)arg1;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (id)album;
- (id)artist;
- (id)artworkImageData;
- (id)artworkMIMEType;
- (id)artworkTimeMarkers;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (unsigned int)countForQueueFeeder;
- (void)dealloc;
- (id)description;
- (BOOL)hasDataForItemArtwork;
- (unsigned int)hash;
- (id)imageCache;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)initWithRadioTrack:(id)arg1;
- (BOOL)isBanned;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplicitTrack;
- (BOOL)isHeartbeatInvalid;
- (BOOL)isInWishList;
- (BOOL)isLiked;
- (BOOL)isRadioItem;
- (BOOL)isStreamable;
- (void)loadAssetAndPlayerItem;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)persistentID;
- (id)radioTrack;
- (void)reevaluateType;
- (void)setIsBanned:(BOOL)arg1;
- (void)setIsInWishList:(BOOL)arg1;
- (void)setIsLiked:(BOOL)arg1;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (BOOL)supportsAddStation;
- (BOOL)supportsHistory;
- (BOOL)supportsLikeOrBan;
- (BOOL)supportsShare;
- (BOOL)supportsTrackInfo;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (id)urlTimeMarkers;

@end
