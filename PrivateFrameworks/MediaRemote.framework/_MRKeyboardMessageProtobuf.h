/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying> {
    _MRTextEditingAttributesProtobuf * _attributes;
    NSData * _encryptedTextCyphertext;
    struct { 
        unsigned int state : 1; 
    }  _has;
    int  _state;
}

@property (nonatomic, retain) _MRTextEditingAttributesProtobuf *attributes;
@property (nonatomic, retain) NSData *encryptedTextCyphertext;
@property (nonatomic, readonly) BOOL hasAttributes;
@property (nonatomic, readonly) BOOL hasEncryptedTextCyphertext;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;

- (int)StringAsState:(id)arg1;
- (id)attributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedTextCyphertext;
- (BOOL)hasAttributes;
- (BOOL)hasEncryptedTextCyphertext;
- (BOOL)hasState;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setEncryptedTextCyphertext:(id)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
