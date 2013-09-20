/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * completionType;
@property(copy) NSString * interactionId;
@property(copy) NSArray * listenedItems;
@property(copy) NSString * refId;
@property int selectedItemIndex;
@property(copy) NSString * sessionId;
@property(copy) NSArray * timesListened;

+ (id)tTSSelectionStatistics;
+ (id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (id)completionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (id)listenedItems;
- (int)selectedItemIndex;
- (id)sessionId;
- (void)setCompletionType:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setListenedItems:(id)arg1;
- (void)setSelectedItemIndex:(int)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimesListened:(id)arg1;
- (id)timesListened;

@end
