/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPLazyReference : NSObject <NSCopying> {
    TSPComponent * _component;
    <TSPLazyReferenceDelegate> * _delegate;
    struct { 
        unsigned int ownershipMode : 2; 
        unsigned int isExternal : 1; 
        unsigned int allowUnknownObject : 1; 
    }  _flags;
    int  _identifier;
    Class  _objectClass;
    TSPObject * _strongObject;
    TSPObject * _weakObject;
}

@property (nonatomic) TSPComponent *component;
@property (nonatomic) <TSPLazyReferenceDelegate> *delegate;
@property (nonatomic, readonly) int identifier;
@property (nonatomic) BOOL isExternal;
@property (nonatomic, readonly) id object;
@property (nonatomic) Class objectClass;
@property (nonatomic, readonly) id objectIfLoaded;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, readonly) int ownershipMode;
@property (nonatomic, retain) TSPObject *strongObject;
@property (nonatomic, readonly) TSPObject *weakObject;

+ (id)referenceForObject:(id)arg1;
+ (id)weakReferenceForObject:(id)arg1;
+ (id)weakReferenceForObject:(id)arg1 retainedUntilArchived:(BOOL)arg2;

- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2;
- (id)additionalDescription;
- (id)component;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (BOOL)discardStrongObjectIfPossible;
- (unsigned int)hash;
- (int)identifier;
- (id)init;
- (id)initWeakReferenceWithObject:(id)arg1;
- (id)initWeakReferenceWithObject:(id)arg1 retainedUntilArchived:(BOOL)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(int)arg2 ownershipMode:(int)arg3 allowUnknownObject:(BOOL)arg4;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 ownershipMode:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLazyReference:(id)arg1;
- (BOOL)isExternal;
- (id)object;
- (Class)objectClass;
- (id)objectIfLoaded;
- (id)objectUUID;
- (int)ownershipMode;
- (BOOL)referencesObject:(id)arg1;
- (void)resetIdentifierFromCopy:(BOOL)arg1;
- (void)resetToIdentifier:(int)arg1;
- (void)setComponent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsExternal:(BOOL)arg1;
- (void)setObjectClass:(Class)arg1;
- (void)setStrongObject:(id)arg1;
- (id)strongObject;
- (id)weakObject;

@end
