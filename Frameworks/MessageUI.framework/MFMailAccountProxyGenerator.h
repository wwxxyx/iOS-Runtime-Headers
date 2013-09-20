/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject {
    BOOL _allowsRestrictedAccounts;
    _MFMailAccountProxySource *_proxySource;
}

- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)allAccountProxies;
- (void)dealloc;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)init;
- (id)initWithAllowsRestrictedAccounts:(BOOL)arg1;

@end
