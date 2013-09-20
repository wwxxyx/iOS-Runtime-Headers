/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {
    struct _predicateFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedPredicateFlags : 31; 
    } _predicateFlags;
}

+ (id)cr_predicateWithEncodedDataRepresentation:(id)arg1;
+ (void)initialize;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned int)arg2;
+ (id)predicateWithBlock:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1 arguments:(void*)arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithValue:(BOOL)arg1;
+ (struct __CFLocale { }*)retainedLocale;
+ (BOOL)supportsSecureCoding;

- (BOOL)_allowsEvaluation;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (BOOL)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (void)allowEvaluation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cr_encodedDataRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)generateMetadataDescription;
- (id)initWithCoder:(id)arg1;
- (id)minimalFormInContext:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;

@end
