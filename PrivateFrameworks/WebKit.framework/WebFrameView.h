/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

+ (BOOL)_canShowMIMETypeAsHTML:(id)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)arg1;

- (struct Frame { unsigned int x1; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct Page {} *x3; struct FrameTree { struct Frame {} *x_4_1_1; struct Frame {} *x_4_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_4_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_4_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_4_1_5; struct Frame {} *x_4_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_4_1_7; struct Frame {} *x_4_1_8; unsigned int x_4_1_9; } x4; struct FrameLoader { struct Frame {} *x_5_1_1; struct FrameLoaderClient {} *x_5_1_2; struct OwnPtr<WebCore::PolicyChecker> { struct PolicyChecker {} *x_3_2_1; } x_5_1_3; struct OwnPtr<WebCore::HistoryController> { struct HistoryController {} *x_4_2_1; } x_5_1_4; struct ResourceLoadNotifier { struct Frame {} *x_5_2_1; } x_5_1_5; struct SubframeLoader { boolx_6_2_1; struct Frame {} *x_6_2_2; } x_5_1_6; struct FrameLoaderStateMachine { int x_7_2_1; } x_5_1_7; struct OwnPtr<WebCore::IconController> { struct IconController {} *x_8_2_1; } x_5_1_8; struct MixedContentChecker { struct Frame {} *x_9_2_1; } x_5_1_9; struct OwnPtr<WebCore::FrameLoader::FrameProgressTracker> { struct FrameProgressTracker {} *x_10_2_1; } x_5_1_10; int x_5_1_11; int x_5_1_12; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_13_2_1; } x_5_1_13; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_14_2_1; } x_5_1_14; struct RefPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x_15_2_1; } x_5_1_15; boolx_5_1_16; boolx_5_1_17; boolx_5_1_18; boolx_5_1_19; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_20_2_1; } x_5_1_20; boolx_5_1_21; boolx_5_1_22; boolx_5_1_23; int x_5_1_24; boolx_5_1_25; struct RefPtr<WebCore::SerializedScriptValue> { struct SerializedScriptValue {} *x_26_2_1; } x_5_1_26; boolx_5_1_27; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_28_2_1; unsigned int x_28_2_2 : 1; unsigned int x_28_2_3 : 1; int x_28_2_4; int x_28_2_5; int x_28_2_6; int x_28_2_7; int x_28_2_8; int x_28_2_9; int x_28_2_10; int x_28_2_11; int x_28_2_12; int x_28_2_13; } x_5_1_28; struct Timer<WebCore::FrameLoader> { int (**x_29_2_1)(); double x_29_2_2; double x_29_2_3; double x_29_2_4; int x_29_2_5; unsigned int x_29_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_29_2_7; struct FrameLoader {} *x_29_2_8; } x_5_1_29; boolx_5_1_30; boolx_5_1_31; struct Frame {} *x_5_1_32; struct HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> > { struct Frame {} **x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_33_2_1; } x_5_1_33; boolx_5_1_34; boolx_5_1_35; boolx_5_1_36; boolx_5_1_37; int x_5_1_38; struct RefPtr<WebCore::FrameNetworkingContext> { struct FrameNetworkingContext {} *x_39_2_1; } x_5_1_39; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_40_2_1; unsigned int x_40_2_2 : 1; unsigned int x_40_2_3 : 1; int x_40_2_4; int x_40_2_5; int x_40_2_6; int x_40_2_7; int x_40_2_8; int x_40_2_9; int x_40_2_10; int x_40_2_11; int x_40_2_12; int x_40_2_13; } x_5_1_40; struct RefPtr<WebCore::HistoryItem> { struct HistoryItem {} *x_41_2_1; } x_5_1_41; struct OwnPtr<WebCore::PageActivityAssertionToken> { struct PageActivityAssertionToken {} *x_42_2_1; } x_5_1_42; boolx_5_1_43; } x5; struct NavigationScheduler { struct Frame {} *x_6_1_1; struct Timer<WebCore::NavigationScheduler> { int (**x_2_2_1)(); double x_2_2_2; double x_2_2_3; double x_2_2_4; int x_2_2_5; unsigned int x_2_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_2_2_7; struct NavigationScheduler {} *x_2_2_8; } x_6_1_2; struct OwnPtr<WebCore::ScheduledNavigation> { struct ScheduledNavigation {} *x_3_2_1; } x_6_1_3; } x6; struct HTMLFrameOwnerElement {} *x7; struct RefPtr<WebCore::FrameView> { struct FrameView {} *x_8_1_1; } x8; struct RefPtr<WebCore::Document> { struct Document {} *x_9_1_1; } x9; struct OwnPtr<WebCore::ScriptController> { struct ScriptController {} *x_10_1_1; } x10; struct OwnPtr<WebCore::Editor> { struct Editor {} *x_11_1_1; } x11; struct OwnPtr<WebCore::FrameSelection> { struct FrameSelection {} *x_12_1_1; } x12; struct OwnPtr<WebCore::EventHandler> { struct EventHandler {} *x_13_1_1; } x13; struct OwnPtr<WebCore::AnimationController> { struct AnimationController {} *x_14_1_1; } x14; struct Timer<WebCore::Frame> { int (**x_15_1_1)(); double x_15_1_2; double x_15_1_3; double x_15_1_4; int x_15_1_5; unsigned int x_15_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_15_1_7; struct Frame {} *x_15_1_8; } x15; float x16; struct IntPoint { int x_17_1_1; int x_17_1_2; } x17; struct ViewportArguments { int x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; float x_18_1_5; float x_18_1_6; float x_18_1_7; float x_18_1_8; float x_18_1_9; float x_18_1_10; float x_18_1_11; float x_18_1_12; } x18; boolx19; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; } x_20_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 3; unsigned int x_2_2_4 : 1; } x_20_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 3; unsigned int x_3_2_4 : 1; } x_20_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 3; unsigned int x_4_2_4 : 1; } x_20_1_4; int x_20_1_5; int x_20_1_6; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; } x20; struct VisibleSelection { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_1_2_1; int x_1_2_2; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; } x_21_1_1; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_2_2_1; int x_2_2_2; unsigned int x_2_2_3 : 3; unsigned int x_2_2_4 : 1; } x_21_1_2; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_3_2_1; int x_3_2_2; unsigned int x_3_2_3 : 3; unsigned int x_3_2_4 : 1; } x_21_1_3; struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_3_1; } x_4_2_1; int x_4_2_2; unsigned int x_4_2_3 : 3; unsigned int x_4_2_4 : 1; } x_21_1_4; int x_21_1_5; int x_21_1_6; unsigned int x_21_1_7 : 1; unsigned int x_21_1_8 : 1; } x21; float x22; float x23; float x24; int x25; boolx26; int x27; float x28; boolx29; int x30; }*)_web_frame;
- (float)_area;
- (id)_contentView;
- (Class)_customScrollViewClass;
- (BOOL)_firstResponderIsFormControl;
- (void)_forwardMouseEvent:(id)arg1;
- (void)_frameSizeChanged;
- (void)_goBack;
- (void)_goForward;
- (BOOL)_hasScrollBars;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (void)_install;
- (BOOL)_isFlippedDocument;
- (BOOL)_isScrollable;
- (BOOL)_isVerticalDocument;
- (id)_largestChildWithScrollBars;
- (id)_largestScrollableChild;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (BOOL)_pageHorizontally:(BOOL)arg1;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)arg1;
- (BOOL)_pageVertically:(BOOL)arg1;
- (BOOL)_scrollHorizontallyBy:(float)arg1;
- (BOOL)_scrollLineHorizontally:(BOOL)arg1;
- (BOOL)_scrollLineVertically:(BOOL)arg1;
- (BOOL)_scrollOverflowInDirection:(int)arg1 granularity:(int)arg2;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_scrollVerticallyBy:(float)arg1;
- (id)_scrollView;
- (void)_setDocumentView:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (float)_verticalKeyboardScrollDistance;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)arg1;
- (id)_webView;
- (id)_webcore_effectiveFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsScrolling;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)documentView;
- (BOOL)documentViewShouldHandlePrint;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)finalize;
- (void)frameSizeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isOpaque;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)printDocumentView;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (BOOL)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setAllowsScrolling:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNextKeyView:(id)arg1;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (id)webFrame;

@end
