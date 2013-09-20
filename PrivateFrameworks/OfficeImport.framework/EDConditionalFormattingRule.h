/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources, NSMutableArray, NSString;

@interface EDConditionalFormattingRule : NSObject {
    boolmAboveAverage;
    boolmBottom;
    boolmEqualAverage;
    boolmPercent;
    boolmStopIfTrue;
    unsigned int mDifferentialStyleIndex;
    NSMutableArray *mFormulas;
    int mOperator;
    long mPriority;
    unsigned long mRank;
    EDResources *mResources;
    long mStdDev;
    NSString *mText;
    int mTimePeriod;
    int mType;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (bool)aboveAverage;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (bool)bottom;
- (int)compareToOtherRuleUsingPriority:(id)arg1;
- (void)dealloc;
- (id)differentialStyle;
- (unsigned int)differentialStyleIndex;
- (bool)equalAverage;
- (id)formulaAtIndex:(unsigned int)arg1;
- (unsigned int)formulaCount;
- (id)initWithResources:(id)arg1;
- (int)operatorEnum;
- (bool)percent;
- (long)priority;
- (unsigned long)rank;
- (void)setAboveAverage:(bool)arg1;
- (void)setBottom:(bool)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (void)setDifferentialStyleIndex:(unsigned int)arg1;
- (void)setEqualAverage:(bool)arg1;
- (void)setOperatorEnum:(int)arg1;
- (void)setPercent:(bool)arg1;
- (void)setPriority:(long)arg1;
- (void)setRank:(unsigned long)arg1;
- (void)setStdDev:(long)arg1;
- (void)setStopIfTrue:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTimePeriod:(int)arg1;
- (void)setType:(int)arg1;
- (long)stdDev;
- (bool)stopIfTrue;
- (id)text;
- (int)timePeriod;
- (int)type;

@end
