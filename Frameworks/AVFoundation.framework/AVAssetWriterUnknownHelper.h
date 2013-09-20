/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
    short _alternateGroupID;
}

- (BOOL)_canAddInput:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2;
- (void)addInput:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (void)cancelWriting;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (void)startWriting;
- (int)status;

@end
