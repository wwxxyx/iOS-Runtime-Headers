/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {
    unsigned int mColorIndex;
    EDResources *mResources;
    int mSystemColorID;
    unsigned int mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithColorIndex:(unsigned int)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;
+ (id)colorReferenceWithThemeIndex:(unsigned int)arg1 tint:(double)arg2 resources:(id)arg3;

- (id)color;
- (unsigned int)colorIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToColorReference:(id)arg1;
- (bool)isValid;
- (int)systemColorID;
- (unsigned int)themeIndex;
- (double)tint;

@end
