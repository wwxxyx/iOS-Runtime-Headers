/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData, NSLock, NSURL;

@interface MPLoadSAPContextOperation : NSOperation {
    NSURL *_certURL;
    NSData *_certificateData;
    NSLock *_lock;
    id _outputBlock;
    NSURL *_setupURL;
}

@property(retain) NSData * certificateData;
@property(copy) id outputBlock;

- (void).cxx_destruct;
- (id)_loadCertificateData:(id*)arg1;
- (id)_performSetupWithData:(id)arg1 error:(id*)arg2;
- (id)certificateData;
- (id)initWithSetupURL:(id)arg1 certificateURL:(id)arg2;
- (void)main;
- (id)outputBlock;
- (void)setCertificateData:(id)arg1;
- (void)setOutputBlock:(id)arg1;

@end
