/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Query : NSObject <NSCoding, NSCopying> {
    Class  _entityClass;
    BOOL  _filtersOnDynamicProperties;
    ML3MusicLibrary * _library;
    unsigned int  _limit;
    ML3AggregateQuery * _nonDirectAggregateQuery;
    int  _options;
    NSArray * _orderingTerms;
    ML3Predicate * _predicate;
    NSString * _propertyToCount;
    BOOL  _usingSections;
}

@property (nonatomic, readonly) int anyEntityPersistentID;
@property (nonatomic, readonly) unsigned int countOfEntities;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) BOOL filtersOnDynamicProperties;
@property (nonatomic, readonly) BOOL hasEntities;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic) unsigned int limit;
@property (nonatomic, readonly) ML3AggregateQuery *nonDirectAggregateQuery;
@property (nonatomic, readonly) int options;
@property (nonatomic, readonly) NSArray *orderingTerms;
@property (nonatomic, readonly) NSString *persistentIDProperty;
@property (nonatomic, readonly) ML3Predicate *predicate;
@property (nonatomic, readonly) ML3Predicate *predicateIncludingSystemwidePredicates;
@property (nonatomic, readonly) NSString *propertyToCount;
@property (nonatomic, readonly) NSString *sectionProperty;
@property (nonatomic, readonly) NSString *selectCountSQL;
@property (nonatomic, readonly) NSString *selectPersistentIDsSQL;
@property (nonatomic, readonly) BOOL usingSections;

- (void).cxx_destruct;
- (int)anyEntityPersistentID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countOfDistinctRowsForColumn:(id)arg1;
- (unsigned int)countOfEntities;
- (id)countStatementParameters;
- (BOOL)deleteAllEntitiesFromLibrary;
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1;
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(id /* block */)arg3 usingBlock:(id /* block */)arg4;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 sectionProperty:(id)arg3 cancelBlock:(id /* block */)arg4 usingBlock:(id /* block */)arg5;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (BOOL)filtersOnDynamicProperties;
- (BOOL)hasEntities;
- (BOOL)hasRowForColumn:(id)arg1;
- (BOOL)ignoreRestrictionsPredicates;
- (BOOL)ignoreSystemFilterPredicates;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 options:(int)arg8;
- (BOOL)isEqual:(id)arg1;
- (id)library;
- (unsigned int)limit;
- (void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(BOOL)arg4 cancelHandler:(id /* block */)arg5;
- (id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(int)arg2;
- (id)nameOrderPropertyForProperty:(id)arg1;
- (id)nonDirectAggregateQuery;
- (int)options;
- (id)orderingTerms;
- (id)persistentIDParameters;
- (id)persistentIDProperty;
- (id)predicate;
- (id)predicateIncludingSystemwidePredicates;
- (id)propertyToCount;
- (id)reverseQuery;
- (id)sectionProperty;
- (id)sections;
- (id)sectionsParameters;
- (BOOL)sectionsPersistentIDColumnIsDistinct;
- (id)selectCountSQL;
- (id)selectPersistentIDsSQL;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 distinct:(BOOL)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(BOOL)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 distinct:(BOOL)arg6 limit:(unsigned int)arg7;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned int)arg4;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(BOOL)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned int)arg3;
- (id)selectSectionsSQL;
- (id)selectUnorderedPersistentIDsSQL;
- (void)setIgnoreRestrictionsPredicates:(BOOL)arg1;
- (void)setIgnoreSystemFilterPredicates:(BOOL)arg1;
- (void)setLimit:(unsigned int)arg1;
- (BOOL)usingSections;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;

@end
