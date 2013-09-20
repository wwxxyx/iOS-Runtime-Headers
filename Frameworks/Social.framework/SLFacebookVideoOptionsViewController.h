/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class <SLFacebookVideoOptionsDelegate>, NSArray, NSURL, SLVideoQualityOption;

@interface SLFacebookVideoOptionsViewController : UITableViewController {
    <SLFacebookVideoOptionsDelegate> *_delegate;
    NSArray *_qualityOptions;
    SLVideoQualityOption *_selectedOption;
    NSURL *_videoAssetURL;
}

@property <SLFacebookVideoOptionsDelegate> * delegate;

- (void).cxx_destruct;
- (void)_generateQualityOptionsWithAssetURL:(id)arg1;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)initWithVideoAssetURL:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedQualityOption:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

@end
