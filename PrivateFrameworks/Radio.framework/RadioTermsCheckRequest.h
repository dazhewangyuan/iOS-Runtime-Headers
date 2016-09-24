/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTermsCheckRequest : RadioRequest {
    unsigned int  _acceptedTermsVersion;
    SSURLConnectionRequest * _request;
}

@property (nonatomic) unsigned int acceptedTermsVersion;

- (void).cxx_destruct;
- (unsigned int)acceptedTermsVersion;
- (void)cancel;
- (void)setAcceptedTermsVersion:(unsigned int)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
