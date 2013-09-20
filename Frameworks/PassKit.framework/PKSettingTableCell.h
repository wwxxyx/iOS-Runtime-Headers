/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UISwitch;

@interface PKSettingTableCell : UITableViewCell {
    SEL _action;
    UISwitch *_settingSwitch;
    id _target;
}

@property SEL action;
@property(getter=isOn) BOOL on;
@property id target;

- (SEL)action;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (BOOL)isOn;
- (void)layoutSubviews;
- (void)setAction:(SEL)arg1;
- (void)setOn:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
