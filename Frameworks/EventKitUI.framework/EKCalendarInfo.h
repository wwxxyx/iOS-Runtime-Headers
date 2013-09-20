/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendar, EKGroupInfo, NSString, UIColor, UIImage;

@interface EKCalendarInfo : NSObject {
    EKCalendar *_calendar;
    UIColor *_color;
    int _customGroupType;
    EKGroupInfo *_group;
    BOOL _selected;
    NSString *_title;
}

@property(retain) EKCalendar * calendar;
@property(retain) UIColor * color;
@property int customGroupType;
@property(readonly) int displayOrder;
@property(readonly) BOOL excludeFromSelectAll;
@property EKGroupInfo * group;
@property(readonly) UIImage * highlightedIcon;
@property(readonly) UIImage * icon;
@property(readonly) BOOL isEditable;
@property(readonly) BOOL isPublished;
@property(readonly) BOOL isShared;
@property(readonly) BOOL isSubscribed;
@property BOOL selected;
@property(readonly) NSString * title;

- (void).cxx_destruct;
- (void)_updateCustomGroupType;
- (id)calendar;
- (id)color;
- (int)customGroupType;
- (id)description;
- (int)displayOrder;
- (BOOL)excludeFromSelectAll;
- (id)group;
- (id)highlightedIcon;
- (id)icon;
- (id)initWithCalendar:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isPublished;
- (BOOL)isShared;
- (BOOL)isSubscribed;
- (BOOL)selected;
- (void)setCalendar:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCustomGroupType:(int)arg1;
- (void)setGroup:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)title;

@end
