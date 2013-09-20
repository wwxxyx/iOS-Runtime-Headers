/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableString, NSString, PLAvalanche;

@interface PUAvalancheReporter : NSObject <UIAlertViewDelegate> {
    PLAvalanche *_avalanche;
    NSMutableString *_reporterLog;
    NSString *_uuid;
}

@property(retain) PLAvalanche * avalanche;
@property(retain) NSMutableString * reporterLog;
@property(retain) NSString * uuid;

+ (id)createAlertViewForReport;

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)attachReporterLogToRadar:(id)arg1;
- (void)attachThumbsToRadar:(id)arg1;
- (id)avalanche;
- (id)descriptionForCurrentAvalanche;
- (id)initWithAvalanche:(id)arg1;
- (id)reporterLog;
- (void)setAvalanche:(id)arg1;
- (void)setReporterLog:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)showRadarReporterInViewController:(id)arg1;
- (id)uuid;

@end
