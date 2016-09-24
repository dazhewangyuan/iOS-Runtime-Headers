/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying> {
    SEL  _confirmSelector;
    Class  _dataClass;
    Class  _facadeClass;
    SEL  _handleSelector;
    BOOL  _isPrivate;
    NSString * _name;
    NSString * _responseName;
    NSDictionary * _slotsByName;
    NSString * _type;
}

@property (nonatomic, readonly) SEL confirmSelector;
@property (nonatomic, readonly) Class dataClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Class facadeClass;
@property (nonatomic, readonly) SEL handleSelector;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isPrivate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *responseName;
@property (nonatomic, readonly, copy) NSDictionary *slotsByName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (SEL)confirmSelector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)dataClass;
- (Class)facadeClass;
- (SEL)handleSelector;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 responseName:(id)arg2 facadeClass:(Class)arg3 dataClass:(Class)arg4 type:(id)arg5 isPrivate:(BOOL)arg6 handleSelector:(SEL)arg7 confirmSelector:(SEL)arg8 slotsByName:(id)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPrivate;
- (id)name;
- (id)responseName;
- (id)slotsByName;
- (id)type;

@end
