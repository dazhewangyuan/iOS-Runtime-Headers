/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPostalAddress : SGLabeledObject {
    NSString * _cachedAddress;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _cachedAddressLock;
    SGPostalAddressComponents * _components;
    NSString * _rawAddress;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) SGPostalAddressComponents *components;
@property (nonatomic, readonly) NSString *rawAddress;

+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned int)arg4 recordId:(id)arg5 origin:(id)arg6;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)components;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned int)arg4 recordId:(id)arg5 origin:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPostalAddress:(id)arg1;
- (id)rawAddress;

@end
