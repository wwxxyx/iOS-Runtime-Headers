/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CADisplayLink, NSString;

@interface UIScrollTestParameters : NSObject {
    NSString *_currentTest;
    CADisplayLink *_displayLink;
    int _iterations;
    int _scrollLength;
    float _startOffset;
    int _yDelta;
}

@property(retain) NSString * currentTest;
@property(retain) CADisplayLink * displayLink;
@property(readonly) float endOffset;
@property int iterations;
@property int scrollLength;
@property float startOffset;
@property int yDelta;

- (id)currentTest;
- (void)dealloc;
- (id)displayLink;
- (float)endOffset;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5;
- (int)iterations;
- (int)scrollLength;
- (void)setCurrentTest:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setIterations:(int)arg1;
- (void)setScrollLength:(int)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setYDelta:(int)arg1;
- (float)startOffset;
- (int)yDelta;

@end
