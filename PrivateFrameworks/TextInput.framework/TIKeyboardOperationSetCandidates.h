/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIKeyboardCandidateResultSet, TIKeyboardOperationSetMarkedText;

@interface TIKeyboardOperationSetCandidates : TIKeyboardOperation {
    TIKeyboardCandidateResultSet *_candidateSet;
    TIKeyboardOperationSetMarkedText *_documentOperation;
}

@property(readonly) TIKeyboardCandidateResultSet * candidateSet;
@property(readonly) TIKeyboardOperationSetMarkedText * documentOperation;

+ (id)operationWithCandidateResultSet:(id)arg1 documentOperation:(id)arg2;
+ (id)operationWithCandidateResultSet:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)candidateSet;
- (void)dealloc;
- (id)documentOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidateResultSet:(id)arg1 documentOperation:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)main;
- (id)propertiesForDescription;

@end
