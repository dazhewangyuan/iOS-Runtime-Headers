/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NanoPhoneVoicemailTranscript : PBCodable <NSCopying> {
    NSString * _transcriptionString;
    int  _voicemailNumber;
}

@property (nonatomic, readonly) BOOL hasTranscriptionString;
@property (nonatomic, retain) NSString *transcriptionString;
@property (nonatomic) int voicemailNumber;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTranscriptionString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTranscriptionString:(id)arg1;
- (void)setVoicemailNumber:(int)arg1;
- (id)transcriptionString;
- (int)voicemailNumber;
- (void)writeTo:(id)arg1;

@end
