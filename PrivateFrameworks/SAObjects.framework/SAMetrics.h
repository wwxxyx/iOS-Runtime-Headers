/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * category;
@property(copy) NSString * originalCommandId;
@property(copy) NSString * refId;
@property(copy) NSDictionary * timings;

+ (id)metrics;
+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;

- (id)category;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalCommandId;
- (void)setCategory:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;
- (void)setTimings:(id)arg1;
- (id)timings;

@end
