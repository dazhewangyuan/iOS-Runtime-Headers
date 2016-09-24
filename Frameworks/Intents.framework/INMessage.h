/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INMessage : NSObject <INCacheableContainer, INMessageExport, NSCopying, NSSecureCoding> {
    NSString * _content;
    NSDate * _dateSent;
    NSString * _identifier;
    NSArray * _recipients;
    INPerson * _sender;
}

@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly, copy) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly, copy) INPerson *sender;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheableObjects;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSent;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)recipients;
- (id)sender;

@end
