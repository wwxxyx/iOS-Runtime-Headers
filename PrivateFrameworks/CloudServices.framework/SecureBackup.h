/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@class NSObject<OS_dispatch_queue>;

@interface SecureBackup : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *syncQueue;
}

@property NSObject<OS_dispatch_queue> * replyQueue;
@property NSObject<OS_dispatch_queue> * syncQueue;

- (void).cxx_destruct;
- (id)_CreateSecureBackupConnection:(id)arg1;
- (void)_backupWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_cachePassphraseWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_changeSMSTargetWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_disableWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_enableWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_getAccountInfoWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_recoverWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_startSMSChallengeWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_uncachePassphraseWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)backupWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)backupWithInfo:(id)arg1;
- (void)cachePassphraseWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)cachePassphraseWithInfo:(id)arg1;
- (void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)changeSMSTargetWithInfo:(id)arg1;
- (void)disableWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)disableWithInfo:(id)arg1;
- (void)enableWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)enableWithInfo:(id)arg1;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlock:(id)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(id)arg2;
- (id)getAccountInfoWithInfo:(id)arg1 results:(id*)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlock:(id)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(id)arg2;
- (id)recoverWithInfo:(id)arg1 results:(id*)arg2;
- (id)replyQueue;
- (void)setReplyQueue:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(id)arg2;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(id)arg2;
- (id)startSMSChallengeWithInfo:(id)arg1 results:(id*)arg2;
- (id)syncQueue;
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)uncachePassphraseWithInfo:(id)arg1;

@end
