/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {
    struct { 
        unsigned int eastLng : 1; 
        unsigned int northLat : 1; 
        unsigned int southLat : 1; 
        unsigned int westLng : 1; 
    double _eastLng;
    } _has;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
}

@property(readonly) double centerLat;
@property(readonly) double centerLng;
@property double eastLng;
@property BOOL hasEastLng;
@property BOOL hasNorthLat;
@property BOOL hasSouthLat;
@property BOOL hasWestLng;
@property double northLat;
@property double southLat;
@property(readonly) double spanLat;
@property(readonly) double spanLng;
@property(retain) NSMutableArray * vertexs;
@property double westLng;

+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)arg1;

- (void)addVertex:(id)arg1;
- (double)centerLat;
- (double)centerLng;
- (void)clearVertexs;
- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)containsLocationWithAccuracy:(id)arg1;
- (BOOL)containsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eastLng;
- (BOOL)hasEastLng;
- (BOOL)hasNorthLat;
- (BOOL)hasSouthLat;
- (BOOL)hasWestLng;
- (unsigned int)hash;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRadialPlace:(id)arg1;
- (id)initWithSpannedRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (BOOL)isEqual:(id)arg1;
- (double)northLat;
- (BOOL)readFrom:(id)arg1;
- (void)setEastLng:(double)arg1;
- (void)setHasEastLng:(BOOL)arg1;
- (void)setHasNorthLat:(BOOL)arg1;
- (void)setHasSouthLat:(BOOL)arg1;
- (void)setHasWestLng:(BOOL)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setSpannedRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setVertexs:(id)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)spanLat;
- (double)spanLng;
- (id)vertexAtIndex:(unsigned int)arg1;
- (id)vertexs;
- (unsigned int)vertexsCount;
- (double)westLng;
- (void)writeTo:(id)arg1;

@end
