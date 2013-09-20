/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEORegionalResourceTileData : PBCodable <NSCopying> {
    NSMutableArray *_attributions;
    NSMutableArray *_icons;
}

@property(retain) NSMutableArray * attributions;
@property(retain) NSMutableArray * icons;

- (void)addAttribution:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)attributionAtIndex:(unsigned int)arg1;
- (id)attributions;
- (unsigned int)attributionsCount;
- (void)clearAttributions;
- (void)clearIcons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (id)iconAtIndex:(unsigned int)arg1;
- (id)icons;
- (unsigned int)iconsCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)writeTo:(id)arg1;

@end
