/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class AVAudioSessionDataSourceDescription, NSArray, NSString;

@interface AVAudioSessionPortDescription : NSObject {
    void *_impl;
}

@property(readonly) NSString * UID;
@property(readonly) NSArray * channels;
@property(readonly) NSArray * dataSources;
@property(readonly) NSString * portName;
@property(readonly) NSString * portType;
@property(readonly) AVAudioSessionDataSourceDescription * preferredDataSource;
@property(readonly) AVAudioSessionDataSourceDescription * selectedDataSource;

+ (id)privateCreateOrConfigure:(id)arg1 withRawPortDescription:(id)arg2;
+ (id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2;
+ (BOOL)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2;

- (id)UID;
- (id)channels;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)dataSources;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithRawPortDescription:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPort:(id)arg1;
- (BOOL)isHeadphones;
- (id)portName;
- (id)portType;
- (id)preferredDataSource;
- (id)privateGetID;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; boolx5; id x6; id x7; id x8; }*)privateGetImplementation;
- (BOOL)privateMatchesRawDescription:(id)arg1;
- (id)selectedDataSource;
- (BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2;

@end
