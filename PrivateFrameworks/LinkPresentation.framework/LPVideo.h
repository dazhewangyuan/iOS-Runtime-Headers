/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding> {
    NSString * _MIMEType;
    NSData * _data;
    NSURL * _fileURL;
    BOOL  _hasAudio;
    NSObject<OS_dispatch_queue> * _mediaLoadingQueue;
    NSURL * _streamingURL;
    NSURL * _youTubeURL;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly) AVAsset *_asset;
@property (nonatomic, readonly) unsigned long _encodedSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _intrinsicSize;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, readonly) BOOL hasAudio;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSURL *streamingURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSURL *youTubeURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)_asset;
- (unsigned long)_encodedSize;
- (id)_initWithVideo:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSize;
- (void)_mapDataFromFileURL;
- (BOOL)_shouldEncodeData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (BOOL)hasAudio;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3;
- (id)initWithStreamingURL:(id)arg1 hasAudio:(BOOL)arg2;
- (id)initWithYouTubeURL:(id)arg1;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setFileURL:(id)arg1;
- (id)streamingURL;
- (id)youTubeURL;

@end
