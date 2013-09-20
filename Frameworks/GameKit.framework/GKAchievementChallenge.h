/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge {
    GKAchievement *_achievement;
}

@property(retain) GKAchievement * achievement;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (id)achievement;
- (id)alertGoalText;
- (id)composeGoalText;
- (void)dealloc;
- (id)description;
- (id)detailGoalText;
- (id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2;
- (BOOL)detailsLoaded;
- (id)iconSource;
- (id)iconURLString;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)listGoalText;
- (id)listTitleText;
- (void)loadDetailsWithCompletionHandler:(id)arg1;
- (void)setAchievement:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)smallIconSource;
- (id)smallIconURLString;
- (id)titleText;

@end
