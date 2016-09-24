/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFStartSearchFeedback : SFFeedback {
    NSString * _input;
    unsigned int  _queryId;
    unsigned int  _triggerEvent;
    NSString * _uuid;
}

@property (nonatomic, copy) NSString *input;
@property (nonatomic) unsigned int queryId;
@property (nonatomic) unsigned int triggerEvent;
@property (nonatomic, retain) NSString *uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned int)arg2;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned int)arg2 queryId:(unsigned int)arg3;
- (id)input;
- (unsigned int)queryId;
- (void)setInput:(id)arg1;
- (void)setQueryId:(unsigned int)arg1;
- (void)setTriggerEvent:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (unsigned int)triggerEvent;
- (id)uuid;

@end
