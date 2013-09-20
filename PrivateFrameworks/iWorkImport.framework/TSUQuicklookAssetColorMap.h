/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, NSString;

@interface TSUQuicklookAssetColorMap : NSObject {
    NSString *mAppAssetPath;
    NSMutableDictionary *mAssetMap;
}

@property(retain) NSString * appAssetPath;
@property(retain) NSMutableDictionary * assetMap;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)hasAppAssets;
+ (id)quicklookAssetMap;

- (id)appAssetPath;
- (id)assetMap;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setAppAssetPath:(id)arg1;
- (void)setAssetMap:(id)arg1;

@end
