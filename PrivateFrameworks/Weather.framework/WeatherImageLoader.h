/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class CPBitmapStore;

@interface WeatherImageLoader : NSObject {
    float _scale;
    CPBitmapStore *_store;
}

@property(retain) CPBitmapStore * store;

+ (void)cacheImageIfNecessary:(id)arg1;
+ (id)conditionImageNamed:(id)arg1;
+ (id)conditionImageWithConditionIndex:(int)arg1;
+ (void)preCacheMiniIcons;
+ (id)sharedImageLoader;
+ (id)twcButtonImage;
+ (id)yahooButtonImage;

- (id)cachedImageForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setStore:(id)arg1;
- (id)store;

@end
