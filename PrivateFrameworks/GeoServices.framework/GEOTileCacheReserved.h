/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileCacheReserved : NSObject {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } __m_; 
    struct list<CacheItem, std::__1::allocator<CacheItem> > { 
        struct __list_node_base<CacheItem, void *> { 
            struct __list_node<CacheItem, void *> {} *__prev_; 
            struct __list_node<CacheItem, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<CacheItem, void *> > > { 
            unsigned long __first_; 
        } __size_alloc_; 
    struct unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > > { 
        struct __hash_table<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, true>, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, eqkey, true>, std::__1::allocator<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> > > { 
                    struct __hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> *> { 
                    struct __hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *> >, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, eqkey, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    unsigned int _reservedCurrentCost;
    unsigned int _reservedCurrentCount;
    } _reservedList;
    } _reservedLock;
    } _reservedMap;
    unsigned int _reservedMaxCapacity;
    unsigned int _reservedMaxCost;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
