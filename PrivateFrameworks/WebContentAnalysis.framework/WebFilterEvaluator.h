/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSMutableData, NSString, NSURL;

@interface WebFilterEvaluator : NSObject {
    NSMutableData *_buffer;
    unsigned int _filterState;
    NSString *_pageTitle;
    NSURL *_url;
}

+ (id)createWithResponse:(id)arg1;
+ (BOOL)isManagedSession;

- (id)addData:(id)arg1;
- (void)attemptUnblockWithCompletion:(id)arg1;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;
- (id)dataComplete;
- (void)dealloc;
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;
- (long)filterState;
- (id)initWithResponse:(id)arg1;
- (void)unblockWithCompletion:(id)arg1;
- (BOOL)wasBlocked;

@end
