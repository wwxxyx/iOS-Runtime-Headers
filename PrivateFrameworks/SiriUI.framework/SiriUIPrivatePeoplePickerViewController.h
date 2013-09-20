/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class SAABPersonPicker, SiriUIObjectPickerViewController;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate> {
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}

- (void).cxx_destruct;
- (id)_pickerController;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (float)desiredHeightForTransparentFooterView;
- (float)desiredHeightForWidth:(float)arg1;
- (id)initWithSnippet:(id)arg1;
- (void)loadView;
- (void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
- (void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
- (void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
- (Class)transparentFooterViewClass;
- (id)viewControllerForPickerPresentation:(id)arg1;

@end
