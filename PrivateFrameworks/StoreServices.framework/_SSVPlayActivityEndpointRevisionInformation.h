/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet * _additionalPendingRevisionsIndexSet;
    unsigned int  _currentRevision;
    NSString * _revisionVersionToken;
}

@property (nonatomic, copy) NSIndexSet *additionalPendingRevisionsIndexSet;
@property (nonatomic) unsigned int currentRevision;
@property (nonatomic, copy) NSString *revisionVersionToken;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalPendingRevisionsIndexSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentRevision;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)revisionVersionToken;
- (void)setAdditionalPendingRevisionsIndexSet:(id)arg1;
- (void)setCurrentRevision:(unsigned int)arg1;
- (void)setRevisionVersionToken:(id)arg1;

@end
