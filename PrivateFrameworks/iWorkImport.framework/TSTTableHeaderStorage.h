/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTTableHeaderStorageBucket;

@interface TSTTableHeaderStorage : TSPContainedObject <TSTTableHeaderStorage> {
    TSTTableHeaderStorageBucket *mBuckets[1];
}

- (void)applyFunction:(int (*)())arg1 withState:(void*)arg2 willModify:(BOOL)arg3;
- (int)count;
- (void)dealloc;
- (id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2;
- (id)initWithArchive:(const struct HeaderStorage { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; unsigned int x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (unsigned long)lowerBound:(unsigned long)arg1;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2;
- (unsigned long)maxKey;
- (unsigned long)minKey;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned long)arg1;
- (void)saveToArchive:(struct HeaderStorage { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; unsigned int x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)setHeader:(id)arg1 forKey:(unsigned long)arg2;
- (void)shiftKeysAtIndex:(unsigned long)arg1 amount:(long)arg2;
- (unsigned long)upperBound:(unsigned long)arg1;

@end
