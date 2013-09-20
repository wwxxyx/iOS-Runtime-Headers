/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENamedReferenceTrie : NSObject {
    struct TSCENamedReferenceTrieNode { 
        struct __CFDictionary {} *mTrackedReferencesByOwnerID; 
        struct hash_map<unsigned short, TSCENamedReferenceTrieNode *, __gnu_cxx::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSCENamedReferenceTrieNode *> > > { 
            struct __hash_table<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, __gnu_cxx::__hash_map_hasher<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, __gnu_cxx::hash<unsigned short>, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *> > > { 
                struct unique_ptr<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> > > { 
                        struct __hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> {} **__first_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> > { 
                                unsigned long __first_; 
                            } __data_; 
                        } __second_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> *> { 
                        struct __hash_node<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, void *> {} *__next_; 
                    } __first_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, __gnu_cxx::hash<unsigned short>, true> > { 
                    unsigned long __first_; 
                } __p2_; 
                struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<unsigned short, TSCENamedReferenceTrieNode *>, std::__1::equal_to<unsigned short>, true> > { 
                    float __first_; 
                } __p3_; 
            } __table_; 
        } mChildren; 
    } mRoot;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)deleteName:(id)arg1 inTable:(struct __CFUUID { }*)arg2 trackedReference:(id)arg3;
- (id)description;
- (BOOL)insertName:(id)arg1 inTable:(struct __CFUUID { }*)arg2 trackedReference:(id)arg3;
- (BOOL)replaceName:(id)arg1 withName:(id)arg2 inTable:(struct __CFUUID { }*)arg3 trackedReference:(id)arg4;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(struct __CFUUID { }*)arg2;
- (id)trackedReferencesMatchingString:(id)arg1 scopedToTable:(struct __CFUUID { }*)arg2;

@end
