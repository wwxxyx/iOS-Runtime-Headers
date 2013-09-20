/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@interface PLSleepWakeLogger : PLTelephonyConnectedLogger {
    unsigned int pmNotifier;
    unsigned int rootDomainConnect;
    struct IONotificationPort { } *systemPowerPortRef;
}

@property unsigned int rootDomainConnect;

- (id)_dateFromTimeval:(struct timeval { int x1; int x2; })arg1;
- (id)basebandWakeLogStringWithDecodedReason:(id)arg1;
- (void)dealloc;
- (id)eurekaBasebandWakeLogStringWithDecodedReason:(id)arg1;
- (void)handleBasebandWake:(id)arg1;
- (id)iceBasebandWakeLogStringWithDecodedReason:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (BOOL)isBasebandWakeup:(id)arg1;
- (void)log;
- (unsigned int)rootDomainConnect;
- (void)setRootDomainConnect:(unsigned int)arg1;
- (id)stringForData:(id)arg1;
- (void)systemPoweredOn;
- (id)wakeReason;

@end
