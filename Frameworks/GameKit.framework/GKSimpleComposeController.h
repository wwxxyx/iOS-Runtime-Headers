/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKComposeHeaderWithStaticRecipients, NSArray, NSString;

@interface GKSimpleComposeController : GKBaseComposeController {
    NSString *_defaultMessage;
    id _doneHandler;
    NSArray *_players;
    GKComposeHeaderWithStaticRecipients *_toField;
}

@property(retain) NSString * defaultMessage;
@property(copy) id doneHandler;
@property(retain) NSArray * players;
@property(retain) GKComposeHeaderWithStaticRecipients * toField;

- (void)dealloc;
- (id)defaultMessage;
- (id)doneHandler;
- (void)donePressed;
- (void)loadView;
- (id)players;
- (void)pushOntoNavigationController:(id)arg1 withDoneHandler:(id)arg2;
- (void)setDefaultMessage:(id)arg1;
- (void)setDoneHandler:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setToField:(id)arg1;
- (void)setupSendButton;
- (id)toField;
- (void)viewWillAppear:(BOOL)arg1;

@end
