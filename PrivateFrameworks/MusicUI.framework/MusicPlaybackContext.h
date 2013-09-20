/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicPlaybackContext : NSObject {
    unsigned int _shuffleType;
}

@property(readonly) int playbackMode;
@property(readonly) unsigned int realShuffleType;
@property unsigned int shuffleType;

+ (Class)queueFeederClass;

- (id)init;
- (int)playbackMode;
- (unsigned int)realShuffleType;
- (void)setShuffleType:(unsigned int)arg1;
- (unsigned int)shuffleType;

@end
