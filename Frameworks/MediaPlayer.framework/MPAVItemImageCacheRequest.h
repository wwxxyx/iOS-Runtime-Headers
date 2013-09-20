/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem;

@interface MPAVItemImageCacheRequest : MPImageCacheRequest {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _imageTime;
    MPAVItem *_item;
}

@property(readonly) MPAVItem * AVItem;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } imageTime;

- (void).cxx_destruct;
- (id)AVItem;
- (id)copyRawImageReturningError:(id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })imageTime;
- (id)init;
- (id)initWithAVItem:(id)arg1 imageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
