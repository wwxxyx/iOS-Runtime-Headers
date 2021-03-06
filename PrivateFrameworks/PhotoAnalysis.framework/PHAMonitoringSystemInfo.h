/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAMonitoringSystemInfo : NSObject <NSSecureCoding> {
    unsigned long long  _diskBytesReadPerInterval;
    unsigned long long  _diskBytesWritePerInterval;
}

@property unsigned long long diskBytesReadPerInterval;
@property unsigned long long diskBytesWritePerInterval;

+ (bool)supportsSecureCoding;

- (unsigned long long)diskBytesReadPerInterval;
- (unsigned long long)diskBytesWritePerInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDiskBytesReadPerInterval:(unsigned long long)arg1;
- (void)setDiskBytesWritePerInterval:(unsigned long long)arg1;

@end
