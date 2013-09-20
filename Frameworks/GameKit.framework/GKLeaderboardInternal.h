/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKScoreInternal, NSArray, NSDate, NSDictionary, NSString;

@interface GKLeaderboardInternal : GKInternalRepresentation {
    unsigned short _friendRank;
    unsigned short _friendRankCount;
    NSString *_groupIdentifier;
    NSDictionary *_icons;
    NSString *_identifier;
    NSDate *_lastSubmittedDate;
    NSString *_leaderboardSetIdentifier;
    unsigned int _maxRank;
    unsigned int _overallRank;
    unsigned int _overallRankCount;
    GKScoreInternal *_playerScore;
    NSArray *_scores;
    NSString *_title;
}

@property(retain) NSString * category;
@property unsigned short friendRank;
@property unsigned short friendRankCount;
@property(retain) NSString * groupIdentifier;
@property(retain) NSDictionary * icons;
@property(retain) NSString * identifier;
@property(retain) NSDate * lastSubmittedDate;
@property(retain) NSString * leaderboardSetIdentifier;
@property(retain) NSString * localizedTitle;
@property(readonly) unsigned int maxRange;
@property unsigned int maxRank;
@property unsigned int overallRank;
@property unsigned int overallRankCount;
@property(retain) GKScoreInternal * playerScore;
@property(retain) NSArray * scores;
@property(retain) NSString * title;

+ (id)secureCodedPropertyKeys;

- (id)category;
- (void)dealloc;
- (unsigned short)friendRank;
- (unsigned short)friendRankCount;
- (id)groupIdentifier;
- (unsigned int)hash;
- (id)icons;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)lastSubmittedDate;
- (id)leaderboardSetIdentifier;
- (id)localizedTitle;
- (unsigned int)maxRange;
- (unsigned int)maxRank;
- (unsigned int)overallRank;
- (unsigned int)overallRankCount;
- (id)playerScore;
- (id)scores;
- (void)setCategory:(id)arg1;
- (void)setFriendRank:(unsigned short)arg1;
- (void)setFriendRankCount:(unsigned short)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSubmittedDate:(id)arg1;
- (void)setLeaderboardSetIdentifier:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setOverallRank:(unsigned int)arg1;
- (void)setOverallRankCount:(unsigned int)arg1;
- (void)setPlayerScore:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
