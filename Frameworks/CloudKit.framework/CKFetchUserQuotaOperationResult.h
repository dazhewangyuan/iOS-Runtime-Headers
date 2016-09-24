/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserQuotaOperationResult : CKOperationResult <NSSecureCoding> {
    unsigned int  _quotaAvailable;
}

@property (nonatomic) unsigned int quotaAvailable;

+ (BOOL)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)quotaAvailable;
- (void)setQuotaAvailable:(unsigned int)arg1;

@end
