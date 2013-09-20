/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int _cd_rc;
    id *_keys;
    unsigned long _length;
    id _reserved1;
    void *_table;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long)arg2;
- (void)_coreDealloc:(BOOL)arg1;
- (BOOL)_isDeallocating;
- (struct __CFArray { }*)_makeBranchTableForKeys:(const char **)arg1 count:(unsigned long)arg2;
- (BOOL)_tryRetain;
- (id)allKeys;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fastIndexForKnownKey:(id)arg1;
- (unsigned int)hash;
- (unsigned int)indexForKey:(id)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id*)arg1 count:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id*)keys;
- (unsigned int)length;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
