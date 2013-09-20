/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSDMagicMoveTextureZOrderer : NSObject {
    NSArray *_incomingTexturesInZOrder;
    NSArray *_outgoingTexturesInZOrder;
    NSArray *_percentTextures;
    float *_percentTexturesTimes;
    unsigned int _zOrderIntersectionsCount;
    NSArray *_zOrderMatches;
}

@property(readonly) unsigned int zOrderIntersectionsCount;

- (void)dealloc;
- (id)initWithAnimationMatches:(id)arg1;
- (void)p_addVisibleTexturesFromMatches:(id)arg1 toArray:(id)arg2 interpolatedPercent:(float)arg3;
- (id)p_arrayBySortingMatches:(id)arg1 withInterpolatedPercent:(float)arg2;
- (unsigned int)p_bestZIndexForUnassignedMatch:(id)arg1 inMatchArray:(id)arg2;
- (void)p_calculateTextureArraysFromIntersections;
- (void)p_setupZOrderMatchesWithAnimationMatches:(id)arg1;
- (unsigned int)p_zIntersectionsBetweenZOrdererMatches:(id)arg1;
- (id)texturedRectanglesAtPercent:(double)arg1;
- (unsigned int)zOrderIntersectionsCount;

@end
