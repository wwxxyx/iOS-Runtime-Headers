/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {
    NSArray *_previewItems;
}

@property(copy) NSArray * previewItems;

- (id)currentPreviewItem;
- (void)dealloc;
- (id)init;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (id)previewItems;
- (void)setDataSource:(id)arg1;
- (void)setPreviewItems:(id)arg1;

@end
