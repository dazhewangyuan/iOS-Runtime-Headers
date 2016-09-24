/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface _GSUJSONReader : NSObject {
    NSError * error;
    id  input;
    int  kind;
}

+ (BOOL)validForJSON:(id)arg1 depth:(unsigned int)arg2 allowFragments:(BOOL)arg3;

- (void)dealloc;
- (id)error;
- (unsigned int)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned int*)arg2;
- (id)init;
- (id)parseData:(id)arg1 options:(unsigned int)arg2;
- (id)parseStream:(id)arg1 options:(unsigned int)arg2;
- (id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned int)arg2 options:(unsigned int)arg3;
- (void)setError:(id)arg1;

@end
