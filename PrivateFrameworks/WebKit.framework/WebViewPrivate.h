/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <WebCaretChangeListener>, <WebDeviceOrientationProvider>, <WebFormDelegate>, <WebGeolocationProvider>, <WebNotificationProvider>, NSDictionary, NSMutableSet, NSString, NSURL, WAKWindow, WebFixedPositionContent, WebIndicateLayer, WebInspector, WebNodeHighlight, WebPreferences, WebVideoFullscreenController;

@interface WebViewPrivate : NSObject {
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    struct WebResourceDelegateImplementationCache { 
        int (*didCancelAuthenticationChallengeFunc)(); 
        int (*didReceiveAuthenticationChallengeFunc)(); 
        int (*canAuthenticateAgainstProtectionSpaceFunc)(); 
        int (*connectionPropertiesFunc)(); 
        int (*webThreadDidFinishLoadingFromDataSourceFunc)(); 
        int (*webThreadDidFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*webThreadIdentifierForRequestFunc)(); 
        int (*webThreadDidLoadResourceFromMemoryCacheFunc)(); 
        int (*webThreadWillSendRequestFunc)(); 
        int (*webThreadDidReceiveResponseFunc)(); 
        int (*webThreadDidReceiveContentLengthFunc)(); 
        int (*webThreadWillCacheResponseFunc)(); 
        int (*identifierForRequestFunc)(); 
        int (*willSendRequestFunc)(); 
        int (*didReceiveResponseFunc)(); 
        int (*didReceiveContentLengthFunc)(); 
        int (*didFinishLoadingFromDataSourceFunc)(); 
        int (*didFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*didLoadResourceFromMemoryCacheFunc)(); 
        int (*willCacheResponseFunc)(); 
        int (*plugInFailedWithErrorFunc)(); 
        int (*shouldUseCredentialStorageFunc)(); 
        int (*shouldPaintBrokenImageForURLFunc)(); 
    struct WebFrameLoadDelegateImplementationCache { 
        int (*didCreateJavaScriptContextForFrameFunc)(); 
        int (*didClearWindowObjectForFrameFunc)(); 
        int (*didClearWindowObjectForFrameInScriptWorldFunc)(); 
        int (*didClearInspectorWindowObjectForFrameFunc)(); 
        int (*windowScriptObjectAvailableFunc)(); 
        int (*didHandleOnloadEventsForFrameFunc)(); 
        int (*didReceiveServerRedirectForProvisionalLoadForFrameFunc)(); 
        int (*didCancelClientRedirectForFrameFunc)(); 
        int (*willPerformClientRedirectToURLDelayFireDateForFrameFunc)(); 
        int (*didChangeLocationWithinPageForFrameFunc)(); 
        int (*didPushStateWithinPageForFrameFunc)(); 
        int (*didReplaceStateWithinPageForFrameFunc)(); 
        int (*didPopStateWithinPageForFrameFunc)(); 
        int (*willCloseFrameFunc)(); 
        int (*didStartProvisionalLoadForFrameFunc)(); 
        int (*didReceiveTitleForFrameFunc)(); 
        int (*didCommitLoadForFrameFunc)(); 
        int (*didFailProvisionalLoadWithErrorForFrameFunc)(); 
        int (*didFailLoadWithErrorForFrameFunc)(); 
        int (*didFinishLoadForFrameFunc)(); 
        int (*didFirstLayoutInFrameFunc)(); 
        int (*didFirstVisuallyNonEmptyLayoutInFrameFunc)(); 
        int (*didLayoutFunc)(); 
        int (*didReceiveIconForFrameFunc)(); 
        int (*didFinishDocumentLoadForFrameFunc)(); 
        int (*didDisplayInsecureContentFunc)(); 
        int (*didRunInsecureContentFunc)(); 
        int (*didDetectXSSFunc)(); 
        int (*didRemoveFrameFromHierarchyFunc)(); 
        int (*webThreadDidLayoutFunc)(); 
    struct WebScriptDebugDelegateImplementationCache { 
        BOOL didParseSourceExpectsBaseLineNumber; 
        BOOL exceptionWasRaisedExpectsHasHandlerFlag; 
        int (*didParseSourceFunc)(); 
        int (*failedToParseSourceFunc)(); 
        int (*didEnterCallFrameFunc)(); 
        int (*willExecuteStatementFunc)(); 
        int (*willLeaveCallFrameFunc)(); 
        int (*exceptionWasRaisedFunc)(); 
    struct WebHistoryDelegateImplementationCache { 
        int (*navigatedFunc)(); 
        int (*clientRedirectFunc)(); 
        int (*serverRedirectFunc)(); 
        int (*deprecatedSetTitleFunc)(); 
        int (*setTitleFunc)(); 
        int (*populateVisitedLinksFunc)(); 
    struct CGSize { 
        float width; 
        float height; 
    struct Mutex { 
        struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } m_mutex; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > > { 
        struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id> > >, WTF::IntHash<unsigned long>, WTF::HashMapValueTraits<WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > >, WTF::HashTraits<unsigned long> > { 
            struct KeyValuePair<unsigned long, WTF::RetainPtr<id> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    struct RefPtr<LayerFlushController> { 
        struct LayerFlushController {} *m_ptr; 
    struct CGSize { 
        float width; 
        float height; 
    struct RefPtr<WebCore::HistoryItem> { 
        struct HistoryItem {} *m_ptr; 
    struct RetainPtr<NSData> { 
        struct NSData { Class x_0_1_1; } *m_ptr; 
    id UIDelegate;
    id UIDelegateForwarder;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    <WebCaretChangeListener> *_caretChangeListener;
    NSMutableSet *_caretChangeListeners;
    WebFixedPositionContent *_fixedPositionContent;
    <WebGeolocationProvider> *_geolocationProvider;
    } _globalHistoryItem;
    int _keyboardUIMode;
    BOOL _keyboardUIModeAccessed;
    <WebNotificationProvider> *_notificationProvider;
    BOOL allowsMessaging;
    BOOL allowsRemoteInspection;
    BOOL allowsUndo;
    NSString *applicationNameForUserAgent;
    struct CGColor { } *backgroundColor;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL closed;
    BOOL closing;
    WebNodeHighlight *currentNodeHighlight;
    float customDeviceScaleFactor;
    int didDrawTiles;
    id downloadDelegate;
    BOOL drawsBackground;
    id editingDelegate;
    id editingDelegateForwarder;
    } fixedLayoutSize;
    <WebFormDelegate> *formDelegate;
    id formDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    } frameLoadDelegateImplementations;
    WebVideoFullscreenController *fullscreenController;
    BOOL hasSpellCheckerDocumentTag;
    id historyDelegate;
    } historyDelegateImplementations;
    NSString *hostApplicationBundleId;
    NSString *hostApplicationName;
    WAKWindow *hostWindow;
    } identifierMap;
    BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;
    WebIndicateLayer *indicateLayer;
    WebInspector *inspector;
    BOOL interactiveFormValidationEnabled;
    BOOL isStopping;
    } lastLayoutSize;
    } layerFlushController;
    <WebDeviceOrientationProvider> *m_deviceOrientationProvider;
    BOOL mainFrameDocumentReady;
    BOOL mainViewIsScrollingOrZooming;
    NSString *mediaStyle;
    BOOL needsOneShotDrawingSynchronization;
    void *observationInfo;
    struct Page { } *page;
    } pendingFixedPositionLayoutRect;
    } pendingFixedPositionLayoutRectMutex;
    id policyDelegate;
    id policyDelegateForwarder;
    BOOL postsAcceleratedCompositingNotifications;
    WebPreferences *preferences;
    int programmaticFocusCount;
    NSDictionary *remoteInspectorUserInfo;
    } resourceLoadDelegateImplementations;
    id resourceProgressDelegate;
    id resourceProgressDelegateForwarder;
    id scriptDebugDelegate;
    } scriptDebugDelegateImplementations;
    BOOL shouldCloseWithWindow;
    BOOL shouldUpdateWhileOffscreen;
    } sourceApplicationAuditData;
    int spellCheckerDocumentTag;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL useSiteSpecificSpoofing;
    } userAgent;
    BOOL userAgentOverridden;
    NSURL *userStyleSheetLocation;
    BOOL usesPageCache;
    int validationMessageTimerMagnification;
    float zoomMultiplier;
    BOOL zoomsTextOnly;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
