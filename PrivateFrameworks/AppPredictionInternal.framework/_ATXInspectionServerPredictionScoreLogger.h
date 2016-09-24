/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXInspectionServerPredictionScoreLogger : NSObject <_ATXAppPredictorScoreLogger> {
    NSMutableDictionary * _inputsAndSubscores;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)inputsAndSubscores;
- (void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)setAssetVersion:(int)arg1;
- (void)setPredictionClass:(id)arg1;

@end
