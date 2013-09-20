/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKScoreInternal, NSDate, NSString;

@interface GKGameRecordInternal : GKGameInternal {
    short _achievementPoints;
    unsigned short _achievements;
    unsigned short _friendRank;
    NSDate *_lastPlayedDate;
    unsigned short _maxFriendRank;
    unsigned int _maxRank;
    NSDate *_purchaseDate;
    unsigned int _rank;
    GKScoreInternal *_score;
}

@property short achievementPoints;
@property unsigned short achievements;
@property(retain) NSString * defaultLeaderboardIdentifier;
@property unsigned int flags;
@property unsigned short friendRank;
@property(retain) NSDate * lastPlayedDate;
@property unsigned short maxFriendRank;
@property unsigned int maxRank;
@property(retain) NSDate * purchaseDate;
@property unsigned int rank;
@property(retain) GKScoreInternal * score;

+ (id)gameRecordForGame:(id)arg1;
+ (id)secureCodedPropertyKeys;

- (short)achievementPoints;
- (unsigned short)achievements;
- (void)dealloc;
- (unsigned short)friendRank;
- (id)lastPlayedDate;
- (unsigned short)maxFriendRank;
- (unsigned int)maxRank;
- (id)purchaseDate;
- (unsigned int)rank;
- (id)score;
- (void)setAchievementPoints:(short)arg1;
- (void)setAchievements:(unsigned short)arg1;
- (void)setFriendRank:(unsigned short)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setMaxFriendRank:(unsigned short)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setScore:(id)arg1;
- (void)updateWithGame:(id)arg1;

@end
