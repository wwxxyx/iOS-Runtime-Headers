/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDSecureChannelContext : NSObject {
    <CDPDCircleProxy> * _circleProxy;
    CDPContext * _context;
    <CDPKeychainCircleProxy> * _keychainCircleProxy;
    <CDPSecureChannelProxy> * _secureChannelProxy;
}

@property (nonatomic, retain) <CDPDCircleProxy> *circleProxy;
@property (nonatomic, retain) <CDPKeychainCircleProxy> *keychainCircleProxy;
@property (nonatomic, retain) <CDPSecureChannelProxy> *secureChannelProxy;

- (void).cxx_destruct;
- (id)circleProxy;
- (void)dealloc;
- (id)initWithChannel:(id)arg1 dataProvider:(id)arg2 circleProxy:(id)arg3;
- (id)initWithContext:(id)arg1 circleProxy:(id)arg2;
- (bool)initialize:(id*)arg1;
- (id)keychainCircleProxy;
- (id)secureChannelProxy;
- (void)setCircleProxy:(id)arg1;
- (void)setKeychainCircleProxy:(id)arg1;
- (void)setSecureChannelProxy:(id)arg1;

@end