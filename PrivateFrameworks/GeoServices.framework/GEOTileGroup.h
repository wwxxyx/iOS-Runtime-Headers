/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int attributionBadgeIndex : 1; 
    unsigned int _attributionBadgeIndex;
    } _attributionIndexs;
    } _fontIndexs;
    } _has;
    } _iconIndexs;
    unsigned int _identifier;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; } *_regionalResourceIndexs;
    unsigned int _regionalResourceIndexsCount;
    unsigned int _regionalResourceIndexsSpace;
    } _styleSheetIndexs;
    } _textureIndexs;
    struct { unsigned int x1; unsigned int x2; } *_tileSets;
    unsigned int _tileSetsCount;
    unsigned int _tileSetsSpace;
    } _xmlIndexs;
}

@property unsigned int attributionBadgeIndex;
@property(readonly) unsigned int* attributionIndexs;
@property(readonly) unsigned int attributionIndexsCount;
@property(readonly) unsigned int* fontIndexs;
@property(readonly) unsigned int fontIndexsCount;
@property BOOL hasAttributionBadgeIndex;
@property(readonly) unsigned int* iconIndexs;
@property(readonly) unsigned int iconIndexsCount;
@property unsigned int identifier;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }* regionalResourceIndexs;
@property(readonly) unsigned int regionalResourceIndexsCount;
@property(readonly) unsigned int* styleSheetIndexs;
@property(readonly) unsigned int styleSheetIndexsCount;
@property(readonly) unsigned int* textureIndexs;
@property(readonly) unsigned int textureIndexsCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; }* tileSets;
@property(readonly) unsigned int tileSetsCount;
@property(readonly) unsigned int* xmlIndexs;
@property(readonly) unsigned int xmlIndexsCount;

- (void)addAttributionIndex:(unsigned int)arg1;
- (void)addFontIndex:(unsigned int)arg1;
- (void)addIconIndex:(unsigned int)arg1;
- (void)addRegionalResourceIndex:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })arg1;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (void)addTextureIndex:(unsigned int)arg1;
- (void)addTileSet:(struct { unsigned int x1; unsigned int x2; })arg1;
- (void)addXmlIndex:(unsigned int)arg1;
- (unsigned int)attributionBadgeIndex;
- (unsigned int)attributionIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)attributionIndexs;
- (unsigned int)attributionIndexsCount;
- (void)clearAttributionIndexs;
- (void)clearFontIndexs;
- (void)clearIconIndexs;
- (void)clearRegionalResourceIndexs;
- (void)clearStyleSheetIndexs;
- (void)clearTextureIndexs;
- (void)clearTileSets;
- (void)clearXmlIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fontIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)fontIndexs;
- (unsigned int)fontIndexsCount;
- (BOOL)hasAttributionBadgeIndex;
- (unsigned int)hash;
- (unsigned int)iconIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)iconIndexs;
- (unsigned int)iconIndexsCount;
- (unsigned int)identifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })regionalResourceIndexAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)regionalResourceIndexs;
- (unsigned int)regionalResourceIndexsCount;
- (void)setAttributionBadgeIndex:(unsigned int)arg1;
- (void)setAttributionIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setFontIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setHasAttributionBadgeIndex:(BOOL)arg1;
- (void)setIconIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setRegionalResourceIndexs:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)arg1 count:(unsigned int)arg2;
- (void)setStyleSheetIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTextureIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTileSets:(struct { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned int)arg2;
- (void)setXmlIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int)styleSheetIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)styleSheetIndexs;
- (unsigned int)styleSheetIndexsCount;
- (unsigned int)textureIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)textureIndexs;
- (unsigned int)textureIndexsCount;
- (struct { unsigned int x1; unsigned int x2; })tileSetAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; }*)tileSets;
- (unsigned int)tileSetsCount;
- (void)writeTo:(id)arg1;
- (unsigned int)xmlIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)xmlIndexs;
- (unsigned int)xmlIndexsCount;

@end
