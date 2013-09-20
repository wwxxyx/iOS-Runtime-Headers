/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class <WebQuotaManager>, WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject {
    <WebQuotaManager> *_applicationCacheQuotaManager;
    <WebQuotaManager> *_databaseQuotaManager;
    WebSecurityOriginPrivate *_private;
}

- (struct SecurityOrigin { int x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; unsigned short x6; boolx7; boolx8; boolx9; boolx10; int x11; boolx12; boolx13; }*)_core;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { int x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; unsigned short x6; boolx7; boolx8; boolx9; boolx10; int x11; boolx12; boolx13; }*)arg1;
- (id)applicationCacheQuotaManager;
- (id)databaseIdentifier;
- (id)databaseQuotaManager;
- (void)dealloc;
- (id)domain;
- (void)finalize;
- (id)host;
- (id)initWithURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned short)port;
- (id)protocol;
- (unsigned long long)quota;
- (id)safari_userVisibleName;
- (void)setQuota:(unsigned long long)arg1;
- (id)stringValue;
- (id)toString;
- (unsigned long long)usage;
- (id)webui_userVisibleName;

@end
