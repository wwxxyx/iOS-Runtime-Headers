/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABRepeatingGradientSeparatorView, UITextField, UIView;

@interface ABSplitTextFieldCell : UITableViewCell {
    ABRepeatingGradientSeparatorView *_separator;
    UIView *_spacer;
    UITextField *_textFieldLeft;
    UITextField *_textFieldRight;
}

@property(retain) ABRepeatingGradientSeparatorView * separator;
@property(retain) UIView * spacer;
@property(retain) UITextField * textFieldLeft;
@property(retain) UITextField * textFieldRight;

+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)separator;
- (void)setNeedsUpdateConstraints;
- (void)setSeparator:(id)arg1;
- (void)setSpacer:(id)arg1;
- (void)setTextFieldLeft:(id)arg1;
- (void)setTextFieldRight:(id)arg1;
- (id)spacer;
- (id)textFieldLeft;
- (id)textFieldRight;
- (void)updateConstraints;

@end
