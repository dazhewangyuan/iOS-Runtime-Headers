/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlatformRequestOperation : NSOperation {
    NSMutableDictionary * _additionalParameters;
    NSString * _caller;
    SSVPlatformContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _imageProfile;
    NSArray * _itemIdentifiers;
    NSString * _keyProfile;
    int  _personalizationStyle;
    id /* block */  _responseBlock;
    NSString * _storeFrontSuffix;
    NSNumber * _timeoutInterval;
    NSString * _userAgent;
}

@property (copy) NSString *imageProfile;
@property (copy) NSArray *itemIdentifiers;
@property (copy) NSString *keyProfile;
@property int personalizationStyle;
@property (copy) id /* block */ responseBlock;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSNumber *timeoutInterval;

- (void).cxx_destruct;
- (id)_URLBagContext;
- (id)_callerValue;
- (void)_enumerateQueryParametersUsingBlock:(id /* block */)arg1;
- (id)_lookupWithRequest:(id)arg1 error:(id*)arg2;
- (void)_makeLocalJSSignRequest;
- (void)_makeLocalMescalRequest;
- (void)_makeLookupRequestWithPersonalizationStyle:(int)arg1;
- (void)_setCaller:(id)arg1;
- (void)_setUserAgent:(id)arg1;
- (id)imageProfile;
- (id)init;
- (id)initWithPlatformContext:(id)arg1;
- (id)itemIdentifiers;
- (id)keyProfile;
- (void)main;
- (int)personalizationStyle;
- (id /* block */)responseBlock;
- (void)setImageProfile:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)setPersonalizationStyle:(int)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)setStoreFrontSuffix:(id)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)storeFrontSuffix;
- (id)timeoutInterval;
- (id)valueForRequestParameter:(id)arg1;

@end
