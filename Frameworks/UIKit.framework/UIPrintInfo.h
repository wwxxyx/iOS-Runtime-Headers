/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding> {
    int _copies;
    int _duplex;
    NSString *_jobName;
    int _orientation;
    int _outputType;
    NSString *_printerID;
    BOOL _scaleUp;
}

@property int copies;
@property int duplex;
@property(copy) NSString * jobName;
@property int orientation;
@property int outputType;
@property(copy) NSString * printerID;
@property BOOL scaleUp;

+ (id)printInfo;
+ (id)printInfoWithDictionary:(id)arg1;

- (id)_createPrintSettingsForPrinter:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (void)_updateWithPrinter:(id)arg1;
- (int)copies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (int)duplex;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jobName;
- (int)orientation;
- (int)outputType;
- (id)printerID;
- (BOOL)scaleUp;
- (void)setCopies:(int)arg1;
- (void)setDuplex:(int)arg1;
- (void)setJobName:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutputType:(int)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setScaleUp:(BOOL)arg1;

@end
