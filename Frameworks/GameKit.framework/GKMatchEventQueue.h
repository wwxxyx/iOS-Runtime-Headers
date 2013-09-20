/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject {
    NSMutableDictionary *_connectionInfo;
    BOOL _counted;
    int _deferedPlayerState;
    NSMutableArray *_events;
    BOOL _hasInitRelayInfo;
    BOOL _hasUpdateRelayInfo;
    BOOL _okToSend;
    int _playerState;
    BOOL _relayInitiated;
    unsigned int _sequenceNumber;
}

@property(retain) NSMutableDictionary * connectionInfo;
@property BOOL counted;
@property int deferedPlayerState;
@property(retain) NSMutableArray * events;
@property BOOL hasInitRelayInfo;
@property BOOL hasUpdateRelayInfo;
@property BOOL okToSend;
@property int playerState;
@property BOOL relayInitiated;
@property unsigned int sequenceNumber;

- (id)connectionInfo;
- (BOOL)counted;
- (void)dealloc;
- (int)deferedPlayerState;
- (id)events;
- (BOOL)hasInitRelayInfo;
- (BOOL)hasUpdateRelayInfo;
- (id)init;
- (BOOL)okToSend;
- (int)playerState;
- (BOOL)relayInitiated;
- (unsigned int)sequenceNumber;
- (void)setConnectionInfo:(id)arg1;
- (void)setCounted:(BOOL)arg1;
- (void)setDeferedPlayerState:(int)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasInitRelayInfo:(BOOL)arg1;
- (void)setHasUpdateRelayInfo:(BOOL)arg1;
- (void)setOkToSend:(BOOL)arg1;
- (void)setPlayerState:(int)arg1;
- (void)setRelayInitiated:(BOOL)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;

@end
