/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableArray;

@interface WBSURLSuffixCheckerPrivate : NSObject {
    NSMutableArray *_failedSuffixes;
    unsigned int _maxLength;
    struct { unsigned short x1[27]; } *_trie;
    unsigned int _trieNodeCount;
}

- (void)addStringToFailedSuffixes:(id)arg1;
- (void)dealloc;
- (BOOL)hasSuffix:(id)arg1;
- (id)initWithSuffixes:(id)arg1;
- (BOOL)insertString:(id)arg1 intoTrieWithCache:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1[32]; unsigned int x2; }*)arg2;

@end
