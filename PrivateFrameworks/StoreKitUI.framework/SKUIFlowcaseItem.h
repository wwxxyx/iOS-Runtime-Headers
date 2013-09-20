/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIArtwork, SKUILink;

@interface SKUIFlowcaseItem : NSObject {
    NSString *_accessibilityLabel;
    long long _flowcaseItemIdentifier;
    SKUIArtwork *_landscapeArtwork;
    SKUILink *_link;
    SKUIArtwork *_portraitArtwork;
}

@property(readonly) NSString * accessibilityLabel;
@property(readonly) long long flowcaseItemIdentifier;
@property(readonly) SKUIArtwork * landscapeArtwork;
@property(readonly) SKUILink * link;
@property(readonly) SKUIArtwork * portraitArtwork;

- (void).cxx_destruct;
- (void)_setLinkItem:(id)arg1;
- (id)accessibilityLabel;
- (id)description;
- (long long)flowcaseItemIdentifier;
- (id)initWithComponentContext:(id)arg1;
- (id)landscapeArtwork;
- (id)link;
- (id)portraitArtwork;

@end
