/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout {
    UIColor *_evenColor;
    int _numberOfColumns;
    UIColor *_oddColor;
    float _rowHeight;
}

@property(copy) UIColor * evenRowBackgroundColor;
@property int numberOfColumns;
@property(copy) UIColor * oddRowBackgroundColor;
@property float rowHeight;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)evenRowBackgroundColor;
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)numberOfColumns;
- (id)oddRowBackgroundColor;
- (float)rowHeight;
- (void)setEvenRowBackgroundColor:(id)arg1;
- (void)setNumberOfColumns:(int)arg1;
- (void)setOddRowBackgroundColor:(id)arg1;
- (void)setRowHeight:(float)arg1;

@end
