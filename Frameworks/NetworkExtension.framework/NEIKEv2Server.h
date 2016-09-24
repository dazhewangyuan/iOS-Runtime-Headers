/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2Server : NSObject <NSObject> {
    NSArray * _additionalIPv4ServerAddresses;
    NSArray * _additionalIPv6ServerAddresses;
    unsigned int  _nextCount;
    NSObject<OS_dispatch_source> * _redirectTimer;
    NSString * _redirectedAddress;
    NSString * _redirectedFromAddress;
    unsigned int  _redirects;
    NSMutableArray * _resolvedAddresses;
    NSMutableArray * _resolvedRedirectedAddresses;
    NSString * _serverAddress;
}

@property (retain) NSArray *additionalIPv4ServerAddresses;
@property (retain) NSArray *additionalIPv6ServerAddresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property unsigned int nextCount;
@property (retain) NSObject<OS_dispatch_source> *redirectTimer;
@property (retain) NSString *redirectedAddress;
@property (retain) NSString *redirectedFromAddress;
@property unsigned int redirects;
@property (retain) NSMutableArray *resolvedAddresses;
@property (retain) NSMutableArray *resolvedRedirectedAddresses;
@property (retain) NSString *serverAddress;
@property (readonly) Class superclass;

+ (id)getSynthesizedIPv6Address:(id)arg1 outgoingIf:(unsigned int)arg2 nat64Prefixes:(struct { int x1; unsigned char x2[12]; }*)arg3 numNat64Prefixes:(int)arg4;

- (void).cxx_destruct;
- (id)additionalIPv4ServerAddresses;
- (id)additionalIPv6ServerAddresses;
- (BOOL)checkRedirectCount;
- (BOOL)chooseNextServerOrRedirectedResolvedAddress;
- (void)dealloc;
- (id)getServerOrRedirectedAddress;
- (id)getViableServerAddressForPath:(id)arg1;
- (unsigned int)nextCount;
- (id)redirectTimer;
- (id)redirectedAddress;
- (id)redirectedFromAddress;
- (unsigned int)redirects;
- (id)resolvedAddresses;
- (id)resolvedRedirectedAddresses;
- (id)serverAddress;
- (void)setAdditionalIPv4ServerAddresses:(id)arg1;
- (void)setAdditionalIPv6ServerAddresses:(id)arg1;
- (void)setNextCount:(unsigned int)arg1;
- (void)setRedirectTimer:(id)arg1;
- (void)setRedirectedAddress:(id)arg1;
- (void)setRedirectedFromAddress:(id)arg1;
- (void)setRedirects:(unsigned int)arg1;
- (void)setResolvedAddresses:(id)arg1;
- (void)setResolvedRedirectedAddresses:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (void)setServerOrRedirectedResolvedAddress:(id)arg1;
- (BOOL)startRedirectTimer;
- (void)stopRedirectTimer;

@end
