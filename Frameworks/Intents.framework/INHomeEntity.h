/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INHomeEntity : NSObject <INHomeEntityExport, NSCopying, NSSecureCoding> {
    int  _deviceType;
    NSString * _name;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(int)arg2 deviceType:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (int)type;

@end
