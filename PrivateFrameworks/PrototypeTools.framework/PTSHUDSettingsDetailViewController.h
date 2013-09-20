/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class UITextField, UIView, _UISettings;

@interface PTSHUDSettingsDetailViewController : UIViewController {
    UIView *_detailsView;
    UIView *_detailsViewContainer;
    BOOL _edited;
    UITextField *_nameTextField;
    _UISettings *_settings;
}

@property(retain) UIView * detailsView;
@property(retain) UIView * detailsViewContainer;
@property BOOL edited;
@property(retain) UITextField * nameTextField;
@property(retain) _UISettings * settings;

- (void).cxx_destruct;
- (id)detailsView;
- (id)detailsViewContainer;
- (BOOL)edited;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)nameTextField;
- (void)setDetailsView:(id)arg1;
- (void)setDetailsViewContainer:(id)arg1;
- (void)setEdited:(BOOL)arg1;
- (void)setNameTextField:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateDetailsView;
- (void)viewDidLoad;

@end
