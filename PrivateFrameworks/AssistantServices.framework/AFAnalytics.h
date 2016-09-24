/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalytics : NSObject {
    int  _defaultCategoryType;
    NSObject<OS_dispatch_queue> * _queue;
    <AFAnalyticsService> * _service;
}

@property (nonatomic, readonly) int defaultCategoryType;

+ (id)sharedAnalytics;
+ (id)syncAnalytics;

- (void).cxx_destruct;
- (id)_service:(BOOL)arg1;
- (void)_stageEvent:(id)arg1;
- (void)_stageEvents:(id)arg1;
- (int)defaultCategoryType;
- (id)init;
- (id)initWithDefaultCategoryType:(int)arg1;
- (void)logEvent:(id)arg1;
- (void)logEventWithType:(int)arg1 context:(id)arg2;
- (void)logEventWithType:(int)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3;
- (void)logEventWithType:(int)arg1 contextProvider:(id /* block */)arg2;
- (void)logEventWithType:(int)arg1 contextProvider:(id /* block */)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(int)arg1 machAbsoluteTime:(unsigned int)arg2 categoryType:(int)arg3 context:(id)arg4 contextNoCopy:(BOOL)arg5;
- (void)logEventWithType:(int)arg1 machAbsoluteTime:(unsigned int)arg2 categoryType:(int)arg3 contextProvider:(id /* block */)arg4 contextProvidingQueue:(id)arg5;
- (void)logEventWithType:(int)arg1 machAbsoluteTime:(unsigned int)arg2 context:(id)arg3;
- (void)logEvents:(id)arg1;
- (void)setService:(id)arg1;

@end
