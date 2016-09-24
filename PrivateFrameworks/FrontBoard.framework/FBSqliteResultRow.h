/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSqliteResultRow : NSObject <NSCopying> {
    NSArray * _columnNames;
    struct sqlite3_stmt { } * _statement;
}

@property (nonatomic, readonly) unsigned int count;

+ (id)resultRowWithStatement:(struct sqlite3_stmt { }*)arg1;

- (id)_columnNames;
- (unsigned int)_indexForKey:(id)arg1;
- (id)columnNameAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)dataAtIndex:(unsigned int)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (double)doubleAtIndex:(unsigned int)arg1;
- (double)doubleForKey:(id)arg1;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1;
- (int)integerAtIndex:(unsigned int)arg1;
- (int)integerForKey:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectForKey:(id)arg1;
- (id)stringAtIndex:(unsigned int)arg1;
- (id)stringForKey:(id)arg1;

@end
