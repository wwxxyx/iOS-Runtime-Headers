/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKParticipant, UIImage;

@interface EKAttendeesListViewCell : UITableViewCell {
    EKParticipant *_attendee;
    UIImage *_attendingImage;
    UIImage *_maybeImage;
    UIImage *_notAttendingImage;
    UIImage *_pendingImage;
    BOOL _showStatus;
}

- (void).cxx_destruct;
- (id)_attendingImage;
- (id)_imageForStatus:(int)arg1;
- (id)_maybeImage;
- (id)_notAttendingImage;
- (id)_pendingImage;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 attendee:(id)arg3 showStatusImage:(BOOL)arg4;
- (void)setAttendee:(id)arg1;

@end
