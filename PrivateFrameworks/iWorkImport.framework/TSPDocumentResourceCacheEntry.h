/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceCacheEntry : NSObject {
    NSURL * _URL;
    int  _accessCount;
    NSDate * _contentAccessDate;
    NSString * _digestString;
    int  _fileSize;
    BOOL  _wasDownloaded;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) int accessCount;
@property (nonatomic, retain) NSDate *contentAccessDate;
@property (nonatomic, readonly) NSString *digestString;
@property (nonatomic) int fileSize;
@property (nonatomic) BOOL wasDownloaded;

- (void).cxx_destruct;
- (id)URL;
- (int)accessCount;
- (id)contentAccessDate;
- (id)digestString;
- (int)fileSize;
- (id)init;
- (id)initWithDigestString:(id)arg1;
- (void)setAccessCount:(int)arg1;
- (void)setContentAccessDate:(id)arg1;
- (void)setFileSize:(int)arg1;
- (void)setURL:(id)arg1;
- (void)setWasDownloaded:(BOOL)arg1;
- (BOOL)wasDownloaded;

@end
