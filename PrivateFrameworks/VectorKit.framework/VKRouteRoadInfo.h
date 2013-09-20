/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKRouteRoadInfo : NSObject {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    NSString *_name;
    } _routeOffset;
    NSString *_shieldGroup;
}

@property(readonly) NSString * name;
@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property(readonly) NSString * shieldGroup;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3;
- (id)name;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (id)shieldGroup;

@end
