/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABContactViewController, CNMutableContact;

@interface ABPropertyLinkedCardsAction : ABPropertyAction {
    ABContactViewController *_contactController;
    CNMutableContact *_linkedContact;
}

@property(retain) ABContactViewController * contactController;
@property(retain) CNMutableContact * linkedContact;

- (id)contactController;
- (void)dealloc;
- (id)linkedContact;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)setContactController:(id)arg1;
- (void)setLinkedContact:(id)arg1;
- (void)setPreferredName;
- (void)setPreferredPhoto;

@end
