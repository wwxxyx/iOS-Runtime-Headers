/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class GEOBatchReverseGeocodeRequest, NSMutableArray, NSObject<OS_dispatch_semaphore>;

@interface _RTBatchSliceGeocoder : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    GEOBatchReverseGeocodeRequest *_batchRequest;
    NSMutableArray *_placeResults;
    } _range;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property(retain) GEOBatchReverseGeocodeRequest * batchRequest;
@property(retain) NSMutableArray * placeResults;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(retain) NSObject<OS_dispatch_semaphore> * semaphore;

- (void).cxx_destruct;
- (void)_cancelRequest:(id)arg1;
- (id)batchRequest;
- (void)cancel;
- (void)dealloc;
- (void)geocodeLocations:(id)arg1;
- (id)init;
- (id)placeResults;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)semaphore;
- (void)setBatchRequest:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSemaphore:(id)arg1;

@end
