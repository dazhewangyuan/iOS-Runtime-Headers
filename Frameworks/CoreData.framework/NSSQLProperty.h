/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLProperty : NSStoreMapping {
    NSSQLEntity * _entity;
    NSString * _name;
    NSPropertyDescription * _propertyDescription;
    unsigned int  _propertyType;
}

- (void)_setName:(id)arg1;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)externalName;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (BOOL)isAttribute;
- (BOOL)isColumn;
- (BOOL)isEntityKey;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForeignEntityKey;
- (BOOL)isForeignKey;
- (BOOL)isForeignOrderKey;
- (BOOL)isManyToMany;
- (BOOL)isOptLockKey;
- (BOOL)isPrimaryKey;
- (BOOL)isRelationship;
- (BOOL)isToMany;
- (BOOL)isToOne;
- (id)name;
- (id)propertyDescription;
- (unsigned int)propertyType;
- (void)setEntityForReadOnlyFetch:(id)arg1;
- (void)setPropertyDescription:(id)arg1;
- (unsigned int)slot;

@end
