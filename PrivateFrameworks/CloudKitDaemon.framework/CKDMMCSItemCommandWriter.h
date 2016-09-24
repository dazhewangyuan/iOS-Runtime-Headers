/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemCommandWriter : NSObject <CKDMMCSItemReaderWriterProtocol> {
    CKDMMCSItem * _MMCSItem;
    CKDMMCSItemGroupContext * _MMCSRequest;
    NSMutableIndexSet * _byteRanges;
    unsigned int  _maximumLength;
}

@property (nonatomic, retain) CKDMMCSItem *MMCSItem;
@property (nonatomic, retain) CKDMMCSItemGroupContext *MMCSRequest;
@property (nonatomic, retain) NSMutableIndexSet *byteRanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int maximumLength;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MMCSItem;
- (id)MMCSRequest;
- (id)byteRanges;
- (BOOL)closeWithError:(id*)arg1;
- (void)dealloc;
- (id)getFileMetadataWithError:(id*)arg1;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;
- (BOOL)isContiguous;
- (unsigned int)maximumLength;
- (BOOL)openWithError:(id*)arg1;
- (BOOL)readBytesAtOffset:(unsigned int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3 bytesRead:(unsigned int*)arg4 error:(id*)arg5;
- (void)setByteRanges:(id)arg1;
- (void)setMMCSItem:(id)arg1;
- (void)setMMCSRequest:(id)arg1;
- (void)setMaximumLength:(unsigned int)arg1;
- (BOOL)writeBytesAtOffset:(unsigned int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3 bytesWritten:(unsigned int*)arg4 error:(id*)arg5;

@end
