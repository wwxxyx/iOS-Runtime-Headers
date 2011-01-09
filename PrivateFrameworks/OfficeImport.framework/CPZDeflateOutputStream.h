/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <CPZOutputStream>;



@interface CPZDeflateOutputStream : NSObject <CPZOutputStream>
{
    <CPZOutputStream> *mOutputStream;
    struct z_stream_s { 
        char *next_in; 
        NSUInteger avail_in; 
        NSUInteger total_in; 
        char *next_out; 
        NSUInteger avail_out; 
        NSUInteger total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        NSInteger data_type; 
        NSUInteger adler; 
        NSUInteger reserved; 
    } mDeflateStream;
    char *mOutBuffer;
}


- (id)initWithOutputStream:(id)arg1;
- (void)dealloc;
- (void)close;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end