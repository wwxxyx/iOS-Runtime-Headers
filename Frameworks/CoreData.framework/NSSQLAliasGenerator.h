/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLAliasGenerator : NSObject {
    unsigned int _nextTableAlias;
    unsigned int _nextTempTableAlias;
    unsigned int _nextVariableAlias;
    NSString *_tableBase;
    NSString *_variableBase;
}

- (void)dealloc;
- (id)generateSubqueryVariableAlias;
- (id)generateTableAlias;
- (id)generateTempTableName;
- (id)init;
- (id)initWithNestingLevel:(unsigned int)arg1;

@end
