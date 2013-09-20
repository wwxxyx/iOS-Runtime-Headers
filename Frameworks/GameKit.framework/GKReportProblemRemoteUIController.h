/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlayer, NSError, NSURL;

@interface GKReportProblemRemoteUIController : GKRemoteUIController {
    GKPlayer *_problemPlayer;
    NSURL *_url;
}

@property(retain) NSError * error;
@property(retain) GKPlayer * problemPlayer;
@property(retain) NSURL * url;

+ (id)controllerForProblemPlayer:(id)arg1 completionHandler:(id)arg2;

- (id)bagKey;
- (id)fallbackURL;
- (id)initWithProblemPlayer:(id)arg1;
- (id)postBodyForInitialLoad;
- (int)preferredLayoutStyle;
- (id)problemPlayer;
- (void)setProblemPlayer:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
