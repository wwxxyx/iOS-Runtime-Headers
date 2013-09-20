/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class AXRemoteHearingAidDevice, NSNumberFormatter, UIActivityIndicatorView, UIImageView, UILabel;

@interface AXHearingAidDetailCell : PSTableCell {
    AXRemoteHearingAidDevice *_device;
    UIImageView *_leftBattery;
    UILabel *_leftLabel;
    UIActivityIndicatorView *_loadingIndicator;
    NSNumberFormatter *_numberFormatter;
    UIImageView *_rightBattery;
    UILabel *_rightLabel;
}

@property(retain) AXRemoteHearingAidDevice * device;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)imageForBatteryLevel:(float)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)setDevice:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateAvailability;

@end
