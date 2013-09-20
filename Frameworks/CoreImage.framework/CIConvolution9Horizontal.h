/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIConvolution9Horizontal : CIFilter {
    NSNumber *inputBias;
    CIImage *inputImage;
    CIVector *inputWeights;
}

@property(retain) NSNumber * inputBias;
@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputWeights;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)inputBias;
- (id)inputImage;
- (id)inputWeights;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputBias:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputWeights:(id)arg1;

@end
