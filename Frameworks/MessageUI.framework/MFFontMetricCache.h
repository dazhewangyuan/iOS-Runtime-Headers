/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFFontMetricCache : NSObject {
    NSMutableDictionary * _metricCacheDictionary;
    NSString * _preferredSizeValidationKey;
}

+ (id)sharedFontMetricCache;

- (void)_didReceivePreferredFontChangedNotification:(id)arg1;
- (void)_invalidateCache;
- (float)cachedFloat:(id /* block */)arg1 forKey:(id)arg2;
- (id)cachedFont:(id /* block */)arg1 forKey:(id)arg2;
- (id)cachedPreferredFontForStyle:(id)arg1;
- (float)cachedScaledFloatWithValue:(float)arg1 fontStyle:(id)arg2;
- (void)dealloc;
- (BOOL)ensureCacheIsValid;
- (id)init;

@end
