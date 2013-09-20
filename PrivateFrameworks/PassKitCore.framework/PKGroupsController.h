/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class <PKGroupsControllerDelegate>, NSArray, NSMutableArray, NSMutableDictionary, PKCatalog, PKPassLibrary;

@interface PKGroupsController : NSObject <PKPassLibraryDelegate> {
    PKCatalog *_catalogBeforeReordering;
    <PKGroupsControllerDelegate> *_delegate;
    BOOL _enqueueRemoteUpdates;
    NSMutableArray *_enqueuedUpdates;
    NSMutableDictionary *_groupIDsByPassUniqueID;
    NSMutableArray *_groups;
    NSMutableDictionary *_groupsByGroupID;
    NSMutableDictionary *_indicesByGroupID;
    BOOL _limitedMode;
    NSArray *_localPasses;
    PKPassLibrary *_passLibrary;
    NSMutableDictionary *_passesByUniqueID;
    BOOL _suppressRemoteUpdates;
}

@property <PKGroupsControllerDelegate> * delegate;

- (id)_copyRemoteCatalog;
- (unsigned int)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned int)arg3;
- (void)_fixIndex:(unsigned int)arg1;
- (void)_fixIndicesFrom:(unsigned int)arg1 through:(unsigned int)arg2;
- (void)_fixIndicesFrom:(unsigned int)arg1;
- (BOOL)_groupIDIsNew:(id)arg1;
- (unsigned int)_indexOfGroupID:(id)arg1;
- (void)_insertGroup:(id)arg1 atIndex:(unsigned int)arg2 notify:(BOOL)arg3;
- (void)_insertLocalGroupsIntoCatalog:(id)arg1;
- (void)_moveGroup:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3 notify:(BOOL)arg4;
- (id)_passesDictionaryFromSet:(id)arg1;
- (void)_performEnqueuedUpdates;
- (void)_performOrEnqueueUpdate:(id)arg1;
- (void)_placeGroup:(id)arg1 atIndex:(unsigned int)arg2 notify:(BOOL)arg3;
- (void)_removeGroup:(id)arg1 notify:(BOOL)arg2;
- (id)_updateAndCreateGroupsWithCatalog:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3;
- (void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3;
- (void)addLocalPasses:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enableRemoteUpdates;
- (id)groupAtIndex:(unsigned int)arg1;
- (unsigned int)groupCount;
- (unsigned int)groupIndexForPassUniqueID:(id)arg1;
- (void)handleUserPassDelete:(id)arg1;
- (void)handleUserPassIngestionWithData:(id)arg1 completion:(id)arg2;
- (unsigned int)indexOfGroup:(id)arg1;
- (id)init;
- (id)initLimited;
- (void)loadGroupsSynchronously;
- (void)loadGroupsWithCompletion:(id)arg1;
- (void)moveGroupAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
- (void)reloadGroups;
- (void)reloadGroupsAndNotify:(BOOL)arg1 completion:(id)arg2;
- (void)reloadGroupsWithCompletion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)suppressRemoteUpdates:(BOOL)arg1;

@end
