/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureMetadataOutputObjectsDelegate>, AVCaptureMetadataOutputInternal, NSArray, NSObject<OS_dispatch_queue>;

@interface AVCaptureMetadataOutput : AVCaptureOutput {
    AVCaptureMetadataOutputInternal *_internal;
}

@property(readonly) NSArray * availableMetadataObjectTypes;
@property(copy) NSArray * metadataObjectTypes;
@property(readonly) NSObject<OS_dispatch_queue> * metadataObjectsCallbackQueue;
@property(readonly) <AVCaptureMetadataOutputObjectsDelegate> * metadataObjectsDelegate;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rectOfInterest;

+ (void)initialize;

- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (BOOL)_faceMetadataIsActive;
- (id)_input;
- (void)applyLiveSourceProperties;
- (id)availableMetadataObjectTypes;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)didStartForSession:(id)arg1;
- (void)didStartForSessionWithoutGraphRebuild:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (id)metadataObjectTypes;
- (id)metadataObjectsCallbackQueue;
- (id)metadataObjectsDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfInterest;
- (void)setMetadataObjectTypes:(id)arg1;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
