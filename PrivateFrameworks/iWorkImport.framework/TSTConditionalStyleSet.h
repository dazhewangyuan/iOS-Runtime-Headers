/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConditionalStyleSet : TSPObject <TSPCopying, TSTCellDiffing> {
    NSMutableArray * mConditionalStyleSetRules;
}

+ (id)cellDiffProperties;
+ (id)noRuleConditionalStyleSetWithContext:(id)arg1;

- (BOOL)containsUidReferences;
- (id)copyByClearingUids:(id)arg1 containingTableID:(struct __CFUUID { }*)arg2;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRemappingOwnerUIDsWithMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3;
- (id)copyByRepairingBadReferences:(id)arg1 tableIDHistory:(id)arg2 tableID:(struct __CFUUID { }*)arg3 inCellCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 offset:(struct { int x1; int x2; })arg5;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)copyToGeometricFormForTableModel:(id)arg1 inCellCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)copyToGeometricFormWithCalcEngine:(id)arg1 tableID:(struct __CFUUID { }*)arg2 containingCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (id)copyToUidFormForTableModel:(id)arg1 inCellCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 preserveHostCell:(BOOL)arg3;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithConditionalStyleSet:(id)arg1;
- (id)initWithContext:(id)arg1 rules:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualForInspector:(id)arg1;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;
- (id)rules;
- (void)saveToArchiver:(id)arg1;
- (void)setHostCell:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_1_1_3; } x1; }*)arg1 hostColumnUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_1_1_3; } x1; }*)arg2 hostRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_1_1_3; } x1; }*)arg3;

@end
