/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKInviteInternal, GKPlayer, NSData, NSString;

@interface GKInvite : NSObject {
    BOOL _cancelled;
    GKInviteInternal *_internal;
    GKPlayer *_invitingPlayer;
}

@property(getter=isCancelled) BOOL cancelled;
@property(getter=isHosted,readonly) BOOL hosted;
@property(retain) GKInviteInternal * internal;
@property(readonly) NSString * inviteID;
@property(readonly) NSString * inviter;
@property(readonly) GKPlayer * invitingPlayer;
@property(readonly) BOOL isNearby;
@property(readonly) NSString * message;
@property(readonly) unsigned int playerAttributes;
@property(readonly) unsigned int playerGroup;
@property(readonly) NSData * sessionToken;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)inviter;
- (id)invitingPlayer;
- (BOOL)isCancelled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHosted;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
