/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageHeaders : NSObject <NSCopying, SGHeaderCollection> {
    NSData * _data;
    unsigned long  _preferredEncoding;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned long preferredEncoding;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)addressListFromEncodedString:(id)arg1;
+ (id)basicHeaders;
+ (id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned long)arg2;
+ (id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned int)arg2 firstLineBuffer:(unsigned int)arg3;
+ (BOOL)isStructuredHeaderKey:(id)arg1;
+ (BOOL)shouldDecodeHeaderForKey:(id)arg1;
+ (id)uniqueHeaderKeyStringForString:(id)arg1;

- (id)_capitalizedKeyForKey:(id)arg1;
- (id)_commaSeparatedValuesForKey:(id)arg1 includeAngleBracket:(BOOL)arg2;
- (unsigned long)_contentTypeEncoding;
- (id)_copyAddressListForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned int*)arg2 decoded:(BOOL)arg3;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1 offset:(unsigned int*)arg2;
- (BOOL)_isStructuredHeaderKey:(id)arg1;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)allHeaderKeys;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;
- (id)copyAddressListForBcc;
- (id)copyAddressListForCc;
- (id)copyAddressListForReplyTo;
- (id)copyAddressListForResentFrom;
- (id)copyAddressListForSender;
- (id)copyAddressListForTo;
- (id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)copyFirstNonDecodedHeaderForKey:(id)arg1;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)copyHeadersForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)encodedHeaders;
- (id)firstHeaderForKey:(id)arg1;
- (id)firstSenderAddress;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)headerData;
- (id)headersDictionary;
- (id)headersForKey:(id)arg1;
- (id)init;
- (id)initWithASCIIHeaderString:(id)arg1;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned long)arg2;
- (id)listUnsubscribeCommands;
- (BOOL)messageIsFromEntourage;
- (id)mutableCopy;
- (unsigned long)preferredEncoding;
- (id)references;
- (void)setData:(id)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (id)sg_firstHeaderForKey:(id)arg1;

@end
