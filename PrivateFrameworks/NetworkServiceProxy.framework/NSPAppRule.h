/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPAppRule : NEAppRule {
    NSArray * _directTLSPorts;
    BOOL  _disableFallback;
    BOOL  _divertDNSOnly;
    BOOL  _enableDirectExtendedValidation;
    BOOL  _enableDirectMultipath;
    BOOL  _enableDirectTFO;
    BOOL  _enabled;
    unsigned int  _fallbackBufferLimit;
    unsigned int  _fallbackCountBeforeImmediateFallback;
    double  _fallbackTimeout;
    NSArray * _machoUUIDs;
    NSString * _proxyEvaluationPath;
    unsigned int  _serviceID;
    BOOL  _useCustomProtocol;
}

@property (copy) NSArray *directTLSPorts;
@property BOOL disableFallback;
@property BOOL divertDNSOnly;
@property BOOL enableDirectExtendedValidation;
@property BOOL enableDirectMultipath;
@property BOOL enableDirectTFO;
@property BOOL enabled;
@property unsigned int fallbackBufferLimit;
@property unsigned int fallbackCountBeforeImmediateFallback;
@property double fallbackTimeout;
@property (retain) NSArray *machoUUIDs;
@property (copy) NSString *proxyEvaluationPath;
@property unsigned int serviceID;
@property BOOL useCustomProtocol;

+ (id)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2;
+ (void)loadAppRules:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)validateRuleDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyAccountIdentifierConditions;
- (id)copyExecutableConditions;
- (id)copyTLVData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)directTLSPorts;
- (BOOL)disableFallback;
- (BOOL)divertDNSOnly;
- (BOOL)enableDirectExtendedValidation;
- (BOOL)enableDirectMultipath;
- (BOOL)enableDirectTFO;
- (BOOL)enabled;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fallbackBufferLimit;
- (unsigned int)fallbackCountBeforeImmediateFallback;
- (double)fallbackTimeout;
- (id)initFromDictionary:(id)arg1;
- (id)initFromTLVs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)machoUUIDs;
- (id)proxyEvaluationPath;
- (BOOL)resetMachOUUIDs;
- (void)saveWithCompletionHandler:(id /* block */)arg1;
- (unsigned int)serviceID;
- (void)setDirectTLSPorts:(id)arg1;
- (void)setDisableFallback:(BOOL)arg1;
- (void)setDivertDNSOnly:(BOOL)arg1;
- (void)setEnableDirectExtendedValidation:(BOOL)arg1;
- (void)setEnableDirectMultipath:(BOOL)arg1;
- (void)setEnableDirectTFO:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFallbackBufferLimit:(unsigned int)arg1;
- (void)setFallbackCountBeforeImmediateFallback:(unsigned int)arg1;
- (void)setFallbackTimeout:(double)arg1;
- (void)setMachoUUIDs:(id)arg1;
- (void)setProxyEvaluationPath:(id)arg1;
- (void)setServiceID:(unsigned int)arg1;
- (void)setUseCustomProtocol:(BOOL)arg1;
- (BOOL)useCustomProtocol;

@end
