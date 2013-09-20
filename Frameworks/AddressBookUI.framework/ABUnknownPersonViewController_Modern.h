/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, <ABUnknownPersonViewControllerDelegate>, ABContactViewController, ABPersonTableViewActionsDelegate, ABPersonTableViewDataSource, ABPersonTableViewSharingDelegate, ABPersonViewControllerHelper, ABUIPerson, NSArray, NSMutableArray, NSString, UIActionSheet, UIFont, UIImage, UITableView, UIView;

@interface ABUnknownPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate> {
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    UIActionSheet *_addAllVCardsSheet;
    void *_addressBook;
    BOOL _allowsActions;
    BOOL _allowsAddingToAddressBook;
    BOOL _allowsConferencing;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyFaceTimeActions;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsSendingTextMessage;
    BOOL _allowsSharing;
    NSString *_alternateName;
    ABContactViewController *_contactViewController;
    ABPersonTableViewDataSource *_dataSource;
    void *_displayedPerson;
    NSArray *_displayedProperties;
    ABUIPerson *_displayedUIPerson;
    ABPersonViewControllerHelper *_helper;
    NSString *_message;
    UIView *_personHeaderView;
    NSString *_primaryCNProperty;
    NSString *_primaryCountryCode;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    int _style;
    <ABStyleProvider> *_styleProvider;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    UIActionSheet *_unmergedAlertSheet;
    NSMutableArray *_unmergedRecords;
    UITableView *_vCardTableView;
    NSArray *_vCards;
    NSArray *_vCardsProperties;
}

@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(retain) UIActionSheet * addAllVCardsSheet;
@property void* addressBook;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property BOOL allowsConferencing;
@property BOOL allowsContactBlocking;
@property BOOL allowsOnlyFaceTimeActions;
@property BOOL allowsOnlyPhoneActions;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSharing;
@property(copy) NSString * alternateName;
@property(copy) NSString * attribution;
@property BOOL badgeEmailPropertiesForMailVIP;
@property(readonly) BOOL canShareContact;
@property(retain) ABContactViewController * contactViewController;
@property(retain) UIView * customFooterView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customMessageView;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property void* displayedPerson;
@property(copy) NSArray * displayedProperties;
@property(retain) ABUIPerson * displayedUIPerson;
@property(readonly) ABPersonViewControllerHelper * helper;
@property BOOL isLocation;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(retain) UIView * personHeaderView;
@property(retain) NSString * primaryCNProperty;
@property(retain) NSString * primaryCountryCode;
@property BOOL savesNewContactOnSuspend;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) NSString * shareLocationURL;
@property(copy) NSString * shareMessageBody;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageSubject;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property int style;
@property(retain) <ABStyleProvider> * styleProvider;
@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property(retain) UIActionSheet * unmergedAlertSheet;
@property(retain) NSMutableArray * unmergedRecords;
@property(retain) UITableView * vCardTableView;
@property(retain) NSArray * vCards;
@property(retain) NSArray * vCardsProperties;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (int)abViewControllerType;
- (float)ab_heightToFitForViewInPopoverView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)actionsDelegate;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(int)arg4 destructive:(BOOL)arg5;
- (id)addAllVCardsSheet;
- (void)addToExistingContacts;
- (void)addUnmergedRecords;
- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsConferencing;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsOnlyFaceTimeActions;
- (BOOL)allowsOnlyPhoneActions;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSharing;
- (id)alternateName;
- (id)attribution;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (BOOL)canShareContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (id)contactViewController;
- (void)createNewContacts;
- (id)customFooterView;
- (id)customHeaderView;
- (id)customMessageView;
- (id)dataSource;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void*)displayedPerson;
- (id)displayedProperties;
- (id)displayedUIPerson;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)findMatchingCardsForRecord:(void*)arg1;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithVCardData:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isLocation;
- (void)loadContactViewController;
- (void)loadView;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)newActionButton;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)personHeaderView;
- (void)presentAddToContactsSheet;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentShareContactSheet;
- (id)primaryCNProperty;
- (id)primaryCountryCode;
- (id)primaryPropertyStringForContact:(id)arg1;
- (void)reloadImageData;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(int)arg3;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(int)arg6 destructive:(BOOL)arg7;
- (BOOL)savesNewContactOnSuspend;
- (void)setAddAllVCardsSheet:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)setAllowsOnlyFaceTimeActions:(BOOL)arg1;
- (void)setAllowsOnlyPhoneActions:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setContactViewController:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setIsLocation:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPrimaryCNProperty:(id)arg1;
- (void)setPrimaryCountryCode:(id)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setPrimaryProperty:(int)arg1;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setUnmergedAlertSheet:(id)arg1;
- (void)setUnmergedRecords:(id)arg1;
- (void)setVCardTableView:(id)arg1;
- (void)setVCards:(id)arg1;
- (void)setVCardsProperties:(id)arg1;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (id)shareLocationSnapshotImage;
- (id)shareLocationURL;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (id)sharingDelegate;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (void)showUnmergedContactsAlert;
- (int)style;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)unknownPersonViewDelegate;
- (id)unmergedAlertSheet;
- (id)unmergedRecords;
- (id)vCardTableView;
- (id)vCards;
- (id)vCardsProperties;
- (id)willTweetLocationCallback;
- (id)willWeiboLocationCallback;

@end
