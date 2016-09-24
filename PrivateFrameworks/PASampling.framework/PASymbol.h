/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASymbol : NSObject <PASerializable> {
    unsigned int  _length;
    NSString * _name;
    unsigned int  _offsetInOwner;
    NSMutableArray * _sourceInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isEmptySymbol;
@property unsigned int length;
@property (readonly) NSString *name;
@property (readonly) unsigned int offsetIntoOwner;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (id)_initWithSerializedSymbol:(const struct { unsigned int x1; int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1;
- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addSourceInfo:(id)arg1;
- (int)compareInfoRichnessToSymbol:(id)arg1;
- (int)compareToSymbol:(id)arg1;
- (BOOL)containsOffsetIntoSymbolOwner:(unsigned int)arg1;
- (void)copySourceInfoFromSymbol:(id)arg1;
- (id)debugDescription;
- (id)debugDescriptionForOffsetIntoOwner:(unsigned int)arg1;
- (BOOL)hasAnySourceInfo;
- (id)initEmptySymbolWithOffsetIntoOwner:(unsigned int)arg1;
- (id)initWithCSSymbolRef:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithName:(id)arg1 length:(unsigned int)arg2 offsetInOwner:(unsigned int)arg3;
- (BOOL)isEmptySymbol;
- (unsigned int)length;
- (id)name;
- (unsigned int)offsetIntoOwner;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setLength:(unsigned int)arg1;
- (void)setOffsetIntoOwner:(unsigned int)arg1;
- (unsigned long)sizeInBytesForSerializedVersion;
- (id)sourceInfoWithOffsetIntoSymbol:(unsigned int)arg1;

@end
