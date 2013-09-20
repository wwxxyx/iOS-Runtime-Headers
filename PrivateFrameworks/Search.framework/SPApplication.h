/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSString, SPSearchResult;

@interface SPApplication : NSObject {
    NSString *_displayIdentifier;
    NSString *_displayName;
    NSString *_longDisplayName;
}

@property(retain) NSString * displayIdentifier;
@property(retain) NSString * displayName;
@property(retain) NSString * longDisplayName;
@property(readonly) SPSearchResult * searchResult;

- (void)dealloc;
- (id)description;
- (id)displayIdentifier;
- (id)displayName;
- (id)longDisplayName;
- (id)searchResult;
- (void)setDisplayIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLongDisplayName:(id)arg1;

@end
