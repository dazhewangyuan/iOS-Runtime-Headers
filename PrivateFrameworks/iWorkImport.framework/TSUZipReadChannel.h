/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipReadChannel : NSObject <TSUReadChannel> {
    TSUZipArchive * _archive;
    <TSUReadChannel> * _archiveReadChannel;
    TSUZipEntry * _entry;
    BOOL  _validateCRC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithHandler:(id /* block */)arg1 error:(id)arg2;
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(BOOL)arg3;
- (BOOL)isValid;
- (BOOL)processData:(id)arg1 CRC:(unsigned int*)arg2 isDone:(BOOL)arg3 handler:(id /* block */)arg4;
- (BOOL)readFileHeaderFromData:(id)arg1 headerLength:(unsigned int*)arg2;
- (void)readFromOffset:(int)arg1 length:(unsigned long)arg2 handler:(id /* block */)arg3;
- (void)readWithFileHeaderLength:(unsigned long)arg1 handler:(id /* block */)arg2;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setLowWater:(unsigned long)arg1;

@end
