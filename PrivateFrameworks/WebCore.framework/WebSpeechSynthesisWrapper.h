/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance> { 
        struct PlatformSpeechSynthesisUtterance {} *m_ptr; 
    struct RetainPtr<AVSpeechSynthesizer> { 
        struct AVSpeechSynthesizer { Class x_0_1_1; } *m_ptr; 
    } m_synthesizer;
    struct PlatformSpeechSynthesizer { int (**x1)(); struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; struct PlatformSpeechSynthesizerClient {} *x4; struct RetainPtr<WebSpeechSynthesisWrapper> { struct WebSpeechSynthesisWrapper { Class x_1_2_1; struct PlatformSpeechSynthesizer {} *x_1_2_2; struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance> { struct PlatformSpeechSynthesisUtterance {} *x_3_3_1; } x_1_2_3; struct RetainPtr<AVSpeechSynthesizer> { struct AVSpeechSynthesizer { Class x_1_4_1; } *x_4_3_1; } x_1_2_4; } *x_5_1_1; } x5; } *m_synthesizerObject;
    } m_utterance;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer { int (**x1)(); struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; struct PlatformSpeechSynthesizerClient {} *x4; struct RetainPtr<WebSpeechSynthesisWrapper> { struct WebSpeechSynthesisWrapper { Class x_1_2_1; struct PlatformSpeechSynthesizer {} *x_1_2_2; struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance> { struct PlatformSpeechSynthesisUtterance {} *x_3_3_1; } x_1_2_3; struct RetainPtr<AVSpeechSynthesizer> { struct AVSpeechSynthesizer { Class x_1_4_1; } *x_4_3_1; } x_1_2_4; } *x_5_1_1; } x5; }*)arg1;
- (float)mapSpeechRateToPlatformRate:(float)arg1;
- (void)pause;
- (void)resume;
- (void)speakUtterance:(struct PassRefPtr<WebCore::PlatformSpeechSynthesisUtterance> { struct PlatformSpeechSynthesisUtterance {} *x1; })arg1;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 utterance:(id)arg3;

@end
