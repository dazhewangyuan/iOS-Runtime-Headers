/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Artwork : NSObject {
    NSString * _artworkToken;
    int  _artworkType;
    NSDictionary * _interestDictionary;
    ML3MusicLibrary * _musicLibrary;
    NSURL * _originalFileURL;
    NSString * _relativePath;
    NSObject<OS_dispatch_queue> * _serialQueue;
    int  _sourceType;
}

@property (nonatomic, readonly) NSString *artworkToken;
@property (nonatomic, readonly) int artworkType;
@property (nonatomic, retain) NSDictionary *interestDictionary;
@property (nonatomic, readonly) ML3MusicLibrary *musicLibrary;
@property (nonatomic, readonly) NSURL *originalFileURL;
@property (nonatomic, readonly) NSString *relativePath;
@property (nonatomic, readonly) int sourceType;

- (void).cxx_destruct;
- (id)_interestDataFromInterestDictionary:(id)arg1;
- (id)_interestDictionaryFromInterestData:(id)arg1;
- (void)_onSerialQueue_faultInProperties;
- (id)artworkToken;
- (int)artworkType;
- (id)fileURLForEffect:(id)arg1;
- (id)fileURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)hash;
- (id)initWithToken:(id)arg1 artworkType:(int)arg2 musicLibrary:(id)arg3;
- (id)initWithToken:(id)arg1 relativePath:(id)arg2 artworkType:(int)arg3 musicLibrary:(id)arg4;
- (id)interestDictionary;
- (BOOL)isEqual:(id)arg1;
- (id)musicLibrary;
- (id)originalFileURL;
- (id)relativePath;
- (void)setInterestDictionary:(id)arg1;
- (int)sourceType;

@end
