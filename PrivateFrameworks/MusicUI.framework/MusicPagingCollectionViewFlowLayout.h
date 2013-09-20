/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicPagingCollectionViewFlowLayout : UICollectionViewFlowLayout {
    float _distanceFromCenterForMinimumAlpha;
    float _minimumCellAlpha;
    int _numberOfItemsPerPage;
}

@property float distanceFromCenterForMinimumAlpha;
@property float minimumCellAlpha;
@property int numberOfItemsPerPage;

- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (float)distanceFromCenterForMinimumAlpha;
- (int)indexOfItemClosestToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)minimumCellAlpha;
- (int)numberOfItemsPerPage;
- (void)setDistanceFromCenterForMinimumAlpha:(float)arg1;
- (void)setMinimumCellAlpha:(float)arg1;
- (void)setNumberOfItemsPerPage:(int)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1 withScrollingVelocity:(struct CGPoint { float x1; float x2; })arg2;

@end
