/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKBGradient;

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {
    NSString *_colorName;
    unsigned int _edges;
    UIKBGradient *_gradient;
    float _inset;
    float _weight;
}

@property unsigned int edges;
@property(retain) UIKBGradient * gradient;
@property float inset;
@property(readonly) BOOL isValid;
@property(readonly) SEL renderSelector;
@property(readonly) BOOL renderUnder;
@property float weight;

+ (id)effectWithColor:(id)arg1 edges:(unsigned int)arg2 inset:(float)arg3 weight:(float)arg4;

- (struct CGColor { }*)CGColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)edges;
- (id)gradient;
- (id)initWithColor:(id)arg1 edges:(unsigned int)arg2 inset:(float)arg3 weight:(float)arg4;
- (float)inset;
- (BOOL)isValid;
- (SEL)renderSelector;
- (BOOL)renderUnder;
- (void)setEdges:(unsigned int)arg1;
- (void)setGradient:(id)arg1;
- (void)setInset:(float)arg1;
- (void)setWeight:(float)arg1;
- (float)weight;

@end
