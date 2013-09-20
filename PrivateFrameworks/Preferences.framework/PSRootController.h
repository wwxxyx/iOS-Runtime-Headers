/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableSet, PSSpecifier;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {
    BOOL _deallocating;
    unsigned char _hasTelephony;
    PSSpecifier *_specifier;
    NSMutableSet *_tasks;
}

+ (id)domainForSpecifier:(id)arg1;
+ (BOOL)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5;
+ (id)readPreferenceValue:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
+ (void)writePreference:(id)arg1;

- (void)_delayedControllerReleaseAfterPop:(id)arg1;
- (void)addTask:(id)arg1;
- (id)aggregateDictionaryPath;
- (BOOL)busy;
- (BOOL)canBeShownFromSuspendedState;
- (id)contentViewForTopController;
- (void)dealloc;
- (BOOL)deallocating;
- (void)didDismissFormSheetView;
- (void)didDismissPopupView;
- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (void)handleURL:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)parentController;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushController:(id)arg1;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)sendWillBecomeActive;
- (void)sendWillResignActive;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (id)specifier;
- (id)specifiers;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (void)statusBarWillChangeHeight:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)suspend;
- (void)taskFinished:(id)arg1;
- (BOOL)taskIsRunning:(id)arg1;
- (id)tasksDescription;
- (void)willBecomeActive;
- (void)willDismissFormSheetView;
- (void)willDismissPopupView;
- (void)willResignActive;
- (void)willUnlock;

@end
