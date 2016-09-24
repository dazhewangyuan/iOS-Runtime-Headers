/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterDataVerdict : NEFilterVerdict <NSCopying, NSSecureCoding> {
    unsigned int  _passBytes;
    unsigned int  _peekBytes;
    NSURL * _url;
}

@property unsigned int passBytes;
@property unsigned int peekBytes;
@property (retain) NSURL *url;

+ (id)allowVerdict;
+ (id)dataVerdictWithPassBytes:(unsigned int)arg1 peekBytes:(unsigned int)arg2;
+ (id)dropVerdict;
+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)passBytes;
- (unsigned int)peekBytes;
- (void)setPassBytes:(unsigned int)arg1;
- (void)setPeekBytes:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
