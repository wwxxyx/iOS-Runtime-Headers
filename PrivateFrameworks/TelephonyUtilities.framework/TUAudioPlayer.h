/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class <TUAudioPlayerDelegateProtocol>;

@interface TUAudioPlayer : NSObject {
    <TUAudioPlayerDelegateProtocol> *_delegate;
}

@property <TUAudioPlayerDelegateProtocol> * delegate;
@property(readonly) BOOL playingSound;

- (void)dealloc;
- (id)delegate;
- (void)playSelectedSound;
- (void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3;
- (BOOL)playingSound;
- (void)setDelegate:(id)arg1;
- (void)stop;

@end
