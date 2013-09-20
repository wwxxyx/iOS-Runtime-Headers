/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class ACAccountStore, NSArray, NoteContext;

@interface AccountUtilities : NSObject {
    NSArray *_accountIDsEnabledForNotes;
    ACAccountStore *_accountStore;
    NoteContext *_noteContext;
}

+ (id)sharedAccountUtilities;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)accountIDsEnabledForNotes;
- (id)accountStore;
- (id)accountsEnabledForNotes;
- (void)dealloc;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;
- (id)init;
- (BOOL)localNotesExist;

@end
