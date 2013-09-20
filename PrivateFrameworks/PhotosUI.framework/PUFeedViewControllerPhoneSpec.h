/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec {
}

- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; }*)arg1;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(int)arg2;
- (void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(int)arg2;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; }*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(BOOL)arg4 collectionViewType:(int)arg5;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(int)arg5 collectionViewType:(int)arg6 animated:(BOOL)arg7;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsetsForSectionType:(int)arg1 collectionViewType:(int)arg2;
- (id)defaultTextAttributesForCollectionViewType:(int)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(int)arg1;
- (void)getReferenceMaximumLength:(float*)arg1 minimumNumberOfTilesToOmit:(int*)arg2 forSectionType:(int)arg3 collectionViewType:(int)arg4;
- (id)gridSpec;
- (int)largeNumberOfSubjectsForLikes;
- (struct CGSize { float x1; float x2; })minimumVideoTileSize;
- (id)photoBrowserSpec;
- (id)photosPickerSpec;
- (int)promptType;
- (BOOL)shouldHideBarsInLandscape;
- (BOOL)shouldShowLikeButtonForCollectionViewType:(int)arg1;
- (BOOL)shouldShowSeeAllInSectionFootersInCollectionViewType:(int)arg1;
- (BOOL)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(int)arg1;
- (BOOL)shouldUseFullscreenLayout;
- (float)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (struct CGSize { float x1; float x2; })thumbnailSize;

@end
