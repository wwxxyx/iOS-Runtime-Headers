/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURegressionModel : NSObject {
    int mErrorType;
    BOOL mModelValid;
}

- (double)coefficientAtIndex:(int)arg1;
- (id)equationString;
- (int)errorType;
- (double)estimateForX:(double*)arg1;
- (id)formattedStringWithCoefficient:(double)arg1;
- (id)getEquationStringAndBuildSuperscriptRangesArray;
- (id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (BOOL)isModelValid;
- (int)numCoefficients;
- (int)numSuperscriptRanges;
- (double)rSquared;
- (int)regressionType;
- (struct _NSRange { unsigned int x1; unsigned int x2; })superscriptRangeAtIndex:(int)arg1;

@end
