/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKJavascriptHostDelegate>, GKJavascriptAccount, GKJavascriptEnvironment, GKJavascriptGame, WebScriptObject;

@interface GKJavascriptHost : NSObject {
    GKJavascriptAccount *_account;
    GKJavascriptEnvironment *_environment;
    GKJavascriptGame *_game;
    WebScriptObject *_navBar;
    <GKJavascriptHostDelegate> *_weakDelegate;
}

@property(retain) GKJavascriptAccount * account;
@property <GKJavascriptHostDelegate> * delegate;
@property(retain) GKJavascriptEnvironment * environment;
@property(retain) GKJavascriptGame * game;
@property(retain) WebScriptObject * navBar;
@property(readonly) int protocolVersion;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)account;
- (id)attributeKeys;
- (void)dealloc;
- (id)delegate;
- (id)environment;
- (id)game;
- (id)initWithPlayer:(id)arg1 authToken:(id)arg2 game:(id)arg3;
- (id)navBar;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 secondaryButton:(id)arg4;
- (void)promptWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 secondaryButton:(id)arg4 options:(id)arg5;
- (int)protocolVersion;
- (void)reauthenticate:(id)arg1;
- (void)saveFile:(id)arg1 suggestedFilename:(id)arg2 mimeType:(id)arg3;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)showKeyboard:(BOOL)arg1;

@end
