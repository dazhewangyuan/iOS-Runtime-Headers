/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUFileInputStream : NSObject <SFUInputStream> {
    int  mCurrentOffset;
    int  mEndOffset;
    int  mFd;
    BOOL  mIsCachingDisabled;
    int  mStartOffset;
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
- (id)initWithFileDescriptor:(int)arg1 offset:(int)arg2 length:(int)arg3;
- (id)initWithPath:(id)arg1 offset:(int)arg2;
- (id)initWithPath:(id)arg1 offset:(int)arg2 length:(int)arg3;
- (int)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(int)arg1;

@end
