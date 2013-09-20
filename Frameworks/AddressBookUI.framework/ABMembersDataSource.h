/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABMembersDataSourceDelegate>, <ABStyleProvider>, ABBannerView, ABModel, ABUIPerson, NSMutableArray;

@interface ABMembersDataSource : NSObject <UITableViewDelegate, UITableViewDataSource> {
    void *_addressBook;
    ABBannerView *_bannerView;
    <ABMembersDataSourceDelegate> *_delegate;
    struct __CFDictionary { } *_displayableSectionHeaderToSectionHeader;
    struct __CFDictionary { } *_displayableSectionIndexToSectionIndex;
    ABUIPerson *_meCard;
    ABModel *_model;
    struct __CFDictionary { } *_sectionHeaderToDisplayableSectionHeader;
    struct __CFDictionary { } *_sectionHeaderToSortingIndex;
    NSMutableArray *_sectionIndexTitles;
    struct __CFDictionary { } *_sectionIndexToDisplayableSectionIndex;
    <ABStyleProvider> *_styleProvider;
}

@property void* addressBook;
@property <ABMembersDataSourceDelegate> * delegate;
@property(retain) ABModel * model;
@property(retain) <ABStyleProvider> * styleProvider;

- (void)_invalidateMeCard;
- (void*)addressBook;
- (id)bannerView;
- (void)createAllDisplayableSectionIndexAndHeaderCaches;
- (void)dealloc;
- (id)delegate;
- (id)displayableSectionHeaderFromSectionHeader:(id)arg1;
- (id)displayableSectionIndexFromSectionIndex:(id)arg1;
- (unsigned int)displayedMemberIndexForIndexPath:(id)arg1 inTableView:(id)arg2;
- (int)globalRowForBanner;
- (int)globalRowForDisplayedMemberIndex:(unsigned int)arg1;
- (id)indexPathForDisplayedMemberIndex:(unsigned int)arg1 inTableView:(id)arg2;
- (id)model;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct __CFDictionary { }*)sectionHeaderSortingIndices;
- (id)sectionIndexFromDisplayableSectionIndex:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setBannerView:(id)arg1 inTableView:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldShowGroups;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (id)titleForHeaderInSection:(int)arg1;

@end
