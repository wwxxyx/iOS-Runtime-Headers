/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOTileSet : PBCodable <NSCopying> {
    struct { 
        unsigned int multiTileURLUsesStatusCodes : 1; 
    NSString *_baseURL;
    } _has;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    BOOL _multiTileURLUsesStatusCodes;
    int _scale;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    NSMutableArray *_validVersions;
}

@property(retain) NSString * baseURL;
@property(readonly) BOOL hasBaseURL;
@property(readonly) BOOL hasLocalizationURL;
@property(readonly) BOOL hasMultiTileURL;
@property BOOL hasMultiTileURLUsesStatusCodes;
@property(retain) NSString * localizationURL;
@property(retain) NSString * multiTileURL;
@property BOOL multiTileURLUsesStatusCodes;
@property int scale;
@property int size;
@property int style;
@property(retain) NSMutableArray * supportedLanguages;
@property(retain) NSMutableArray * validVersions;

- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (id)baseURL;
- (void)clearSupportedLanguages;
- (void)clearValidVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBaseURL;
- (BOOL)hasLocalizationURL;
- (BOOL)hasMultiTileURL;
- (BOOL)hasMultiTileURLUsesStatusCodes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizationURL;
- (id)multiTileURL;
- (BOOL)multiTileURLUsesStatusCodes;
- (BOOL)readFrom:(id)arg1;
- (int)scale;
- (void)setBaseURL:(id)arg1;
- (void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setMultiTileURL:(id)arg1;
- (void)setMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (void)setScale:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setValidVersions:(id)arg1;
- (int)size;
- (int)style;
- (id)supportedLanguageAtIndex:(unsigned int)arg1;
- (id)supportedLanguages;
- (unsigned int)supportedLanguagesCount;
- (id)validVersionAtIndex:(unsigned int)arg1;
- (id)validVersions;
- (unsigned int)validVersionsCount;
- (void)writeTo:(id)arg1;

@end
