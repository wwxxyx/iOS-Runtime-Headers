/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSObject<OS_xpc_object>, NSTimer, WebBookmarksXPCConnection;

@interface WBReadingListPrivate : NSObject <WebBookmarksXPCConnectionDelegate> {
    NSTimer *_batchTimer;
    NSObject<OS_xpc_object> *_batchedReadingListItems;
    WebBookmarksXPCConnection *_connection;
}

- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;
- (void)_batchTimerDidFire:(id)arg1;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)dealloc;
- (id)init;

@end
