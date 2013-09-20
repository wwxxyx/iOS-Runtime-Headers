/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSLayoutConstraint, NSString, UIButton, UILabel, UIView, _UIBackdropView;

@interface _UIContentUnavailableView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    UIButton *_actionButton;
    _UIBackdropView *_backdrop;
    id _buttonAction;
    NSString *_buttonTitle;
    UIView *_containerView;
    UIView *_fromSnapshot;
    } _fromSnapshotSize;
    NSString *_message;
    UILabel *_messageLabel;
    unsigned int _style;
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_toSnapshot;
    NSLayoutConstraint *messageToButtonConstraint;
    NSLayoutConstraint *titleToMessageConstraint;
}

@property(copy) id buttonAction;
@property(copy) NSString * buttonTitle;
@property(copy) NSString * message;
@property(copy) NSString * title;

- (void)_actionButtonPressed:(id)arg1;
- (id)_buttonBackgroundImageForStyle:(unsigned int)arg1;
- (void)_updateViewHierarchy;
- (id)buttonAction;
- (id)buttonTitle;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 style:(unsigned int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)message;
- (void)setButtonAction:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateConstraints;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;

@end
