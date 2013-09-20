/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, PLSyncProgressView, UILabel;

@interface PUPhotosGlobalFooterView : UICollectionReusableView {
    unsigned int _imageCount;
    int _importOperation;
    unsigned int _otherCount;
    unsigned int _pendingCount;
    int _style;
    NSString *_subtitle;
    UILabel *_subtitleLabel;
    PLSyncProgressView *_syncProgressView;
    UILabel *_titleLabel;
    unsigned int _videoCount;
}

@property int style;
@property(retain) NSString * subtitle;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)layoutSubviews;
- (void)setImageCount:(unsigned int)arg1 videoCount:(unsigned int)arg2 otherCount:(unsigned int)arg3;
- (void)setPendingCount:(unsigned int)arg1 importOperation:(int)arg2;
- (void)setStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (id)subtitle;

@end
