/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

@class <AXUIService>, AXTimer, AXUIAlert, NSString, UIImage;

@interface AXUIAlertContext : NSObject {
    AXUIAlert *_alertView;
    double _creationTimeInterval;
    double _duration;
    double _fadeAnimationDuration;
    UIImage *_iconImage;
    NSString *_identifier;
    unsigned int _priority;
    <AXUIService> *_service;
    AXTimer *_showOrHideTimer;
    NSString *_subtitleText;
    NSString *_text;
    unsigned int _type;
}

@property(retain) AXUIAlert * alertView;
@property double creationTimeInterval;
@property double duration;
@property double fadeAnimationDuration;
@property(retain) UIImage * iconImage;
@property(copy) NSString * identifier;
@property unsigned int priority;
@property(retain) <AXUIService> * service;
@property(retain) AXTimer * showOrHideTimer;
@property(copy) NSString * subtitleText;
@property(copy) NSString * text;
@property unsigned int type;

- (id)alertView;
- (double)creationTimeInterval;
- (void)dealloc;
- (id)description;
- (double)duration;
- (double)fadeAnimationDuration;
- (id)iconImage;
- (id)identifier;
- (unsigned int)priority;
- (id)service;
- (void)setAlertView:(id)arg1;
- (void)setCreationTimeInterval:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFadeAnimationDuration:(double)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setService:(id)arg1;
- (void)setShowOrHideTimer:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (id)showOrHideTimer;
- (id)subtitleText;
- (id)text;
- (unsigned int)type;

@end
