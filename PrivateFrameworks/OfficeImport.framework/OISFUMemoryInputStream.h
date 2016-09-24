/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUMemoryInputStream : NSObject <OISFUBufferedInputStream> {
    const char * mCurrent;
    NSData * mData;
    const char * mEnd;
    const char * mStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 offset:(unsigned long)arg2 length:(unsigned long)arg3;
- (int)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(int)arg1;
- (BOOL)seekWithinBufferToOffset:(int)arg1;

@end
