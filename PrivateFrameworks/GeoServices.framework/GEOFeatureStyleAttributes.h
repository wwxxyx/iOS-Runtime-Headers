/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {
    struct { 
        unsigned int key; 
        int value; 
    } v[16];
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)drivingSide;
- (BOOL)hasDrivingSide;
- (unsigned int)hash;
- (id)init;
- (id)initWithAttributes:(unsigned int)arg1;
- (BOOL)isDrivable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFreeway;
- (BOOL)isRailway;
- (BOOL)isRamp;
- (BOOL)isTunnel;
- (BOOL)isWalkable;
- (int)rampDirection;
- (int)rampType;
- (BOOL)shouldSuppress3DBuildingStrokes;
- (void)sort;

@end
