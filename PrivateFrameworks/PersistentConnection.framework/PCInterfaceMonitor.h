/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class <PCInterfaceUsabilityMonitorProtocol>, NSMapTable, NSString;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol> {
    NSMapTable *_delegateMap;
    <PCInterfaceUsabilityMonitorProtocol> *_internal;
}

@property(readonly) struct __CFString { }* currentRAT;
@property(readonly) int interfaceIdentifier;
@property(readonly) BOOL isInterfaceHistoricallyUsable;
@property(readonly) BOOL isInterfaceUsable;
@property(readonly) BOOL isInternetReachable;
@property(readonly) BOOL isLTEWithCDRX;
@property(readonly) BOOL isPoorLinkQuality;
@property(readonly) BOOL isRadioHot;
@property(readonly) int linkQuality;
@property(readonly) NSString * linkQualityString;

+ (BOOL)isPoorLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;

- (void)addDelegate:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;
- (struct __CFString { }*)currentRAT;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(int)arg1;
- (int)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (BOOL)isInterfaceHistoricallyUsable;
- (BOOL)isInterfaceUsable;
- (BOOL)isInternetReachable;
- (BOOL)isLTEWithCDRX;
- (BOOL)isPoorLinkQuality;
- (BOOL)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)removeDelegate:(id)arg1;

@end
