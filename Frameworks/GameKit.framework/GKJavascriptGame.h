/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGame, NSNumber, NSString;

@interface GKJavascriptGame : NSObject {
    GKGame *_game;
}

@property(readonly) NSNumber * adamId;
@property(readonly) NSString * bundleId;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSNumber * externalVersion;
@property(retain) GKGame * game;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;

- (id)adamId;
- (id)attributeKeys;
- (id)bundleId;
- (id)bundleVersion;
- (void)dealloc;
- (id)externalVersion;
- (id)game;
- (id)initWithGame:(id)arg1;
- (void)setGame:(id)arg1;

@end
