/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3BitMaskPredicate : ML3PropertyPredicate {
    int  _mask;
    int  _value;
}

@property (nonatomic) int mask;
@property (nonatomic) int value;

+ (id)predicateWithProperty:(id)arg1 mask:(int)arg2 value:(int)arg3;

- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 mask:(int)arg2 value:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)mask;
- (void)setMask:(int)arg1;
- (void)setValue:(int)arg1;
- (int)value;

@end
