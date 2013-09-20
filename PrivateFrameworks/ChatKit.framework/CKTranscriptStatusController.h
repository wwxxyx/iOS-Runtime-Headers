/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversation, NSMutableSet, NSString, NSTimer, UIView;

@interface CKTranscriptStatusController : NSObject {
    BOOL _animatingFadeOut;
    CKConversation *_conversation;
    NSMutableSet *_currentMessages;
    id _delegate;
    BOOL _finishingUp;
    NSString *_lastMsg;
    float _lastVal;
    NSTimer *_progressUpdateTimer;
    UIView *_progressView;
    BOOL _suspended;
    NSString *_title;
    BOOL _updatingProgress;
    BOOL _viewTitle;
}

@property(retain) CKConversation * conversation;
@property id delegate;
@property(copy) NSString * title;

- (BOOL)_calcVals:(BOOL*)arg1;
- (void)_finishProgress;
- (id)_generateStatusTitle;
- (float)_generateVal;
- (void)_hideName;
- (id)_localizedTitleForSendingPart:(int)arg1 ofPart:(int)arg2;
- (void)_refreshNavigationItemView;
- (void)_refreshNavigationItemViewAnimate:(BOOL)arg1;
- (BOOL)_shouldShowProgress;
- (void)_startUpdatingProgress;
- (id)_title;
- (void)_updateCurrentMessages;
- (void)_updateNavItemTitleView:(BOOL)arg1;
- (void)_updateTitle:(BOOL)arg1;
- (void)brieflyShowName;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (void)refresh;
- (void)reset;
- (void)resetProgress;
- (void)resume;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressIndicatorHidden:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)suspend;
- (id)title;

@end
