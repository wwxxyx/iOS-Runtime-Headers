/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {
    NSString *_candidate;
    NSString *_input;
}

@property(copy) NSString * candidate;
@property(copy) NSString * input;

+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (id)candidateWithUnchangedInput:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnchangedInput:(id)arg1;
- (id)input;
- (void)setCandidate:(id)arg1;
- (void)setInput:(id)arg1;

@end
