/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCECalculationEngine, TSTExpressionNode, TSTTableInfo;

@interface TSTFormula : NSObject <NSCopying> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    TSCECalculationEngine *mCalculationEngine;
    BOOL mEmpty;
    TSTExpressionNode *mExpressionTree;
    BOOL mFixupFormulas;
    BOOL mFormulaFixupsShouldStick;
    BOOL mFormulaWasFixable;
    } mHostCell;
    TSTTableInfo *mHostInfo;
    NSString *mInitialWhitespace;
    BOOL mRequireEqualsToken;
    BOOL mSyntaxError;
}

@property(retain) TSCECalculationEngine * calculationEngine;
@property(getter=isEmpty) BOOL empty;
@property(retain) TSTExpressionNode * expressionTree;
@property BOOL fixupFormulas;
@property(readonly) struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; } formula;
@property(readonly) BOOL formulaFixupsShouldStick;
@property(readonly) BOOL formulaWasFixable;
@property(copy) NSString * initialWhitespace;
@property BOOL requireEqualsToken;
@property(getter=isSyntaxError) BOOL syntaxError;

+ (id)doubleQuoteCharacters;
+ (id)equalsCharacters;
+ (int)formulaQuoteContextAtCharIndex:(unsigned int)arg1 inStorage:(id)arg2;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (id)leftParenCharacters;
+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (id)rightParenCharacters;
+ (id)singleQuoteCharacters;

- (id).cxx_construct;
- (id)calculationEngine;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)expressionTree;
- (BOOL)fixupFormulas;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; })formula;
- (BOOL)formulaFixupsShouldStick;
- (BOOL)formulaWasFixable;
- (BOOL)hasBareArgumentPlaceholders;
- (id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 hostTable:(id)arg4;
- (id)initWithCalculationEngine:(id)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 hostTable:(id)arg3;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 TSCEFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; }*)arg4 ownerID:(struct __CFUUID { }*)arg5;
- (id)initialWhitespace;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isEmpty;
- (BOOL)isSyntaxError;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)p_fixFormula:(id)arg1;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(id)arg2;
- (void)reparseWithStorage:(id)arg1;
- (BOOL)requireEqualsToken;
- (void)reset;
- (void)setCalculationEngine:(id)arg1;
- (void)setEmpty:(BOOL)arg1;
- (void)setExpressionTree:(id)arg1;
- (void)setFixupFormulas:(BOOL)arg1;
- (void)setInitialWhitespace:(id)arg1;
- (void)setRequireEqualsToken:(BOOL)arg1;
- (void)setSyntaxError:(BOOL)arg1;

@end
