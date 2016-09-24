/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterAbsoluteVerdict : NEFilterVerdict <NSCopying, NSSecureCoding> {
    unsigned int  _inboundPassOffset;
    unsigned int  _inboundPeekOffset;
    unsigned int  _outboundPassOffset;
    unsigned int  _outboundPeekOffset;
}

@property unsigned int inboundPassOffset;
@property unsigned int inboundPeekOffset;
@property unsigned int outboundPassOffset;
@property unsigned int outboundPeekOffset;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)inboundPassOffset;
- (unsigned int)inboundPeekOffset;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrop:(BOOL)arg1 inboundPassOffset:(unsigned int)arg2 inboundPeekOffset:(unsigned int)arg3 outboundPassOffset:(unsigned int)arg4 outboundPeekOffset:(unsigned int)arg5;
- (unsigned int)outboundPassOffset;
- (unsigned int)outboundPeekOffset;
- (void)setInboundPassOffset:(unsigned int)arg1;
- (void)setInboundPeekOffset:(unsigned int)arg1;
- (void)setOutboundPassOffset:(unsigned int)arg1;
- (void)setOutboundPeekOffset:(unsigned int)arg1;

@end
