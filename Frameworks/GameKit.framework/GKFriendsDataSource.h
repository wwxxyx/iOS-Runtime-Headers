/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFriendsDataSource : GKBasicCollectionViewDataSource {
    int _kind;
}

@property int kind;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)kind;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeItemAtIndexPath:(id)arg1;
- (id)sectionTitle;
- (void)setKind:(int)arg1;

@end
