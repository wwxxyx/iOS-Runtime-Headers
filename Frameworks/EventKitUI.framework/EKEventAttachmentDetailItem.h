/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray;

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate> {
    NSArray *_cellControllers;
}

- (void).cxx_destruct;
- (void)_cleanUpCellControllers;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfSubitems;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
