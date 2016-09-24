/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPRemoteDataController : NSObject {
    NSURL * _URL;
    HLPURLSession * _URLSession;
    BOOL  _hasLoaded;
    BOOL  _loading;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) BOOL hasLoaded;
@property (nonatomic) BOOL loading;

- (void).cxx_destruct;
- (id)URL;
- (void)cancel;
- (void)clearData;
- (void)dealloc;
- (void)fetchDataWithDataType:(int)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)hasLoaded;
- (id)initWithURL:(id)arg1;
- (BOOL)loading;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (void)setHasLoaded:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setURL:(id)arg1;

@end
