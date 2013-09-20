/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary;

@interface GKUIAlertView : UIAlertView <UIAlertViewDelegate, UITextFieldDelegate> {
    NSMutableDictionary *_buttonHandlers;
    int _buttonIndexForReturnKey;
    id _dismissHandler;
}

@property(retain) NSMutableDictionary * buttonHandlers;
@property int buttonIndexForReturnKey;
@property(copy) id dismissHandler;

+ (id)_gkAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(id)arg5;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2;
+ (id)showError:(id)arg1 withTitle:(id)arg2 defaultMessage:(id)arg3;

- (int)addButtonWithTitle:(id)arg1 handler:(id)arg2;
- (int)addCancelButtonWithTitle:(id)arg1 handler:(id)arg2;
- (int)addCancelButtonWithTitle:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)buttonHandlers;
- (int)buttonIndexForReturnKey;
- (void)dealloc;
- (id)dismissHandler;
- (void)setButtonHandlers:(id)arg1;
- (void)setButtonIndexForReturnKey:(int)arg1;
- (void)setDismissHandler:(id)arg1;
- (BOOL)shouldRetainSelf;
- (void)show;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
