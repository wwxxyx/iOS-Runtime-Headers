/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVCaptureConnection, AVCaptureSession, MPAudioDeviceController, NSDate, NSMutableArray, NSString, RCAudioInputWaveformDataSource, RCCaptureAudioFileOutput, RCSavedRecording;

@interface RCAudioInputDevice : NSObject <RCCaptureAudioFileOutputRecordingDelegate> {
    RCSavedRecording *_activeRecording;
    RCAudioInputWaveformDataSource *_activeWaveformDataSource;
    MPAudioDeviceController *_audioDeviceController;
    BOOL _audioInputAvailable;
    unsigned int _backgroundTaskIdentifier;
    RCCaptureAudioFileOutput *_captureAudioOutput;
    AVCaptureConnection *_captureConnection;
    AVCaptureSession *_captureSession;
    BOOL _handlingRecordingDidFinishCapturing;
    BOOL _isInterrupted;
    BOOL _lastRecordingDidStop;
    NSString *_pickedRouteName;
    NSMutableArray *_prepareFinishedCompletionBlocks;
    int _prepareToRecordState;
    BOOL _recordingSampleBuffers;
    NSDate *_recordingStartDate;
    id _sampleBufferHandlerBlock;
    BOOL _sessionFailedToStart;
    BOOL _waitingForCaptureSessionDidStart;
}

@property(readonly) RCSavedRecording * activeRecording;
@property(readonly) RCAudioInputWaveformDataSource * activeWaveformDataSource;
@property(readonly) BOOL audioInputAvailable;
@property(readonly) double elapsedRecordingTime;
@property(readonly) BOOL isIdle;
@property(readonly) BOOL isInterrupted;
@property(readonly) BOOL isPaused;
@property(readonly) BOOL isRecording;
@property(retain) NSDate * recordingStartDate;
@property(copy) id sampleBufferHandlerBlock;
@property(readonly) BOOL shouldSuspend;

+ (id)sharedInputDevice;

- (void).cxx_destruct;
- (void)_applicationWillTerminate:(id)arg1;
- (BOOL)_attachCaptureSessionDeviceInput;
- (void)_availableModesDidChange:(id)arg1;
- (void)_beginRecordingWithIntermediateRecordingURL:(id)arg1;
- (void)_closeCaptureSession;
- (void)_handleRecordingDidFinishCapturingWithError:(id)arg1;
- (id)_init;
- (void)_interruptionDidBegin:(id)arg1;
- (void)_onMainQueueHandleRecordingDidFinishCapturingAfterCompletionSound;
- (BOOL)_openCaptureSessionAndWaitUntilRunning;
- (void)_registerForCatpureSessionNotifications;
- (void)_sessionDidStartRunning:(id)arg1;
- (void)_sessionDidStopRunning:(id)arg1;
- (void)_sessionErrored:(id)arg1;
- (void)_setDisableSBMediaHUD:(BOOL)arg1;
- (void)_setPostPrepareRequestedState:(int)arg1;
- (void)_unregisterForCatpureSessionNotifications;
- (void)_updateAudioInputAvailable;
- (id)activeRecording;
- (id)activeWaveformDataSource;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (BOOL)audioInputAvailable;
- (void)beginRecordingWithCustomRecordingLabel:(id)arg1 prepareFinishedCompletionBlock:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureOutput:(id)arg1 didPauseRecordingToOutputFileAtURL:(id)arg2;
- (void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2;
- (void)dealloc;
- (double)elapsedRecordingTime;
- (void)endRecording;
- (id)init;
- (BOOL)isIdle;
- (BOOL)isInterrupted;
- (BOOL)isPaused;
- (BOOL)isPreparing;
- (BOOL)isRecording;
- (void)pauseRecording;
- (id)recordingStartDate;
- (void)resumeRecording;
- (id)sampleBufferHandlerBlock;
- (void)setRecordingStartDate:(id)arg1;
- (void)setSampleBufferHandlerBlock:(id)arg1;
- (BOOL)shouldSuspend;

@end
