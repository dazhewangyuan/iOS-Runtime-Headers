/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding> {
    CKServerChangeToken * _previousServerChangeToken;
    unsigned int  _resultsLimit;
    BOOL  _wantsChanges;
}

@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic) BOOL wantsChanges;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previousServerChangeToken;
- (unsigned int)resultsLimit;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setWantsChanges:(BOOL)arg1;
- (BOOL)wantsChanges;

@end
