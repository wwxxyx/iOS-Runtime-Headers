/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

@interface PLSpringBoardLogger : PLLogger {
    int blankStateToken;
    int lastBlankState;
    int lastLockState;
    int lockStateToken;
}

- (void)_noteScreenTimeChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)log;
- (void)logSpringboardNotifications;
- (void)logWallPaperChange;

@end
