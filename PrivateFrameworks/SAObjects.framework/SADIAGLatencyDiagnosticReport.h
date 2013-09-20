/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SADIAGLatencyDiagnosticReport : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSArray * diagnosticReports;
@property(copy) NSString * refId;

+ (id)latencyDiagnosticReport;
+ (id)latencyDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;

- (id)diagnosticReports;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDiagnosticReports:(id)arg1;

@end
