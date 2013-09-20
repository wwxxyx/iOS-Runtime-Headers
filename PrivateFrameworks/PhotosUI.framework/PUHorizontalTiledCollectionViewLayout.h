/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUHorizontalTiledCollectionViewLayoutDelegate>, PUCollectionViewData;

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    PUCollectionViewData *_data;
    <PUHorizontalTiledCollectionViewLayoutDelegate> *_delegate;
    float _interitemSpacing;
    } _itemsContentInset;
}

@property <PUHorizontalTiledCollectionViewLayoutDelegate> * delegate;
@property(readonly) BOOL hasReferenceIndexPath;
@property float interitemSpacing;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } itemsContentInset;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (void)_ensureIndexPath:(id)arg1 inData:(id)arg2;
- (void)_ensureRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inData:(id)arg2 outDeltaOriginX:(float*)arg3;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)_next:(int)arg1 indexPathsFollowingIndexPath:(id)arg2 direction:(int)arg3;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_updateLayoutData:(id)arg1 inDirection:(int)arg2 outDeltaOriginX:(float*)arg3;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)delegate;
- (BOOL)hasReferenceIndexPath;
- (id)init;
- (float)interitemSpacing;
- (void)invalidateCachedLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })itemsContentInset;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)setDelegate:(id)arg1;
- (void)setInteritemSpacing:(float)arg1;
- (void)setItemsContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
