/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSDictionary, NSString;

@interface AVCaptureDeviceFormatInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } defaultActiveMaxFrameDuration;
    } defaultActiveMinFrameDuration;
    NSDictionary *deviceProperties;
    struct opaqueCMFormatDescription { } *formatDescription;
    NSDictionary *formatDictionary;
    NSString *mediaType;
    NSArray *videoSupportedFrameRateRanges;
}

@end
