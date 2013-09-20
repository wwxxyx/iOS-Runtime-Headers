/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSURLCompletionMatch : NSObject {
    int _matchLocation;
}

@property(readonly) int matchLocation;

+ (int)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (int)matchLocationForString:(id)arg1 inURLString:(id)arg2;

- (id)initWithMatchLocation:(int)arg1;
- (int)matchLocation;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
- (id)originalURLString;
- (id)title;
- (id)userVisibleURLString;

@end
