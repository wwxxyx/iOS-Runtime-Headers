/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSPPackageMetadata : TSPObject {
    struct PackageMetadata { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned long long last_object_identifier_; 
        struct RepeatedPtrField<TSP::ComponentInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } components_; 
        struct RepeatedPtrField<TSP::DataInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } datas_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } read_version_; 
        int _read_version_cached_byte_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } write_version_; 
        int _write_version_cached_byte_size_; 
        int _cached_size_; 
        unsigned int _has_bits_[1]; 
    } _message;
}

- (struct PackageMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct RepeatedPtrField<TSP::ComponentInfo> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct RepeatedPtrField<TSP::DataInfo> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; int x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; int x10; unsigned int x11[1]; }*)message;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (long long)tsp_identifier;

@end
