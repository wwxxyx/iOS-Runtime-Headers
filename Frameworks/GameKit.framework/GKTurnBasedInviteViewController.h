/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKTurnBasedInviteViewControllerDelegate>, NSError, NSMutableDictionary;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController <UIActionSheetDelegate> {
    int _alertTag;
    NSError *_creationError;
    <GKTurnBasedInviteViewControllerDelegate> *_delegateWeak;
    NSMutableDictionary *_inviteMessageDictionary;
    int _mode;
}

@property int alertTag;
@property(retain) NSError * creationError;
@property <GKTurnBasedInviteViewControllerDelegate> * delegate;
@property(retain) NSMutableDictionary * inviteMessageDictionary;
@property int mode;

- (int)alertTag;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)cancel;
- (void)cleanupStateForCancelOrError;
- (void)createGameWithPlayersToInvite:(id)arg1;
- (id)creationError;
- (void)dealloc;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatchID:(id)arg1;
- (id)inviteMessageDictionary;
- (void)invitePlayers:(id)arg1;
- (int)mode;
- (void)playNow;
- (void)setAlertTag:(int)arg1;
- (void)setCreationError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInviteMessageDictionary:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setPlayerRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end
