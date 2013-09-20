/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding> {
}

@property(readonly) BOOL hasDeletableContent;
@property(readonly) BOOL isDownloadable;
@property(readonly) BOOL isDownloadableStoreOffer;
@property(readonly) BOOL isPurchasableStoreOffer;
@property(readonly) MPMediaLibrary * mediaLibrary;
@property(readonly) unsigned long long persistentID;
@property(readonly) int preferredStoreOfferVariant;
@property(readonly) MPMediaItem * representativeItem;

+ (BOOL)canFilterByProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)buyOffer;
- (id)buyOfferForVariant:(int)arg1;
- (id)completionOfferForVariant:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (BOOL)hasDeletableContent;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (void)invalidateCachedProperties;
- (BOOL)isDownloadable;
- (BOOL)isDownloadableStoreOffer;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPurchasableStoreOffer;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (int)preferredStoreOfferVariant;
- (id)representativeItem;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
