/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

@interface MANetworkService : NSObject <NSURLSessionDataDelegate> {
    BOOL  _allowInvalidCert;
}

@property BOOL allowInvalidCert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)allowInvalidCert;
- (void)setAllowInvalidCert:(BOOL)arg1;

@end
