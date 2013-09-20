/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, TSDCanvas, TSDLayout, TSDRootLayout;

@interface TSDLayoutController : NSObject {
    TSDCanvas *mCanvas;
    NSMutableSet *mInvalidChildrenLayouts;
    NSMutableSet *mInvalidLayouts;
    struct __CFDictionary { } *mLayoutsByInfo;
    NSMutableSet *mLayoutsNeedingRecreating;
    TSDRootLayout *mRootLayout;
    TSDLayout *mValidatingLayout;
}

+ (id)allInteractiveLayoutControllers;
+ (void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(id)arg2;

- (id)canvas;
- (void)dealloc;
- (void)i_registerLayout:(id)arg1;
- (void)i_removeAllLayouts;
- (void)i_unregisterLayout:(id)arg1;
- (id)initWithCanvas:(id)arg1;
- (void)invalidateChildrenOfLayout:(id)arg1;
- (void)invalidateLayout:(id)arg1;
- (void)invalidateLayoutForRecreation:(id)arg1;
- (BOOL)isLayoutOffscreen;
- (id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (id)layoutForInfo:(id)arg1;
- (id)layoutsForInfo:(id)arg1;
- (id)layoutsForInfos:(id)arg1;
- (id)layoutsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfTopLevelLayouts;
- (id)rootLayout;
- (void)setInfos:(id)arg1;
- (id)sortLayoutsForDependencies:(id)arg1;
- (void)validateLayoutWithDependencies:(id)arg1;
- (void)validateLayouts:(id)arg1;
- (void)validateLayouts;
- (void)validateLayoutsWithDependencies:(id)arg1;
- (id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (id)validatedLayoutForInfo:(id)arg1;
- (id)validatedLayoutsForInfo:(id)arg1;

@end
