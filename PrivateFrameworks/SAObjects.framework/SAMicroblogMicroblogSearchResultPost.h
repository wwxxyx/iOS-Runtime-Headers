/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDate, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase {
}

@property(copy) NSDate * creationTime;
@property(retain) SADecoratedString * decoratedContent;
@property(copy) NSArray * embeddedHashtags;
@property(copy) NSArray * embeddedImages;
@property(copy) NSArray * embeddedLinks;
@property(copy) NSArray * embeddedMentions;
@property int favoritesCount;
@property(copy) NSString * location;
@property(retain) SAUIAppPunchOut * punchOut;
@property(retain) SAMicroblogTwitterPostAuthor * retweetAuthor;
@property int retweetCount;
@property(copy) NSURL * webAddress;

+ (id)microblogSearchResultPost;
+ (id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2;

- (id)creationTime;
- (id)decoratedContent;
- (id)embeddedHashtags;
- (id)embeddedImages;
- (id)embeddedLinks;
- (id)embeddedMentions;
- (id)encodedClassName;
- (int)favoritesCount;
- (id)groupIdentifier;
- (id)location;
- (id)punchOut;
- (id)retweetAuthor;
- (int)retweetCount;
- (void)setCreationTime:(id)arg1;
- (void)setDecoratedContent:(id)arg1;
- (void)setEmbeddedHashtags:(id)arg1;
- (void)setEmbeddedImages:(id)arg1;
- (void)setEmbeddedLinks:(id)arg1;
- (void)setEmbeddedMentions:(id)arg1;
- (void)setFavoritesCount:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setRetweetAuthor:(id)arg1;
- (void)setRetweetCount:(int)arg1;
- (void)setWebAddress:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)webAddress;

@end
