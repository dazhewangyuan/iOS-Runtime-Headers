/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSeekableData : NSObject <SGSeekable> {
    const void * _bytes;
    NSData * _data;
    unsigned int  _length;
    unsigned int  _offsetInFile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) unsigned int offsetInFile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const void*)dataOfLength:(unsigned int)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1 error:(id*)arg2;
- (unsigned int)offsetInFile;
- (void)seekToFileOffset:(unsigned int)arg1;

@end
