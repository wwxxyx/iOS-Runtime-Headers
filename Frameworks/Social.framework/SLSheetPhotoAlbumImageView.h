/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class CALayer, NSMutableArray, NSString, UILabel;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {
    NSString *_forcedItemCountString;
    CALayer *_frameLayer;
    int _frameQuantity;
    NSMutableArray *_frameViews;
    CALayer *_glossLayer;
    UILabel *_imageCountLabel;
    int _imageQuantity;
    int _numPreviewImagesAdded;
    BOOL _updateLayout;
}

+ (unsigned int)displayedFrameMaximum;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_currentSize;
- (id)_itemCountString;
- (BOOL)_shouldDisplayImageCountLabel;
- (void)addPreviewImage:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)barMetricsDidChange;
- (id)initWithPrincipalAttachments:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setItemCountString:(id)arg1;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (void)sizeToFit;

@end
