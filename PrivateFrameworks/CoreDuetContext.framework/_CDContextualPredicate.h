/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _keyPaths;
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) BOOL firesOnAnyChange;
@property (nonatomic, copy) NSSet *keyPaths;
@property (nonatomic, retain) NSPredicate *predicate;

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)predicateForChangeAtKeyPath:(id)arg1;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
- (BOOL)firesOnAnyChange;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)keyPaths;
- (id)predicate;
- (void)setKeyPaths:(id)arg1;
- (void)setPredicate:(id)arg1;

@end