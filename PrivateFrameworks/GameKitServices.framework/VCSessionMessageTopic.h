/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface VCSessionMessageTopic : NSObject {
    NSArray *associatedStrings;
    struct tagHANDLE { int x1; } *handle;
    NSObject<OS_dispatch_queue> *inMessageQueue;
    BOOL isSendingEnabled;
    NSString *lastMessage;
    int latestOutgoingMessageIndex;
    int latestReceivedTopicMessageNumber;
    NSObject<OS_dispatch_queue> *outMessageQueue;
    unsigned long p2pID;
    id receiveBlock;
    BOOL shouldEncodeTopicKeyInMessage;
    NSString *topicKey;
    NSString *topicPrefix;
}

@property(setter=setIsSendingEnabled:) BOOL isSendingEnabled;
@property(readonly) NSString * topicKey;

- (void)dealloc;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 receiveHandler:(id)arg3;
- (BOOL)isSendingEnabled;
- (BOOL)isStringAssociated:(id)arg1;
- (void)passMessage:(id)arg1 sequence:(int)arg2;
- (void)sendMessage:(id)arg1 withSequence:(int)arg2 numRetries:(int)arg3;
- (void)sendMessage:(id)arg1;
- (void)setIsSendingEnabled:(BOOL)arg1;
- (void)setP2PID:(unsigned long)arg1;
- (id)topicKey;

@end
