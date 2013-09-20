/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSDate;

@interface BKSWorkspaceActivationToken : NSObject <NSCopying, BKSXPCCoding> {
    NSDate *_timestamp;
}

@property(retain) NSDate * timestamp;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)shortDescription;
- (id)timestamp;

@end
