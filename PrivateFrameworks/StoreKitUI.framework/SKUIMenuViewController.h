/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIMenuViewControllerDelegate>, NSArray, UIColor;

@interface SKUIMenuViewController : UITableViewController {
    UIColor *_borderColor;
    <SKUIMenuViewControllerDelegate> *_delegate;
    int _indexOfCheckedTitle;
    NSArray *_menuTitles;
}

@property <SKUIMenuViewControllerDelegate> * delegate;
@property int indexOfCheckedTitle;
@property(readonly) NSArray * menuTitles;

- (void).cxx_destruct;
- (id)delegate;
- (int)indexOfCheckedTitle;
- (id)initWithMenuTitles:(id)arg1;
- (void)loadView;
- (id)menuTitles;
- (void)setDelegate:(id)arg1;
- (void)setIndexOfCheckedTitle:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
