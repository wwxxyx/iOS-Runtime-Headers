/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UILabel;

@interface SBPasscodeTextField : UITextField {
    UILabel *_hiddenLabel;
    float _letterSpacing;
    BOOL _usesLargeClearButton;
}

@property float letterSpacing;
@property BOOL usesLargeClearButton;

- (void)_endedEditing;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)_style;
- (void)attachFieldEditor:(id)arg1;
- (BOOL)becomeFirstResponder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)dealloc;
- (float)letterSpacing;
- (BOOL)resignFirstResponder;
- (void)setLetterSpacing:(float)arg1;
- (void)setUsesLargeClearButton:(BOOL)arg1;
- (BOOL)usesLargeClearButton;

@end
