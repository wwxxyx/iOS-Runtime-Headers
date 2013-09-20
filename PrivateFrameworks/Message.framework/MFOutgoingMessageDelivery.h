/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFDeliveryDelegate>, DeliveryAccount, MFMailDelivery, MFMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary, NSString;

@interface MFOutgoingMessageDelivery : NSObject {
    MailAccount *_archiveAccount;
    NSArray *_charsets;
    NSDictionary *_compositionSpecification;
    MFMailDelivery *_currentDeliveryObject;
    <MFDeliveryDelegate> *_delegate;
    DeliveryAccount *_deliveryAccount;
    MFMutableMessageHeaders *_headers;
    NSString *_htmlBody;
    MFMessage *_message;
    NSArray *_mixedContent;
    NSArray *_otherHTMLAndAttachments;
    MFPlainTextDocument *_plainTextAlternative;
    BOOL _textPartsAreHTML;
}

@property(retain) NSDictionary * compositionSpecification;

+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithMessage:(id)arg1;

- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1;
- (id)_deliveryAccountForInitializers;
- (id)account;
- (id)compositionSpecification;
- (void)dealloc;
- (id)deliverSynchronously;
- (int)deliveryStatus;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)originalHeaders;
- (void)setAccount:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
