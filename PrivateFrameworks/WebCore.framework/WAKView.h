/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet;

@interface WAKView : WAKResponder {
    struct _WKViewContext { 
        int (*notificationCallback)(); 
        void *notificationUserInfo; 
        int (*responderCallback)(); 
        void *responderUserInfo; 
        int (*willRemoveSubviewCallback)(); 
        int (*invalidateGStateCallback)(); 
    BOOL _drawsOwnDescendants;
    BOOL _isHidden;
    NSMutableSet *subviewReferences;
    } viewContext;
    struct WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; } *viewRef;
}

+ (void)_setInterpolationQuality:(int)arg1;
+ (id)_wrapperForViewRef:(struct WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; }*)arg1;
+ (id)focusView;

- (id).cxx_construct;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 lockFocus:(bool)arg3;
- (id)_frame;
- (BOOL)_handleResponderCall:(int)arg1;
- (id)_initWithViewRef:(struct WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; }*)arg1;
- (void)_lockFocusViewInContext:(struct CGContext { }*)arg1;
- (BOOL)_selfHandleEvent:(id)arg1;
- (void)_setDrawsOwnDescendants:(BOOL)arg1;
- (id)_subviewReferences;
- (void)_unlockFocusViewInContext:(struct CGContext { }*)arg1;
- (struct WKView { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; id x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; unsigned int x8; float x9; void *x10; }*)_viewRef;
- (id)_webView;
- (void)_web_addDescendantWebHTMLViewsToArray:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_web_convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (BOOL)_web_firstResponderIsSelfOrDescendantView;
- (id)_web_parentWebFrameView;
- (id)_web_superviewOfClass:(Class)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)addSubview:(id)arg1;
- (unsigned int)autoresizingMask;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 toView:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)display;
- (void)displayIfNeeded;
- (void)displayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)frameSizeChanged;
- (void)handleEvent:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)inLiveResize;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateGState;
- (BOOL)isDescendantOf:(id)arg1;
- (BOOL)isHiddenOrHasHiddenAncestor;
- (id)lastScrollableAncestor;
- (void)layout;
- (void)layoutIfNeeded;
- (void)lockFocus;
- (BOOL)mouse:(struct CGPoint { float x1; float x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)needsDisplay;
- (BOOL)needsPanelToBecomeKey;
- (id)nextKeyView;
- (id)nextResponder;
- (id)nextValidKeyView;
- (id)previousKeyView;
- (id)previousValidKeyView;
- (void)releaseGState;
- (void)removeFromSuperview;
- (float)scale;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBoundsOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setNextKeyView:(id)arg1;
- (void)setScale:(float)arg1;
- (id)subviews;
- (id)superview;
- (void)unlockFocus;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)willRemoveSubview:(id)arg1;
- (id)window;

@end
