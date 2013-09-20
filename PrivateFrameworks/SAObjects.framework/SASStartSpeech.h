/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * audioSource;
@property BOOL clearContext;
@property int codec;
@property(copy) NSString * deviceIdentifier;
@property(copy) NSString * deviceModel;
@property BOOL disableAutoEndpointing;
@property(copy) NSString * dspStatus;
@property(copy) NSString * headsetAddress;
@property(copy) NSString * headsetId;
@property(copy) NSString * headsetName;
@property(copy) NSString * motionActivity;
@property(copy) NSNumber * motionConfidence;
@property(copy) NSNumber * noiseReductionLevel;
@property(copy) NSString * origin;
@property(copy) NSString * refId;

+ (id)startSpeech;
+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioSource;
- (BOOL)clearContext;
- (int)codec;
- (id)deviceIdentifier;
- (id)deviceModel;
- (BOOL)disableAutoEndpointing;
- (id)dspStatus;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headsetAddress;
- (id)headsetId;
- (id)headsetName;
- (id)motionActivity;
- (id)motionConfidence;
- (id)noiseReductionLevel;
- (id)origin;
- (void)setAudioSource:(id)arg1;
- (void)setClearContext:(BOOL)arg1;
- (void)setCodec:(int)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDisableAutoEndpointing:(BOOL)arg1;
- (void)setDspStatus:(id)arg1;
- (void)setHeadsetAddress:(id)arg1;
- (void)setHeadsetId:(id)arg1;
- (void)setHeadsetName:(id)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)setMotionConfidence:(id)arg1;
- (void)setNoiseReductionLevel:(id)arg1;
- (void)setOrigin:(id)arg1;

@end
