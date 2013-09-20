/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class AXDialectMap, NSMutableOrderedSet, NSString;

@interface AXLanguageTag : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSMutableOrderedSet *_ambiguousDialects;
    NSString *_content;
    } _range;
    NSMutableOrderedSet *_unambiguousDialects;
    BOOL _wasPredicted;
}

@property(retain) NSMutableOrderedSet * ambiguousDialects;
@property NSString * content;
@property(readonly) NSString * contentSubstring;
@property(readonly) AXDialectMap * dialect;
@property(readonly) AXDialectMap * preferredAmbiguousDialect;
@property(readonly) AXDialectMap * preferredUnambiguousDialect;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(retain) NSMutableOrderedSet * unambiguousDialects;
@property BOOL wasPredicted;

+ (id)tagWithDialects:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4;

- (void)addAmbiguousDialect:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
- (id)ambiguousDialects;
- (BOOL)canBeSpokenByDialect:(id)arg1;
- (BOOL)canBeSpokenByLanguage:(id)arg1;
- (id)content;
- (id)contentSubstring;
- (void)dealloc;
- (id)description;
- (id)dialect;
- (BOOL)hasAmbigiousDialects;
- (id)preferredAmbiguousDialect;
- (id)preferredUnambiguousDialect;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setAmbiguousDialects:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setUnambiguousDialects:(id)arg1;
- (void)setWasPredicted:(BOOL)arg1;
- (id)unambiguousDialects;
- (BOOL)wasPredicted;

@end
