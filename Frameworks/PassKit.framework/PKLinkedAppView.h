/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, NSDictionary, NSURL, PKLinkedAppUserRatingView, SKStoreProductViewController, SSSoftwareLibraryItem, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKLinkedAppView : UITableViewCell <SKStoreProductViewControllerDelegate> {
    UIActivityIndicatorView *_activityIndicator;
    BOOL _appInstalled;
    NSURL *_appLaunchURL;
    UILabel *_appName;
    BOOL _appNotAvailable;
    UILabel *_appPublisher;
    SSSoftwareLibraryItem *_foundLibraryItem;
    NSDictionary *_foundStoreItem;
    UIImageView *_iconView;
    UILabel *_loadingLabel;
    BOOL _lookupInitiated;
    UILabel *_price;
    SKStoreProductViewController *_productViewController;
    NSArray *_storeIDs;
    UILabel *_tapToOpen;
    PKLinkedAppUserRatingView *_userRatingView;
    UIButton *_viewButton;
}

@property(retain) UIActivityIndicatorView * activityIndicator;
@property BOOL appInstalled;
@property(retain) NSURL * appLaunchURL;
@property(retain) UILabel * appName;
@property BOOL appNotAvailable;
@property(retain) UILabel * appPublisher;
@property(retain) SSSoftwareLibraryItem * foundLibraryItem;
@property(retain) NSDictionary * foundStoreItem;
@property(retain) UIImageView * iconView;
@property(retain) UILabel * loadingLabel;
@property BOOL lookupInitiated;
@property(retain) UILabel * price;
@property(retain) SKStoreProductViewController * productViewController;
@property(retain) NSArray * storeIDs;
@property(retain) UILabel * tapToOpen;
@property(retain) PKLinkedAppUserRatingView * userRatingView;
@property(retain) UIButton * viewButton;

- (BOOL)_anyAppIsInstalled:(id)arg1;
- (int)_bindingTypeForNewsstandItem:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_cleanupViews;
- (struct CGSize { float x1; float x2; })_desiredSizeForNewsstandItem:(id)arg1;
- (int)_iconOptionsForItem:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { float x1; float x2; })arg2;
- (int)_iconVariantForImage:(id)arg1 item:(id)arg2;
- (id)_imageForSize:(struct CGSize { float x1; float x2; })arg1 fromArtwork:(id)arg2;
- (BOOL)_itemArtNeedsShine:(id)arg1;
- (BOOL)_itemIsNewsstandApp:(id)arg1;
- (void)_layoutLoadingView;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (id)_newsstandArtworkForItem:(id)arg1;
- (id)_priceForItem:(id)arg1;
- (struct CGSize { float x1; float x2; })_sizeFromImage:(id)arg1;
- (id)activityIndicator;
- (BOOL)appInstalled;
- (id)appLaunchURL;
- (id)appName;
- (BOOL)appNotAvailable;
- (id)appPublisher;
- (void)dealloc;
- (id)foundLibraryItem;
- (id)foundStoreItem;
- (id)iconView;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2;
- (void)layoutSubviews;
- (id)loadingLabel;
- (BOOL)lookupInitiated;
- (void)performStoreLookup;
- (id)price;
- (id)productViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)reload;
- (void)reloadWithDelay:(double)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setAppInstalled:(BOOL)arg1;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppNotAvailable:(BOOL)arg1;
- (void)setAppPublisher:(id)arg1;
- (void)setFoundLibraryItem:(id)arg1;
- (void)setFoundStoreItem:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setLookupInitiated:(BOOL)arg1;
- (void)setPrice:(id)arg1;
- (void)setProductViewController:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setTapToOpen:(id)arg1;
- (void)setUserRatingView:(id)arg1;
- (void)setViewButton:(id)arg1;
- (id)storeIDs;
- (id)tapToOpen;
- (id)userRatingView;
- (id)viewButton;

@end
