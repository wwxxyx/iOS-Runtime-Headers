/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPeoplePickerNavigationController, CNContact;

@interface ABContactAddToExistingContactAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate> {
    CNContact *_chosenContact;
    ABPeoplePickerNavigationController *_peoplePicker;
}

@property(retain) CNContact * chosenContact;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;

- (id)chosenContact;
- (void)dealloc;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (id)peoplePicker;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)setChosenContact:(id)arg1;
- (void)setPeoplePicker:(id)arg1;

@end
