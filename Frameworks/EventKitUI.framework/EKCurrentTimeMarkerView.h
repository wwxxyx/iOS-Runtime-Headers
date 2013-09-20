/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView {
    UILabel *_currentTimeLabel;
    BOOL _showsLine;
    BOOL _showsThumb;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } currentTimeFrame;
@property(retain) UILabel * currentTimeLabel;
@property(readonly) float markerMidHeight;
@property(readonly) float markerWidth;
@property BOOL showsLine;
@property BOOL showsThumb;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lineFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentTimeFrame;
- (id)currentTimeLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)markerMidHeight;
- (float)markerWidth;
- (void)setCurrentTimeLabel:(id)arg1;
- (void)setShowsLine:(BOOL)arg1;
- (void)setShowsThumb:(BOOL)arg1;
- (BOOL)showsLine;
- (BOOL)showsThumb;
- (void)updateTime;

@end
