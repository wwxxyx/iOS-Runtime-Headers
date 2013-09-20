/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, WebView;

@interface WebInspectorWindowController : NSObject {
    BOOL _destroyingInspectorView;
    struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct RefPtr<WebCore::InspectorFrontendHost> { struct InspectorFrontendHost {} *x_4_1_1; } x4; struct OwnPtr<WebCore::InspectorFrontendClientLocal::Settings> { struct Settings {} *x_5_1_1; } x5; boolx6; int x7; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct OwnPtr<WebCore::InspectorBackendDispatchTask> { struct InspectorBackendDispatchTask {} *x_9_1_1; } x9; id x10; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_11_1_1; } x11; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; struct HashMap<WTF::String, WTF::RetainPtr<NSURL>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > >, WTF::StringHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_13_1_1; } x13; } *_frontendClient;
    WebView *_inspectedWebView;
    struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; } *_inspectorClient;
    NSString *_title;
    WebView *_webView;
}

@property(retain) NSString * title;
@property(readonly) WebView * webView;

- (struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; }*)inspectorClient;
- (void)dealloc;
- (void)destroyInspectorView:(bool)arg1;
- (id)init;
- (id)initWithInspectedWebView:(id)arg1;
- (void)setFrontendClient:(struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct RefPtr<WebCore::InspectorFrontendHost> { struct InspectorFrontendHost {} *x_4_1_1; } x4; struct OwnPtr<WebCore::InspectorFrontendClientLocal::Settings> { struct Settings {} *x_5_1_1; } x5; boolx6; int x7; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct OwnPtr<WebCore::InspectorBackendDispatchTask> { struct InspectorBackendDispatchTask {} *x_9_1_1; } x9; id x10; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_11_1_1; } x11; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; struct HashMap<WTF::String, WTF::RetainPtr<NSURL>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > >, WTF::StringHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RetainPtr<NSURL> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_13_1_1; } x13; }*)arg1;
- (void)setInspectorClient:(struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; }*)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)webView;

@end
