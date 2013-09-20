/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/LegacyGameKit.framework/LegacyGameKit
 */

@class <GKPeerPickerControllerDelegate>, GKPeerPickerViewController;

@interface GKPeerPickerController : NSObject {
    id _picker;
}

@property unsigned int connectionTypesMask;
@property <GKPeerPickerControllerDelegate> * delegate;
@property(readonly) GKPeerPickerViewController * pickerViewController;
@property(getter=isVisible,readonly) BOOL visible;

+ (void)initialize;

- (void)_createPicker;
- (unsigned int)connectionTypesMask;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)init;
- (BOOL)isVisible;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned int)arg2;
- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned int)arg2;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (id)pickerViewController;
- (void)setConnectionTypesMask:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;

@end
