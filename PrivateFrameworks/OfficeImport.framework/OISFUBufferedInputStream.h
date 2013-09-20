/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>;

@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream> {
    char *mBuffer;
    long long mBufferEnd;
    long long mBufferOffset;
    unsigned long mBufferSize;
    long long mBufferStart;
    <SFUInputStream> *mStream;
}

- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithStream:(id)arg1 bufferSize:(unsigned long)arg2;
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;
- (id)initWithStream:(id)arg1;
- (long long)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;

@end
