/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPolylineOverlay, VKPolylineOverlaySection;

@interface VKPolylinePath : NSObject {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    VKPolylineOverlay *_overlay;
    BOOL _ownsPoints;
    unsigned int _pointCount;
    struct Vec2Imp<float> { float x1; float x2; } *_points;
    } _routeEnd;
    } _routeStart;
    VKPolylineOverlaySection *_section;
    BOOL _trafficSpeed;
}

@property(readonly) BOOL hasCompletedMapMatching;
@property(readonly) BOOL isMapMatched;
@property(readonly) unsigned int pointCount;
@property(readonly) struct Vec2Imp<float> { float x1; float x2; }* points;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeEnd;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeStart;
@property(readonly) VKPolylineOverlaySection * section;
@property BOOL trafficSpeed;

- (id).cxx_construct;
- (void)assignPoints:(struct Vec2Imp<float> { float x1; float x2; }*)arg1 count:(unsigned int)arg2;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)hasCompletedMapMatching;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;
- (struct Vec2Imp<float> { float x1; float x2; })interpolateAt:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg1;
- (BOOL)isMapMatched;
- (struct PolylineCoordinate { unsigned int x1; float x2; })pathIndexFromRouteIndex:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned int)pointCount;
- (struct Vec2Imp<float> { float x1; float x2; }*)points;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeEnd;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeStart;
- (id)section;
- (void)setRouteEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setTrafficSpeed:(BOOL)arg1;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(id)arg2;
- (BOOL)trafficSpeed;

@end
