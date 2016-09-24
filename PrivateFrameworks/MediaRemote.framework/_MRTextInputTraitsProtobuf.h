/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {
    int  _autocapitalizationType;
    BOOL  _autocorrection;
    BOOL  _enablesReturnKeyAutomatically;
    struct { 
        unsigned int validTextRangeLength : 1; 
        unsigned int validTextRangeLocation : 1; 
        unsigned int autocapitalizationType : 1; 
        unsigned int keyboardType : 1; 
        unsigned int returnKeyType : 1; 
        unsigned int autocorrection : 1; 
        unsigned int enablesReturnKeyAutomatically : 1; 
        unsigned int secureTextEntry : 1; 
        unsigned int spellchecking : 1; 
    }  _has;
    int  _keyboardType;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _pINEntrySeparatorIndexes;
    int  _returnKeyType;
    BOOL  _secureTextEntry;
    BOOL  _spellchecking;
    unsigned int  _validTextRangeLength;
    unsigned int  _validTextRangeLocation;
}

@property (nonatomic) int autocapitalizationType;
@property (nonatomic) BOOL autocorrection;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL hasAutocapitalizationType;
@property (nonatomic) BOOL hasAutocorrection;
@property (nonatomic) BOOL hasEnablesReturnKeyAutomatically;
@property (nonatomic) BOOL hasKeyboardType;
@property (nonatomic) BOOL hasReturnKeyType;
@property (nonatomic) BOOL hasSecureTextEntry;
@property (nonatomic) BOOL hasSpellchecking;
@property (nonatomic) BOOL hasValidTextRangeLength;
@property (nonatomic) BOOL hasValidTextRangeLocation;
@property (nonatomic) int keyboardType;
@property (nonatomic, readonly) unsigned int*pINEntrySeparatorIndexes;
@property (nonatomic, readonly) unsigned int pINEntrySeparatorIndexesCount;
@property (nonatomic) int returnKeyType;
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) BOOL spellchecking;
@property (nonatomic) unsigned int validTextRangeLength;
@property (nonatomic) unsigned int validTextRangeLocation;

- (int)StringAsAutocapitalizationType:(id)arg1;
- (int)StringAsKeyboardType:(id)arg1;
- (int)StringAsReturnKeyType:(id)arg1;
- (void)addPINEntrySeparatorIndexes:(unsigned int)arg1;
- (int)autocapitalizationType;
- (id)autocapitalizationTypeAsString:(int)arg1;
- (BOOL)autocorrection;
- (void)clearPINEntrySeparatorIndexes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)hasAutocapitalizationType;
- (BOOL)hasAutocorrection;
- (BOOL)hasEnablesReturnKeyAutomatically;
- (BOOL)hasKeyboardType;
- (BOOL)hasReturnKeyType;
- (BOOL)hasSecureTextEntry;
- (BOOL)hasSpellchecking;
- (BOOL)hasValidTextRangeLength;
- (BOOL)hasValidTextRangeLocation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)keyboardType;
- (id)keyboardTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int*)pINEntrySeparatorIndexes;
- (unsigned int)pINEntrySeparatorIndexesAtIndex:(unsigned int)arg1;
- (unsigned int)pINEntrySeparatorIndexesCount;
- (BOOL)readFrom:(id)arg1;
- (int)returnKeyType;
- (id)returnKeyTypeAsString:(int)arg1;
- (BOOL)secureTextEntry;
- (void)setAutocapitalizationType:(int)arg1;
- (void)setAutocorrection:(BOOL)arg1;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (void)setHasAutocapitalizationType:(BOOL)arg1;
- (void)setHasAutocorrection:(BOOL)arg1;
- (void)setHasEnablesReturnKeyAutomatically:(BOOL)arg1;
- (void)setHasKeyboardType:(BOOL)arg1;
- (void)setHasReturnKeyType:(BOOL)arg1;
- (void)setHasSecureTextEntry:(BOOL)arg1;
- (void)setHasSpellchecking:(BOOL)arg1;
- (void)setHasValidTextRangeLength:(BOOL)arg1;
- (void)setHasValidTextRangeLocation:(BOOL)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setPINEntrySeparatorIndexes:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setReturnKeyType:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSpellchecking:(BOOL)arg1;
- (void)setValidTextRangeLength:(unsigned int)arg1;
- (void)setValidTextRangeLocation:(unsigned int)arg1;
- (BOOL)spellchecking;
- (unsigned int)validTextRangeLength;
- (unsigned int)validTextRangeLocation;
- (void)writeTo:(id)arg1;

@end
