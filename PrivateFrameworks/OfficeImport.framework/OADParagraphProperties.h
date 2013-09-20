/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADBulletColor, OADBulletFont, OADBulletProperties, OADBulletSize, OADTextSpacing;

@interface OADParagraphProperties : OADCharacterProperties {
    unsigned int mIsRightToLeft : 1;
    unsigned int mIsLatinLineBreak : 1;
    unsigned int mIsHangingPunctuation : 1;
    unsigned int mHasTabStops : 1;
    unsigned int mHasLeftMargin : 1;
    unsigned int mHasRightMargin : 1;
    unsigned int mHasLevel : 1;
    unsigned int mHasIndent : 1;
    unsigned int mHasAlign : 1;
    unsigned int mHasDefaultTab : 1;
    unsigned int mHasIsRightToLeft : 1;
    unsigned int mHasWrap : 1;
    unsigned int mHasFontAlign : 1;
    unsigned int mHasIsLatinLineBreak : 1;
    unsigned int mHasIsHangingPunctuation : 1;
    unsigned int mHasBulletCharSet : 1;
    OADTextSpacing *mAfterSpacing;
    unsigned char mAlign;
    OADTextSpacing *mBeforeSpacing;
    int mBulletCharSet;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADBulletSize *mBulletSize;
    double mDefaultTab;
    unsigned char mFontAlign;
    double mIndent;
    double mLeftMargin;
    int mLevel;
    OADTextSpacing *mLineSpacing;
    double mRightMargin;
    NSMutableArray *mTabStops;
    unsigned char mWrap;
}

+ (id)defaultProperties;

- (id)addTabStop;
- (id)afterSpacing;
- (int)align;
- (id)beforeSpacing;
- (int)bulletCharSet;
- (id)bulletColor;
- (id)bulletFont;
- (id)bulletProperties;
- (id)bulletSize;
- (void)clearTabStops;
- (void)dealloc;
- (double)defaultTab;
- (int)fontAlign;
- (BOOL)hasAfterSpacing;
- (BOOL)hasAlign;
- (BOOL)hasBeforeSpacing;
- (BOOL)hasBulletCharSet;
- (BOOL)hasBulletColor;
- (BOOL)hasBulletFont;
- (BOOL)hasBulletProperties;
- (BOOL)hasBulletSize;
- (BOOL)hasDefaultTab;
- (BOOL)hasFontAlign;
- (BOOL)hasIndent;
- (BOOL)hasIsHangingPunctuation;
- (BOOL)hasIsLatinLineBreak;
- (BOOL)hasIsRightToLeft;
- (BOOL)hasLeftMargin;
- (BOOL)hasLevel;
- (BOOL)hasLineSpacing;
- (BOOL)hasRightMargin;
- (BOOL)hasTabStops;
- (BOOL)hasWrap;
- (unsigned int)hash;
- (double)indent;
- (id)init;
- (id)initWithDefaults;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHangingPunctuation;
- (BOOL)isLatinLineBreak;
- (BOOL)isRightToLeft;
- (double)leftMargin;
- (int)level;
- (id)lineSpacing;
- (double)nonOveridenLeftMargin;
- (void)overrideWithProperties:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (double)rightMargin;
- (void)setAfterSpacing:(id)arg1;
- (void)setAlign:(int)arg1;
- (void)setBeforeSpacing:(id)arg1;
- (void)setBulletCharSet:(int)arg1;
- (void)setBulletColor:(id)arg1;
- (void)setBulletFont:(id)arg1;
- (void)setBulletProperties:(id)arg1;
- (void)setBulletSize:(id)arg1;
- (void)setDefaultTab:(double)arg1;
- (void)setFontAlign:(int)arg1;
- (void)setIndent:(double)arg1;
- (void)setIsHangingPunctuation:(BOOL)arg1;
- (void)setIsLatinLineBreak:(BOOL)arg1;
- (void)setIsRightToLeft:(BOOL)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setLevel:(int)arg1;
- (void)setLineSpacing:(id)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setWrap:(int)arg1;
- (id)tabStopAtIndex:(unsigned int)arg1;
- (unsigned int)tabStopCount;
- (id)tabStops;
- (int)wrap;

@end
