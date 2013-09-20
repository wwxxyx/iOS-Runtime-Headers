/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _collapsedRect;
    BOOL _withKeyboard;
}

- (void)_collapse:(id)arg1;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (BOOL)_shouldShowHideKeyboard;
- (BOOL)_shouldUseFullMetrics;
- (id)activeCandidateList;
- (void)candidatesDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCandidateViewExtended:(BOOL)arg1;

@end
