/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPolyline;

@interface MKPolylineRenderer : MKOverlayPathRenderer {
}

@property(readonly) MKPolyline * polyline;

- (void)createPath;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;
- (id)initWithPolyline:(id)arg1;
- (id)polyline;

@end
