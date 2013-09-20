/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class RadioStation;

@interface MPRadioStationImageCacheRequest : MPImageCacheRequest {
    RadioStation *_radioStation;
    BOOL _usePlaceholderAsFallback;
}

@property(readonly) RadioStation * radioStation;
@property BOOL usePlaceholderAsFallback;

- (void).cxx_destruct;
- (BOOL)canRequestSynchronously;
- (id)copyRawImageReturningError:(id*)arg1;
- (id)initWithRadioStation:(id)arg1;
- (id)placeholderImage;
- (id)radioStation;
- (void)setUsePlaceholderAsFallback:(BOOL)arg1;
- (id)uniqueKey;
- (BOOL)usePlaceholderAsFallback;

@end
