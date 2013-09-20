/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSDate, NSString;

@interface WBSCreditCardData : NSObject {
    NSString *_cardName;
    NSString *_cardNumber;
    NSString *_cardholderName;
    NSDate *_expirationDate;
}

@property(copy) NSString * cardName;
@property(copy) NSString * cardNumber;
@property(copy) NSString * cardholderName;
@property(readonly) NSDate * expirationDate;

- (id)cardName;
- (id)cardNumber;
- (id)cardholderName;
- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)expirationDate;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;
- (id)initWithKeychainRepresentation:(id)arg1;
- (id)keychainRepresentation;
- (void)setCardName:(id)arg1;
- (void)setCardNumber:(id)arg1;
- (void)setCardholderName:(id)arg1;

@end
