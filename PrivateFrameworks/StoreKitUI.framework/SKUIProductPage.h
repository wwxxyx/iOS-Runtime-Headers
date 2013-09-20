/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, NSURL, SKUIProductPageItem, SKUIReviewConfiguration, SKUIUber, SSMetricsConfiguration;

@interface SKUIProductPage : NSObject <NSCopying> {
    SKUIProductPageItem *_item;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSURL *_pageURL;
    NSArray *_relatedContentSwooshes;
    SKUIReviewConfiguration *_reviewConfiguration;
    SKUIUber *_uber;
}

@property(retain) SKUIProductPageItem * item;
@property(retain) SSMetricsConfiguration * metricsConfiguration;
@property(copy) NSString * metricsPageDescription;
@property(copy) NSURL * pageURL;
@property(copy) NSArray * relatedContentSwooshes;
@property(retain) SKUIReviewConfiguration * reviewConfiguration;
@property(retain) SKUIUber * uber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)item;
- (id)metricsConfiguration;
- (id)metricsPageDescription;
- (id)pageURL;
- (id)relatedContentSwooshes;
- (id)reviewConfiguration;
- (void)setItem:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setRelatedContentSwooshes:(id)arg1;
- (void)setReviewConfiguration:(id)arg1;
- (void)setUber:(id)arg1;
- (id)uber;

@end
