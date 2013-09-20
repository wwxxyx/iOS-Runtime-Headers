/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface IMAccountController : NSObject {
    NSMutableDictionary *_accountMap;
    NSMutableArray *_accounts;
    BOOL _cachesEnabled;
    BOOL _isReadOnly;
    NSArray *_operationalAccountsCache;
    NSMutableDictionary *_serviceToAccountsMap;
    NSMutableDictionary *_serviceToActiveAccountsMap;
    NSMutableDictionary *_serviceToConnectedAccountsMap;
    NSMutableDictionary *_serviceToOperationalAccountsMap;
}

@property(readonly) NSMutableArray * _accounts;
@property(readonly) NSArray * accounts;
@property(readonly) NSArray * activeAccounts;
@property(readonly) id bestAccountForStatus;
@property(readonly) NSArray * connectedAccounts;
@property(readonly) int numberOfAccounts;
@property(readonly) NSArray * operationalAccounts;

+ (id)bestAccountFromAccounts:(id)arg1;
+ (id)sharedInstance;

- (id)__ck_bestAccountForAddress:(id)arg1;
- (id)__ck_bestAccountForAddresses:(id)arg1;
- (id)__ck_defaultAccountForService:(id)arg1;
- (id)__ck_operationalPhoneAccountForService:(id)arg1;
- (id)__iCloudSystemAccountForService:(id)arg1;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (id)_accounts;
- (void)_activeAccountChanged:(id)arg1;
- (id)_bestOperationalAccountForSendingForService:(id)arg1;
- (BOOL)_deactivateAccount:(id)arg1;
- (BOOL)_deactivateAccounts:(id)arg1;
- (void)_disableCache;
- (void)_enableCache;
- (void)_rebuildOperationalAccountsCache:(BOOL)arg1;
- (BOOL)accountActive:(id)arg1;
- (id)accountAtIndex:(int)arg1;
- (BOOL)accountConnected:(id)arg1;
- (BOOL)accountConnecting:(id)arg1;
- (id)accountForUniqueID:(id)arg1;
- (id)accounts;
- (id)accountsForService:(id)arg1;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2;
- (BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)activateAccount:(id)arg1;
- (BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)activateAccounts:(id)arg1;
- (BOOL)activateAndHandleReconnectAccount:(id)arg1;
- (BOOL)activateAndHandleReconnectAccounts:(id)arg1;
- (id)activeAccounts;
- (id)activeAccountsForService:(id)arg1;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2;
- (BOOL)addAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)addAccount:(id)arg1;
- (id)aimAccount;
- (void)autoLogin;
- (id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
- (id)bestAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestAccountForService:(id)arg1;
- (id)bestAccountForStatus;
- (id)bestAccountWithCapability:(unsigned long long)arg1;
- (id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestActiveAccountForService:(id)arg1;
- (id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestConnectedAccountForService:(id)arg1;
- (id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestOperationalAccountForService:(id)arg1;
- (BOOL)canActivateAccount:(id)arg1;
- (BOOL)canActivateAccounts:(id)arg1;
- (BOOL)canDeleteAccount:(id)arg1;
- (id)connectedAccounts;
- (id)connectedAccountsForService:(id)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)deactivateAccount:(id)arg1;
- (BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)deactivateAccounts:(id)arg1;
- (void)dealloc;
- (BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)deleteAccount:(id)arg1;
- (id)init;
- (id)jabberAccount;
- (id)mostLoggedInAccount;
- (int)numberOfAccounts;
- (id)operationalAccounts;
- (id)operationalAccountsForService:(id)arg1;
- (id)operationalAccountsWithCapability:(unsigned long long)arg1;
- (BOOL)readOnly;
- (void)setReadOnly:(BOOL)arg1;

@end
