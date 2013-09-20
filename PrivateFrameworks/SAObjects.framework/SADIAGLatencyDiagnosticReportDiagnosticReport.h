/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSURL;

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * latency;
@property(copy) NSURL * uri;
@property(copy) NSString * verb;

+ (id)latencyDiagnosticReportDiagnosticReport;
+ (id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)latency;
- (void)setLatency:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)uri;
- (id)verb;

@end
