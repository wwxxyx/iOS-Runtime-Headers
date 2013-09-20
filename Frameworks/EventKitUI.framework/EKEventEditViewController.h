/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKEventEditViewDelegate>, EKEvent, EKEventEditor, EKEventStore, NSString, UIColor;

@interface EKEventEditViewController : UINavigationController {
    <EKEventEditViewDelegate> *_editViewDelegate;
    EKEventEditor *_editor;
    EKEvent *_event;
    NSString *_eventId;
    BOOL _showsTimeZone;
    EKEventStore *_store;
    int _transitionForModalViewPresentation;
}

@property BOOL canHideDoneAndCancelButtons;
@property <EKEventEditViewDelegate> * editViewDelegate;
@property(retain) EKEventEditor * editor;
@property(retain) UIColor * editorBackgroundColor;
@property float editorNavBarLeftContentInset;
@property float editorNavBarRightContentInset;
@property(retain) EKEvent * event;
@property(retain) EKEventStore * eventStore;
@property BOOL scrollToNotes;
@property BOOL showAttachments;
@property BOOL showsTimeZone;
@property int transitionForModalViewPresentation;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_storeChanged:(id)arg1;
- (BOOL)canHideDoneAndCancelButtons;
- (void)cancelEditing;
- (void)completeAndSave;
- (void)dealloc;
- (id)editViewDelegate;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (id)editor;
- (id)editorBackgroundColor;
- (float)editorNavBarLeftContentInset;
- (float)editorNavBarRightContentInset;
- (id)event;
- (id)eventStore;
- (void)handleTapOutside;
- (id)initWithEvent:(id)arg1 store:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(id)arg3;
- (void)refreshStartAndEndDates;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToNotes;
- (void)setCanHideDoneAndCancelButtons:(BOOL)arg1;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setEditorBackgroundColor:(id)arg1;
- (void)setEditorNavBarLeftContentInset:(float)arg1;
- (void)setEditorNavBarRightContentInset:(float)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setScrollToNotes:(BOOL)arg1;
- (void)setShowAttachments:(BOOL)arg1;
- (void)setShowsTimeZone:(BOOL)arg1;
- (void)setTransitionForModalViewPresentation:(int)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)showAttachments;
- (BOOL)showsTimeZone;
- (unsigned int)supportedInterfaceOrientations;
- (int)transitionForModalViewPresentation;
- (BOOL)willPresentDialogOnSave;

@end
