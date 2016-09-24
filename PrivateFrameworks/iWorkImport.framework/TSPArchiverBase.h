/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiverBase : NSObject <TSPArchivableContent> {
    NSMutableDictionary * _alternates;
    NSHashTable * _commandToModelReferences;
    struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; } * _currentFieldPath;
    NSHashTable * _dataReferences;
    struct unordered_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > { struct __hash_table<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, std::__1::__unordered_map_hasher<const TSP::FieldPath, std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, TSP::FieldPathHash, true>, std::__1::__unordered_map_equal<const TSP::FieldPath, std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, TSP::FieldPathEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * _fieldRules;
    NSHashTable * _lazyReferences;
    struct auto_ptr<google::protobuf::Message> { 
        struct Message {} *__ptr_; 
    }  _message;
    unsigned int  _messageVersion;
    TSPObject * _object;
    NSHashTable * _strongReferences;
    NSHashTable * _weakReferences;
}

@property (nonatomic, readonly) NSDictionary *alternates;
@property (nonatomic, readonly) NSHashTable *commandToModelReferences;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{FieldPath=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField' */ struct *currentFieldPath; /* unknown property attribute:  std::__1::allocator<google::protobuf::UnknownField> >}}[1I]i{RepeatedField<unsigned int>=^Iii}i} */
@property (nonatomic, readonly) NSHashTable *dataReferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{FieldPath=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField' */ struct *fieldPath; /* unknown property attribute:  std::__1::allocator<google::protobuf::UnknownField> >}}[1I]i{RepeatedField<unsigned int>=^Iii}i} */
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isContentUnknown;
@property (nonatomic, readonly) BOOL isDiff;
@property (nonatomic, readonly) BOOL isForCopy;
@property (nonatomic, readonly) NSHashTable *lazyReferences;
@property (nonatomic, readonly) unsigned int messageType;
@property (nonatomic, readonly) unsigned int messageVersion;
@property (nonatomic) unsigned int messageVersion;
@property (nonatomic, readonly) unsigned int minimumSupportedVersion;
@property (nonatomic, readonly) TSPObject *object;
@property (nonatomic, readonly) NSHashTable *strongReferences;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int targetType;
@property (nonatomic, readonly) NSHashTable *weakReferences;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addAlternateArchiverForVersion:(unsigned int)arg1 fieldPath:(const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)arg2 isDiffArchiver:(BOOL)arg3;
- (void)addWeakReferenceToObjectUUID:(id)arg1;
- (id)alternateDiffForVersion:(unsigned int)arg1;
- (id)alternateDiffForVersion:(unsigned int)arg1 field:(int)arg2;
- (id)alternateDiffForVersion:(unsigned int)arg1 fieldPath:(int*)arg2;
- (id)alternateDiffForVersion:(unsigned int)arg1 fieldPath:(int*)arg2 baseFieldPath:(const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)arg3;
- (id)alternates;
- (void)cleanup;
- (id)commandToModelReferences;
- (const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)currentFieldPath;
- (id)dataReferences;
- (void)dealloc;
- (void)enumerateRulesUsingBlock:(id /* block */)arg1;
- (const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)fieldPath;
- (id)init;
- (id)initWithObject:(id)arg1;
- (BOOL)isContentUnknown;
- (BOOL)isDiff;
- (BOOL)isForCopy;
- (id)lazyReferences;
- (struct Message { int (**x1)(); }*)message;
- (unsigned int)messageType;
- (unsigned int)messageVersion;
- (struct Message { int (**x1)(); }*)messageWithNewFunction:(int (*)arg1;
- (unsigned int)minimumSupportedVersion;
- (id)object;
- (void)pushScopeForField:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)releaseMessage;
- (void)setDataReference:(id)arg1 message:(struct DataReference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; }*)arg2;
- (void)setDataReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::DataReference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setIgnoreAndDropRuleForField:(int)arg1;
- (void)setIgnoreAndDropRuleForFieldPath:(int*)arg1;
- (void)setIgnoreAndPreserveRuleForField:(int)arg1;
- (void)setIgnoreAndPreserveRuleForFieldPath:(int*)arg1;
- (void)setMessageVersion:(unsigned int)arg1;
- (void)setMustUnderstandRuleForField:(int)arg1;
- (void)setMustUnderstandRuleForFieldPath:(int*)arg1;
- (void)setRule:(int)arg1 forFieldPath:(int*)arg2;
- (void)setSparseReferenceArray:(id)arg1 isWeak:(BOOL)arg2 message:(struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg3;
- (void)setSparseReferenceArray:(id)arg1 message:(struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setSparseWeakObjectUUIDPathReferenceArray:(id)arg1 message:(struct SparseUUIDPathArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseUUIDPathArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setSparseWeakObjectUUIDReferenceArray:(id)arg1 message:(struct SparseUUIDArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseUUIDArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setSparseWeakReferenceArray:(id)arg1 message:(struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg2;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; bool x7; }*)arg2;
- (void)setStrongLazyReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; bool x7; }*)arg2;
- (void)setStrongReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setWeakLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; bool x7; }*)arg2;
- (void)setWeakReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; bool x7; }*)arg2;
- (void)setWeakReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setWeakReferenceToObjectUUID:(id)arg1 message:(struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; }*)arg2;
- (void)setWeakReferenceToObjectUUIDArray:(id)arg1 message:(struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setWeakReferenceToObjectUUIDData:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_1_1_3; } x1; }*)arg1 message:(struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; }*)arg2;
- (void)setWeakReferenceToObjectUUIDPath:(id)arg1 message:(struct UUIDPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg2;
- (void)setWeakReferenceToObjectUUIDPathArray:(id)arg1 message:(struct RepeatedPtrField<TSP::UUIDPath> { void **x1; int x2; int x3; int x4; }*)arg2;
- (id)strongReferences;
- (int)targetType;
- (id)weakReferences;

@end
