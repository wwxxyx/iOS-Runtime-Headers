/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKEditItemViewControllerDelegate>, EKAttendeesListView, EKEvent;

@interface EKAttendeesListViewController : UIViewController <EKEditItemViewControllerProtocol> {
    EKAttendeesListView *_contentView;
    EKEvent *_event;
}

@property <EKEditItemViewControllerDelegate> * editDelegate;

- (void).cxx_destruct;
- (void)attendeeSelected:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (id)title;
- (void)viewWillAppear:(BOOL)arg1;

@end
