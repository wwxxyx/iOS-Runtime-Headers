/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class NSArray;

@interface TRResendPacketEvent : TRPacketEvent {
    NSArray *_resendPacketEventClasses;
}

@property(readonly) NSArray * resendPacketEventClasses;

+ (unsigned int)_packetEventType;

- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithResendPacketEventClasses:(id)arg1;
- (id)resendPacketEventClasses;

@end
