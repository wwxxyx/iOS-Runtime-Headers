/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureFigAudioDevice, AVCaptureFigVideoDevice, AVCaptureVideoPreviewLayer, AVRunLoopCondition, AVWeakReference, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface AVCaptureSessionInternal : NSObject {
    BOOL adjustingDeviceActiveFormat;
    AVCaptureFigAudioDevice *audioDevice;
    BOOL automaticallyConfiguresApplicationAudioSession;
    int beginConfigRefCount;
    NSMutableDictionary *captureOptions;
    NSMutableArray *connections;
    NSMutableDictionary *figRecorderOptions;
    NSMutableArray *inputs;
    BOOL interrupted;
    NSMutableArray *liveConnections;
    struct OpaqueCMClock { } *masterClock;
    NSMutableArray *outputs;
    struct OpaqueFigRecorder { } *recorder;
    BOOL recording;
    int resolvedSessionPresetChangeSeed;
    int resolvedVideoDeviceChangeSeed;
    AVRunLoopCondition *runLoopCondition;
    BOOL running;
    NSString *sessionPreset;
    int sessionPresetChangeSeed;
    NSError *stopError;
    BOOL usesApplicationAudioSession;
    AVCaptureFigVideoDevice *videoDevice;
    int videoDeviceChangeSeed;
    AVCaptureVideoPreviewLayer *videoPreviewLayer;
    BOOL waitingForRecorderDidStartPreviewing;
    BOOL waitingForRecorderDidStartRecording;
    BOOL waitingForRecorderDidStopPreviewing;
    BOOL waitingForRecorderDidStopRecording;
    BOOL waitingForRecorderDidStopSource;
    AVWeakReference *weakReference;
}

- (void)dealloc;
- (id)init;

@end
