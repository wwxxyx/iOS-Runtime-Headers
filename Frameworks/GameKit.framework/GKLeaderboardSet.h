/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKLeaderboardSetInternal, NSArray, NSString;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding> {
    GKLeaderboardSetInternal *_internal;
}

@property(readonly) NSString * groupIdentifier;
@property(copy) NSString * identifier;
@property(retain) GKLeaderboardSetInternal * internal;
@property(readonly) NSArray * leaderboardIdentifiers;
@property(copy) NSString * title;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadLeaderboardSetsWithCompletionHandler:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(id)arg3;
- (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadLeaderboardsWithCompletionHandler:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)miniImageURL;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
