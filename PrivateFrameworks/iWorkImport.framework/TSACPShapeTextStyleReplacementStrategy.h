/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSStyle;

@interface TSACPShapeTextStyleReplacementStrategy : TSACPTextStyleReplacementStrategy {
    TSSStyle *mShapeStyle;
}

@property(readonly) TSSStyle * shapeStyle;

- (void)dealloc;
- (id)initWithChangePropagationVisitor:(id)arg1 storage:(id)arg2 shapeStyle:(id)arg3 forLockedObject:(BOOL)arg4;
- (void)populateStyleReplacements:(id)arg1 forParagraphStyle:(id)arg2 listStyle:(id)arg3 parIndex:(unsigned int)arg4;
- (id)shapeStyle;

@end
