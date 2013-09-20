/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@class NSString;

@interface PLConfigLogger : PLLogger {
}

@property(readonly) int autolockTime;
@property(readonly) double backlightLevel;
@property(readonly) NSString * bootArgs;
@property(readonly) NSString * crashReporterKey;
@property(readonly) BOOL disableCABlanking;
@property(readonly) BOOL noWatchdogs;

- (int)autolockTime;
- (double)backlightLevel;
- (id)basebandFirmware;
- (id)bootArgs;
- (id)crashReporterKey;
- (BOOL)disableCABlanking;
- (void)log;
- (BOOL)noWatchdogs;
- (id)osType;

@end
