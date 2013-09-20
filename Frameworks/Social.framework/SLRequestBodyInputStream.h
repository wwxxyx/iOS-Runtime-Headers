/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <NSStreamDelegate>, NSArray, SLRequestMultiPartInputStream;

@interface SLRequestBodyInputStream : NSInputStream {
    struct { 
        int version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    int (*_clientCallback)();
    } _clientContext;
    unsigned int _currentIndex;
    unsigned int _currentLength;
    unsigned int _currentOffset;
    SLRequestMultiPartInputStream *_currentStream;
    unsigned int _dataLength;
    unsigned int _dataOffset;
    <NSStreamDelegate> *_delegate;
    NSArray *_inputStreams;
    BOOL _openEventSent;
    struct __CFRunLoopSource { } *_rls;
    unsigned int _streamStatus;
}

@property <NSStreamDelegate> * delegate;
@property(readonly) unsigned int totalBytes;

- (void).cxx_destruct;
- (void)_scheduleCallback;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_streamEventTrigger;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (unsigned int)bytesRead;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int*)arg2;
- (BOOL)hasBytesAvailable;
- (id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2;
- (id)nextStream;
- (void)open;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)streamError;
- (unsigned int)streamStatus;
- (unsigned int)totalBytes;

@end
