/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class _GCACHomeButton;

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)name;
- (void)setPlayerIndex:(int)arg1;
- (void)toggleSuspendResume;

@end
