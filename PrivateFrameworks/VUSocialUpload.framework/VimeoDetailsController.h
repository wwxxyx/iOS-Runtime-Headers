/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@class <VimeoComposeOptionViewDelegate>, NSArray, NSIndexPath, NSMutableArray, NSString, UITableViewCell, UITextView;

@interface VimeoDetailsController : UITableViewController <UITextFieldDelegate> {
    <VimeoComposeOptionViewDelegate> *_delegate;
    UITableViewCell *_descriptionCell;
    UITextView *_descriptionTextView;
    NSIndexPath *_indexPathForPendingFirstResponder;
    NSArray *_privacyLevels;
    int _privacySetting;
    NSMutableArray *_tags;
    int _videoSize;
    NSArray *_videoSizeFormatStrings;
    NSArray *_videoSizeStrings;
    NSMutableArray *_videoSizes;
}

@property <VimeoComposeOptionViewDelegate> * delegate;
@property(readonly) NSString * description;
@property(retain) NSIndexPath * indexPathForPendingFirstResponder;
@property(retain) NSArray * privacyLevels;
@property(readonly) int privacySetting;
@property(readonly) NSArray * tags;
@property(readonly) int videoSize;
@property(retain) NSArray * videoSizeFormatStrings;
@property(retain) NSArray * videoSizeStrings;
@property(readonly) NSMutableArray * videoSizes;

+ (int)defaultVideoSize;

- (id)_tagIndexPathForTextField:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)indexPathForPendingFirstResponder;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)privacyLevels;
- (int)privacySetting;
- (void)setDelegate:(id)arg1;
- (void)setIndexPathForPendingFirstResponder:(id)arg1;
- (void)setPrivacyLevels:(id)arg1;
- (void)setVideoSizeFormatStrings:(id)arg1;
- (void)setVideoSizeStrings:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tags;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (int)videoSize;
- (id)videoSizeFormatStrings;
- (id)videoSizeStrings;
- (id)videoSizes;
- (void)viewWillDisappear:(BOOL)arg1;

@end
