/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNContentAwareRenderer : KNTransitionRenderer {
}

- (BOOL)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(BOOL)arg2;
- (void)dealloc;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned int)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)renderOutgoingSlideAndPrecacheIncomingSlide;
- (void)resetLayerTreeAfterAnimation;
- (void)setupPluginContext;
- (void)stopAnimations;
- (void)teardown;

@end
