/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKDiscoveryBonjour, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GKDiscoveryManager : NSObject {
    GKDiscoveryBonjour *_bonjour;
    NSString *_deviceID;
    NSMutableDictionary *_peers;
    NSObject<OS_dispatch_queue> *_peersQueue;
    id _playerFoundHandler;
    NSString *_playerID;
    id _playerLostHandler;
    id _receiveDataHandler;
}

@property(retain) GKDiscoveryBonjour * bonjour;
@property(copy) NSString * deviceID;
@property(retain) NSMutableDictionary * peers;
@property(copy) id playerFoundHandler;
@property(copy) NSString * playerID;
@property(copy) id playerLostHandler;
@property(copy) id receiveDataHandler;

+ (id)parseDeviceIDFromServiceName:(id)arg1;

- (void)addInterface:(unsigned int)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3;
- (id)bonjour;
- (void)cleanUpPeersForBrowse;
- (void)connectToSockAddr:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2 forPeer:(id)arg3;
- (void)dealloc;
- (id)deviceID;
- (void)didLosePeer:(id)arg1;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (id)generateDeviceID;
- (id)init;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)localServiceName;
- (void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2;
- (id)peers;
- (id)peersList;
- (id)playerFoundHandler;
- (id)playerID;
- (id)playerLostHandler;
- (void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3;
- (id)receiveDataHandler;
- (void)removeInterface:(unsigned int)arg1 forPeerWithServiceName:(id)arg2;
- (void)resolveForPeer:(id)arg1;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(id)arg4;
- (id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2;
- (void)setBonjour:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setPlayerFoundHandler:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPlayerLostHandler:(id)arg1;
- (void)setReceiveDataHandler:(id)arg1;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;

@end
