/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SKUIResourceLoader, SKUIShowcaseViewController;

@interface SUShowcaseViewController : SUViewController <SKUIShowcaseDelegate> {
    SKUIResourceLoader *_artworkLoader;
    NSArray *_showcaseItems;
    SKUIShowcaseViewController *_underlyingViewController;
}

- (id)_artworkLoader;
- (void)dealloc;
- (id)initWithShowcaseDictionary:(id)arg1;
- (void)loadView;
- (void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3;

@end
