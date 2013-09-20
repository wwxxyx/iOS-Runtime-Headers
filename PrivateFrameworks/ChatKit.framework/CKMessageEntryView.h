/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKMessageEntryViewDelegate>, CKComposition, CKMessageEntryContentView, NSString, UIButton, UILabel, UIView, _UIBackdropView, _UITextFieldRoundedRectBackgroundViewNeue;

@interface CKMessageEntryView : UIView <CKMessageEntryContentViewDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    int _animationState;
    _UIBackdropView *_backdropView;
    BOOL _characterCountHidden;
    UILabel *_characterCountLabel;
    } _characterCountSize;
    CKMessageEntryContentView *_contentView;
    _UITextFieldRoundedRectBackgroundViewNeue *_coverView;
    <CKMessageEntryViewDelegate> *_delegate;
    BOOL _dimmed;
    UIView *_dimmingView;
    UIView *_knockoutCoverView;
    UIButton *_photoButton;
    } _photoButtonSize;
    UIButton *_sendButton;
    BOOL _sendButtonColor;
    } _sendButtonSize;
    } _sendTextAlignmentInsets;
    BOOL _shouldShowCharacterCount;
    BOOL _shouldShowPhotoButton;
    BOOL _shouldShowSubject;
}

@property int animationState;
@property(retain) _UIBackdropView * backdropView;
@property(getter=isCharacterCountHidden) BOOL characterCountHidden;
@property(retain) UILabel * characterCountLabel;
@property struct CGSize { float x1; float x2; } characterCountSize;
@property(retain) CKComposition * composition;
@property(retain) CKMessageEntryContentView * contentView;
@property(retain) _UITextFieldRoundedRectBackgroundViewNeue * coverView;
@property <CKMessageEntryViewDelegate> * delegate;
@property(getter=isDimmed) BOOL dimmed;
@property(retain) UIView * knockoutCoverView;
@property(retain) UIButton * photoButton;
@property struct CGSize { float x1; float x2; } photoButtonSize;
@property(copy) NSString * placeholderText;
@property(retain) UIButton * sendButton;
@property BOOL sendButtonColor;
@property struct CGSize { float x1; float x2; } sendButtonSize;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sendTextAlignmentInsets;
@property BOOL shouldShowCharacterCount;
@property BOOL shouldShowPhotoButton;
@property BOOL shouldShowSubject;

+ (float)contentViewPortraitWidth;

- (float)_accessoryViewFadeDuration;
- (void)animateKnockedOutTextField;
- (int)animationState;
- (id)backdropView;
- (id)characterCountLabel;
- (struct CGSize { float x1; float x2; })characterCountSize;
- (id)composition;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentTextAlignmentInsets;
- (id)contentView;
- (id)coverView;
- (void)dealloc;
- (id)delegate;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 shouldShowSubject:(BOOL)arg2 shouldShowPhotoButton:(BOOL)arg3 shouldShowCharacterCount:(BOOL)arg4;
- (BOOL)isCharacterCountHidden;
- (BOOL)isDimmed;
- (id)knockoutCoverView;
- (void)layoutSubviews;
- (BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1;
- (void)messageEntryContentViewDidChange:(id)arg1;
- (BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (id)photoButton;
- (struct CGSize { float x1; float x2; })photoButtonSize;
- (float)placeholderHeight;
- (id)placeholderText;
- (void)send:(id)arg1;
- (id)sendButton;
- (BOOL)sendButtonColor;
- (struct CGSize { float x1; float x2; })sendButtonSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sendTextAlignmentInsets;
- (void)setAnimationState:(int)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setCharacterCountHidden:(BOOL)arg1;
- (void)setCharacterCountLabel:(id)arg1;
- (void)setCharacterCountSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setComposition:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKnockoutCoverView:(id)arg1;
- (void)setKnocksOutTextField:(BOOL)arg1;
- (void)setPhotoButton:(id)arg1;
- (void)setPhotoButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setSendButtonColor:(BOOL)arg1;
- (void)setSendButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSendTextAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setShouldShowCharacterCount:(BOOL)arg1;
- (void)setShouldShowPhotoButton:(BOOL)arg1;
- (void)setShouldShowSubject:(BOOL)arg1;
- (BOOL)shouldShowCharacterCount;
- (BOOL)shouldShowPhotoButton;
- (BOOL)shouldShowSubject;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
