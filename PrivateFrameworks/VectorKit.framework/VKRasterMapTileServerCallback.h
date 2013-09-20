/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKRasterMapTileRequest;

@interface VKRasterMapTileServerCallback : NSObject {
    id handler;
    VKRasterMapTileRequest *request;
    double startTimestamp;
}

@property(copy) id handler;
@property(retain) VKRasterMapTileRequest * request;
@property double startTimestamp;

- (void)dealloc;
- (id)description;
- (id)handler;
- (id)request;
- (void)setHandler:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;

@end
