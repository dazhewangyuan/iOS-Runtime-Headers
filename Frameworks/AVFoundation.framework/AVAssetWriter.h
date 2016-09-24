/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriter : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {
    AVAssetWriterInternal * _internal;
}

@property (nonatomic, readonly) NSArray *availableMediaTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *directoryForTemporaryFiles;
@property (readonly) NSError *error;
@property (readonly) unsigned int hash;
@property (getter=_helper, readonly, retain) AVAssetWriterHelper *helper;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic, readonly, copy) NSString *outputFileType;
@property (nonatomic, readonly, copy) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (readonly) int status;
@property (readonly) Class superclass;

+ (id)_errorForOSStatus:(long)arg1;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (id)_helper;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(id /* block */)arg3;
- (BOOL)_supportsSampleReferencesReturningError:(id*)arg1;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (id)availableMediaTypes;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (void)cancelWriting;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (id)description;
- (id)directoryForTemporaryFiles;
- (void)endSessionAtSourceTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (id)error;
- (void)finalize;
- (BOOL)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
- (id)inputGroups;
- (id)inputs;
- (id)metadata;
- (struct { int x1; int x2; unsigned int x3; int x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (id)outputFileType;
- (id)outputURL;
- (struct { int x1; int x2; unsigned int x3; int x4; })overallDurationHint;
- (float)preferredRate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setOverallDurationHint:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)startSessionAtSourceTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (BOOL)startWriting;
- (int)status;

@end
