/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSIndexPath;

@interface GKMappedIndexPath : NSIndexPath {
    NSIndexPath *_sourceIndexPath;
    id _tag;
}

@property(copy) NSIndexPath * sourceIndexPath;
@property(retain) id tag;

+ (id)indexPathForItem:(int)arg1 inSection:(int)arg2 fromSourceIndexPath:(id)arg3 withTag:(id)arg4;

- (void)dealloc;
- (id)description;
- (void)setSourceIndexPath:(id)arg1;
- (void)setTag:(id)arg1;
- (id)sourceIndexPath;
- (id)tag;

@end
