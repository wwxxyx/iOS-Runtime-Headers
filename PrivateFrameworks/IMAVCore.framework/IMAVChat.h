/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChatParticipant, IMAccount, IMHandle, IMPair, IMTimingCollection, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    NSString *_GUID;
    BOOL _airplaneModeEnabled;
    NSNumber *_backCameraCaptureTime;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    NSString *_callStatisticsGUID;
    NSDictionary *_callerProperties;
    id _conferenceController;
    NSString *_conferenceID;
    NSObject<OS_dispatch_queue> *_conferenceQueue;
    NSMutableDictionary *_conferenceStateCache;
    BOOL _connectionStarted;
    double _connectionTimeoutTime;
    NSTimer *_connectionTimeoutTimer;
    int _connectionType;
    NSNumber *_dataDownloaded;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSDate *_dateConnected;
    NSDate *_dateCreated;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_dateStartedConnecting;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    NSError *_error;
    NSMutableDictionary *_extraServerContext;
    NSTimer *_firstFrameTimeoutTimer;
    NSNumber *_frontCameraCaptureTime;
    BOOL _hasGatheredInfo;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _hasReceivedFirstFrame;
    IMHandle *_initiator;
    NSDate *_interruptionBegan;
    double _invitationTimeoutTime;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    BOOL _isAudioInterrupted;
    BOOL _isCallUpgrade;
    BOOL _isCaller;
    BOOL _isTerminating;
    BOOL _isVideo;
    BOOL _isVideoInterrupted;
    } _landscapeAspectRatios;
    unsigned int _lastPostedState;
    unsigned int _localNetworkConnectionType;
    IMAVChatParticipant *_localParticipant;
    unsigned int _localState;
    NSNumber *_natType;
    BOOL _needsAudioRestart;
    BOOL _needsVideoRestart;
    int _networkCheckResult;
    NSMutableArray *_participants;
    IMPair *_pendingPreemptiveRelayInitate;
    int _pingTestResult;
    NSDictionary *_pingTestResults;
    } _portraitAspectRatios;
    unsigned int _remoteNetworkConnectionType;
    unsigned int _sessionID;
    BOOL _startedAudioSession;
    IMTimingCollection *_timingCollection;
}

@property(retain) NSString * GUID;
@property(readonly) BOOL _allParticipantsUsingICE;
@property(setter=_setBackCameraCaptureTime:,retain) NSNumber * _backCameraCaptureTime;
@property(readonly) int _bustedCallID;
@property(readonly) NSNumber * _callDuration;
@property(setter=_setCallStatisticsGUID:,retain) NSString * _callStatisticsGUID;
@property(setter=_setConferenceController:) id _conferenceController;
@property(readonly) NSObject<OS_dispatch_queue> * _conferenceQueue;
@property(readonly) NSNumber * _connectDuration;
@property(setter=_setConnectionStarted:) BOOL _connectionStarted;
@property(setter=_setConnectionType:) int _connectionType;
@property(readonly) NSNumber * _currentNatType;
@property(setter=_setDataDownloaded:,retain) NSNumber * _dataDownloaded;
@property(setter=_setDataRate:,retain) NSNumber * _dataRate;
@property(setter=_setDataUploaded:,retain) NSNumber * _dataUploaded;
@property(readonly) NSDictionary * _extraServerContext;
@property(setter=_setFrontCameraCaptureTime:,retain) NSNumber * _frontCameraCaptureTime;
@property(readonly) NSArray * _imHandles;
@property(setter=_setInterruptionBegan:,retain) NSDate * _interruptionBegan;
@property(setter=_setIsAudioInterrupted:) BOOL _isAudioInterrupted;
@property(setter=_setIsCallUpgrade:) BOOL _isCallUpgrade;
@property(readonly) BOOL _isProxy;
@property(setter=_setIsVideoInterrupted:) BOOL _isVideoInterrupted;
@property(setter=_setLocalNetworkConnectionType:) unsigned int _localNetworkConnectionType;
@property(setter=_setNatType:,retain) NSNumber * _natType;
@property(setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart;
@property(setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart;
@property(setter=_setNetworkCheckResult:) int _networkCheckResult;
@property(setter=_setPingTestResult:) int _pingTestResult;
@property(setter=_setPingTestResults:,retain) NSDictionary * _pingTestResults;
@property(readonly) NSNumber * _relayConnectDuration;
@property(readonly) NSNumber * _remoteNatType;
@property(setter=_setRemoteNetworkConnectionType:) unsigned int _remoteNetworkConnectionType;
@property(setter=_setStartedAudioSession:) BOOL _startedAudioSession;
@property(readonly) BOOL _usesRelay;
@property(readonly) IMAccount * account;
@property(setter=_setCallerProperties:,retain) NSDictionary * callerProperties;
@property unsigned int cameraOrientation;
@property unsigned int cameraType;
@property(retain) NSString * conferenceID;
@property double connectionTimeoutTime;
@property(readonly) NSDate * dateConnected;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateEnded;
@property(readonly) BOOL didRemoteMute;
@property(readonly) BOOL didRemotePause;
@property(readonly) int endedError;
@property(readonly) unsigned int endedReason;
@property(readonly) BOOL hasReceivedFirstFrame;
@property(readonly) IMHandle * initiatorIMHandle;
@property(readonly) IMAVChatParticipant * initiatorParticipant;
@property double invitationTimeoutTime;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isCaller;
@property(setter=setMute:) BOOL isMute;
@property(setter=setPaused:) BOOL isPaused;
@property(setter=setRemoteMute:) BOOL isRemoteMute;
@property BOOL isSendingAudio;
@property BOOL isSendingVideo;
@property(readonly) BOOL isStateFinal;
@property(readonly) BOOL isUsingWifi;
@property(readonly) BOOL isVideo;
@property(readonly) IMAVChatParticipant * localParticipant;
@property void* localVideoBackLayer;
@property void* localVideoLayer;
@property(readonly) IMHandle * otherIMHandle;
@property(readonly) NSArray * participants;
@property(readonly) NSArray * remoteParticipants;
@property(readonly) unsigned int sessionID;
@property(readonly) unsigned int state;

+ (id)_acceptedChats;
+ (id)_activeChat;
+ (id)_avChatArray;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatList;
+ (id)_chatListLock;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_connectedChat;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_imHandleFromProxyRepresentation:(id)arg1;
+ (id)_incomingInvitations;
+ (id)_nonFinalChat;
+ (id)_outgoingInvitations;
+ (id)_proxyRepresentationForIMHandle:(id)arg1;
+ (id)acceptedChats;
+ (id)activeChat;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatList;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)connectedChat;
+ (id)connectedChats;
+ (id)connectingChats;
+ (double)defaultConnectionTimeoutTime;
+ (double)defaultInvitationTimeoutTime;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)outgoingInvitations;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;

- (id)GUID;
- (void)__responseToVCInvite:(id)arg1;
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_airplaneModeChanged:(id)arg1;
- (BOOL)_allParticipantsUsingICE;
- (void)_applicationWillTerminate:(id)arg1;
- (id)_backCameraCaptureTime;
- (void)_breakBeforeMakeTimer:(id)arg1;
- (void)_breakCallsIfNecessary:(BOOL)arg1;
- (int)_bustedCallID;
- (void)_cacheBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)_cachedBoolForKey:(id)arg1;
- (id)_callDuration;
- (id)_callStatisticsGUID;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_clearBreakBeforeMakeTimer;
- (void)_clearCache;
- (void)_clearConnectionTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (id)_conferenceController;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(BOOL)arg2;
- (id)_conferenceQueue;
- (id)_connectDuration;
- (BOOL)_connectionStarted;
- (void)_connectionTimeout:(id)arg1;
- (int)_connectionType;
- (id)_currentNatType;
- (id)_dataDownloaded;
- (id)_dataRate;
- (id)_dataUploaded;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_entitlementsChanged:(id)arg1;
- (id)_extraServerContext;
- (void)_firstFrameTimeout:(id)arg1;
- (id)_frontCameraCaptureTime;
- (void)_handleAVError:(id)arg1;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(BOOL)arg4;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (BOOL)_hasCachedBoolForKey:(id)arg1;
- (id)_imHandles;
- (id)_initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 GUID:(id)arg3;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_interruptionBegan;
- (void)_invitationTimeout:(id)arg1;
- (BOOL)_isAudioInterrupted;
- (BOOL)_isCallUpgrade;
- (BOOL)_isCallUpgradeTo:(id)arg1;
- (BOOL)_isProxy;
- (BOOL)_isVideoInterrupted;
- (BOOL)_isVideoUpgradeTo:(id)arg1;
- (unsigned int)_localNetworkConnectionType;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (id)_natType;
- (BOOL)_needsAudioRestart;
- (BOOL)_needsVideoRestart;
- (int)_networkCheckResult;
- (void)_noteFirstFrame;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (BOOL)_participantsCheckOut;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (int)_pingTestResult;
- (id)_pingTestResults;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize { float x1; float x2; })arg8;
- (void)_postStateToDelegateIfNecessary;
- (BOOL)_processVCResponseDict:(id)arg1;
- (id)_proxyRepresentation;
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;
- (void)_reduceInvitationTimeoutTime;
- (id)_relayConnectDuration;
- (id)_remoteNatType;
- (unsigned int)_remoteNetworkConnectionType;
- (void)_responseToVCInvite:(id)arg1;
- (void)_resumeAudioState;
- (void)_resumeVideoState;
- (void)_saveAudioRestartState;
- (void)_saveVideoRestartState;
- (void)_setActiveConference;
- (void)_setBackCameraCaptureTime:(id)arg1;
- (void)_setBreakBeforeMakeTimer;
- (void)_setCallStatisticsGUID:(id)arg1;
- (void)_setCallerProperties:(id)arg1;
- (void)_setConferenceController:(id)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setConnectionStarted:(BOOL)arg1;
- (void)_setConnectionTimeoutTimer;
- (void)_setConnectionType:(int)arg1;
- (void)_setCreationDate;
- (void)_setDataDownloaded:(id)arg1;
- (void)_setDataRate:(id)arg1;
- (void)_setDataUploaded:(id)arg1;
- (void)_setDateConnected;
- (void)_setFirstFrameTimeoutTimer;
- (void)_setFrontCameraCaptureTime:(id)arg1;
- (void)_setGUID:(id)arg1;
- (void)_setInterruptionBegan:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_setIsAudioInterrupted:(BOOL)arg1;
- (void)_setIsCallUpgrade:(BOOL)arg1;
- (void)_setIsVideoInterrupted:(BOOL)arg1;
- (void)_setLocalNetworkConnectionType:(unsigned int)arg1;
- (void)_setNatType:(id)arg1;
- (void)_setNeedsAudioRestart:(BOOL)arg1;
- (void)_setNeedsVideoRestart:(BOOL)arg1;
- (void)_setNetworkCheckResult:(int)arg1;
- (void)_setPingTestResult:(int)arg1;
- (void)_setPingTestResults:(id)arg1;
- (void)_setRemoteNetworkConnectionType:(unsigned int)arg1;
- (void)_setStartedAudioSession:(BOOL)arg1;
- (void)_setStateDisconnected;
- (BOOL)_startedAudioSession;
- (void)_submitCallConnectedLogging;
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_submitCallInterruptionBeganLogging;
- (void)_submitCallInterruptionEndedLogging;
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(BOOL)arg2 isVideo:(BOOL)arg3;
- (id)_timings;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (BOOL)_usesRelay;
- (void)_vccInitDidFinish:(id)arg1;
- (void)acceptInvitation;
- (id)account;
- (void)beginChat;
- (id)callerProperties;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (void)cancelInvitation;
- (void)conferenceAVConferenceCallID:(int)arg1 didConnect:(BOOL)arg2;
- (void)conferenceDidStopWithCallID:(int)arg1 error:(id)arg2;
- (id)conferenceID;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (double)connectionTimeoutTime;
- (id)dateConnected;
- (id)dateCreated;
- (id)dateEnded;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (id)description;
- (BOOL)didRemoteMute;
- (BOOL)didRemotePause;
- (void)endChat;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)endChatWithReason:(unsigned int)arg1;
- (int)endedError;
- (unsigned int)endedReason;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (BOOL)hasReceivedFirstFrame;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)initiatorIMHandle;
- (id)initiatorParticipant;
- (double)invitationTimeoutTime;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)invite:(id)arg1;
- (void)inviteAll;
- (id)inviteesInfo;
- (BOOL)isActive;
- (BOOL)isCaller;
- (BOOL)isConferenceSilent;
- (BOOL)isMute;
- (BOOL)isPaused;
- (BOOL)isRemoteMute;
- (BOOL)isSendingAudio;
- (BOOL)isSendingVideo;
- (BOOL)isStateFinal;
- (BOOL)isUsingWifi;
- (BOOL)isVideo;
- (struct CGSize { float x1; float x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (id)localParticipant;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (id)otherIMHandle;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)participantWithAVConferenceCallID:(int)arg1;
- (id)participantWithID:(id)arg1;
- (id)participants;
- (id)remoteParticipants;
- (unsigned int)sessionID;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)setCameraType:(unsigned int)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setLocalAspectRatio:(struct CGSize { float x1; float x2; })arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setRemoteMute:(BOOL)arg1;
- (BOOL)startPreviewWithError:(id*)arg1;
- (unsigned int)state;
- (BOOL)stopPreview;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemDidFastUserSwitchOut;
- (void)systemWillShutdown;
- (void)toggleMute;
- (void)togglePaused;
- (id)vcPartyIDForIMHandle:(id)arg1;

@end
