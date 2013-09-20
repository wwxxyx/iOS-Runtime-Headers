/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChat, IMAVChatProxy, NSDictionary, NSString;

@interface IMAVChatParticipantProxy : NSObject {
    IMAVChatProxy *_chat;
    NSDictionary *_info;
}

@property(readonly) BOOL _inviteDelivered;
@property(readonly) IMAVChat * avChat;
@property(readonly) NSString * name;

- (BOOL)_inviteDelivered;
- (id)avChat;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;
- (id)name;

@end
