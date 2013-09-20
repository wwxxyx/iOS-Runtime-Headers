/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class RUStationTuningSlider, RadioStation, UIImageView, UILabel;

@interface RUStationTuningView : UIView {
    RadioStation *_station;
    RUStationTuningSlider *_tuningSlider;
    float _tuningSliderMaskDrawnWidth;
    UIImageView *_tuningSliderMaskView;
    UILabel *_tuningType1Label;
    UILabel *_tuningType2Label;
    UILabel *_tuningType3Label;
}

@property(retain) RadioStation * station;

- (void).cxx_destruct;
- (void)_tapRecognizedAction:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskImageForSliderTrack;
- (void)setStation:(id)arg1;
- (id)station;

@end
