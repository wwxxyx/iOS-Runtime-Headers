/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class FZMessage, IMHandle, NSArray, NSAttributedString, NSDate, NSError, NSString;

@interface IMMessage : NSObject <NSCopying> {
    NSError *_error;
    NSArray *_fileTransferGUIDs;
    unsigned long long _flags;
    NSString *_guid;
    BOOL _isInvitationMessage;
    long long _messageID;
    NSAttributedString *_messageSubject;
    NSArray *_parts;
    NSString *_plainBody;
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSDate *_time;
    NSDate *_timeDelivered;
    NSDate *_timeRead;
}

@property(readonly) FZMessage * _fzMessage;
@property(retain) NSError * error;
@property(copy) NSArray * fileTransferGUIDs;
@property unsigned long long flags;
@property(retain) NSString * guid;
@property(readonly) BOOL hasDataDetectorResults;
@property(readonly) BOOL hasInlineAttachments;
@property(readonly) NSArray * inlineAttachmentAttributesArray;
@property(readonly) BOOL isAddressedToMe;
@property(readonly) BOOL isAlert;
@property(readonly) BOOL isAutoReply;
@property(readonly) BOOL isDelayed;
@property(readonly) BOOL isDelivered;
@property(readonly) BOOL isEmote;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isFinished;
@property(readonly) BOOL isFromMe;
@property BOOL isInvitationMessage;
@property(readonly) BOOL isRead;
@property(readonly) BOOL isSent;
@property(readonly) BOOL isSystemMessage;
@property(readonly) BOOL isTypingMessage;
@property long long messageID;
@property(readonly) NSAttributedString * messageSubject;
@property(readonly) NSArray * parts;
@property(readonly) NSString * plainBody;
@property(retain) IMHandle * sender;
@property(readonly) NSString * senderName;
@property(readonly) IMHandle * subject;
@property(readonly) NSString * summaryString;
@property(retain) NSAttributedString * text;
@property(retain) NSDate * time;
@property(retain) NSDate * timeDelivered;
@property(retain) NSDate * timeRead;
@property(readonly) BOOL wasDataDetected;
@property(readonly) BOOL wasDowngraded;

+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;
+ (id)messageFromFZMessage:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)messageFromFZMessageDictionary:(id)arg1 sender:(id)arg2 subject:(id)arg3;

- (BOOL)__ck_isEqualToMessageUsingGUID:(id)arg1;
- (int)_compareIMMessageDates:(id)arg1;
- (int)_compareIMMessageGUIDs:(id)arg1;
- (int)_compareIMMessageIDs:(id)arg1;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (void)_flushMessageParts;
- (id)_fzMessage;
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 plainText:(id)arg5 text:(id)arg6 messageSubject:(id)arg7 fileTransferGUIDs:(id)arg8 flags:(unsigned long long)arg9 error:(id)arg10 guid:(id)arg11 messageID:(long long)arg12 subject:(id)arg13;
- (void)_loadParts;
- (void)_parseIMMessagePartsWithTextProcessingBlock:(id)arg1 fileTransferProcessingBlock:(id)arg2;
- (void)_updateError:(id)arg1;
- (void)_updateFileTransferGUIDs:(id)arg1;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)_updateGUID:(id)arg1;
- (void)_updateMessageID:(long long)arg1;
- (void)_updateSender:(id)arg1;
- (void)_updateText:(id)arg1;
- (void)_updateTime:(id)arg1;
- (void)_updateTimeDelivered:(id)arg1;
- (void)_updateTimeRead:(id)arg1;
- (int)compare:(id)arg1 comparisonType:(int)arg2;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)fileTransferGUIDs;
- (unsigned long long)flags;
- (id)guid;
- (BOOL)hasDataDetectorResults;
- (BOOL)hasInlineAttachments;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;
- (id)inlineAttachmentAttributesArray;
- (BOOL)isAddressedToMe;
- (BOOL)isAlert;
- (BOOL)isAutoReply;
- (BOOL)isDelayed;
- (BOOL)isDelivered;
- (BOOL)isEmote;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isFromMe;
- (BOOL)isInvitationMessage;
- (BOOL)isRead;
- (BOOL)isSent;
- (BOOL)isSystemMessage;
- (BOOL)isTypingMessage;
- (long long)messageID;
- (id)messageSubject;
- (id)parts;
- (id)plainBody;
- (id)sender;
- (id)senderName;
- (void)setIsAddressedToMe:(BOOL)arg1;
- (void)setIsInvitationMessage:(BOOL)arg1;
- (id)subject;
- (id)summaryString;
- (id)text;
- (id)time;
- (id)timeDelivered;
- (id)timeRead;
- (BOOL)wasDataDetected;
- (BOOL)wasDowngraded;

@end
