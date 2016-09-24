/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSearchIndexableNoteContextIdentifier : NSObject <ICPropertyListSerializable, NSCopying> {
    NSString * _contextIdentifierString;
    BOOL  _forAnyContext;
    BOOL  _isMainContext;
}

@property (nonatomic, readonly) NSString *contextIdentifierString;
@property (nonatomic, readonly) BOOL forAnyContext;
@property (nonatomic, readonly) BOOL isMainContext;

+ (id)identifierForAnyContext;

- (void).cxx_destruct;
- (id)contextIdentifierString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)forAnyContext;
- (unsigned int)hash;
- (id)initForAnyContext;
- (id)initWithContextIdentifierString:(id)arg1 isMainContext:(BOOL)arg2;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(int)arg2;
- (BOOL)isCompatibleWithContextIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMainContext;
- (id)propertyListObjectRepresentation;

@end
