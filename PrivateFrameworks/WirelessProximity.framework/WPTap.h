/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@class <WPTapDelegate>, XPCClient;

@interface WPTap : NSObject <XPCClientDelegate> {
    <WPTapDelegate> *_delegate;
    int _state;
    XPCClient *_xpcClient;
}

@property(readonly) int state;

- (void).cxx_destruct;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)messageArrived:(id)arg1;
- (void)startWirelessTouchClient:(id)arg1 withUUID:(id)arg2 withTransport:(unsigned char)arg3;
- (void)startWirelessTouchServer:(id)arg1 withUUID:(id)arg2 allowTransport:(unsigned char)arg3;
- (int)state;
- (void)stopWirelessTouchClient;
- (void)stopWirelessTouchServer;

@end
