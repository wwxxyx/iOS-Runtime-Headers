/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSOutgoingMessage : APSMessage {
}

@property(getter=isCritical) BOOL critical;
@property unsigned int payloadFormat;
@property unsigned int payloadLength;
@property unsigned int timeout;

- (unsigned int)_effectiveSendTimeout;
- (BOOL)hasTimedOut;
- (BOOL)isCritical;
- (unsigned int)messageID;
- (unsigned int)payloadFormat;
- (unsigned int)payloadLength;
- (int)priority;
- (id)rawTimeoutTime;
- (int)sendInterface;
- (id)sendTimeoutTime;
- (void)setCancelled:(BOOL)arg1;
- (void)setCritical:(BOOL)arg1;
- (void)setMessageID:(unsigned int)arg1;
- (void)setPayloadFormat:(unsigned int)arg1;
- (void)setPayloadLength:(unsigned int)arg1;
- (void)setPriority:(int)arg1;
- (void)setSendInterface:(int)arg1;
- (void)setSent:(BOOL)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (void)setTimeout:(unsigned int)arg1;
- (void)setTimestamp:(id)arg1;
- (unsigned int)timeout;
- (id)timestamp;
- (BOOL)wasCancelled;
- (BOOL)wasSent;

@end
