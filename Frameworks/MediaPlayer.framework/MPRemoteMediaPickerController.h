/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPickerController;

@interface MPRemoteMediaPickerController : _UIRemoteViewController {
    MPMediaPickerController *_mediaPickerController;
}

@property MPMediaPickerController * mediaPickerController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)mediaPickerController;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)setMediaPickerController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
