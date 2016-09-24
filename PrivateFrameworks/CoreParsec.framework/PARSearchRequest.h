/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSearchRequest : PARRequest <NSSecureCoding> {
    unsigned int  _bingWebResultsType;
    NSString * _queryString;
    NSDictionary * _topics;
}

@property (nonatomic) unsigned int bingWebResultsType;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, retain) NSDictionary *topics;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)bingWebResultsType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)queryString;
- (void)setBingWebResultsType:(unsigned int)arg1;
- (void)setQueryString:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;

@end
