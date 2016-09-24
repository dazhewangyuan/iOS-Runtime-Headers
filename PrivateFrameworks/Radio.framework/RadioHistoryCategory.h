/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioHistoryCategory : NSObject <NSCopying, NSMutableCopying> {
    NSString * _categoryDescription;
    NSArray * _items;
    NSString * _name;
    NSString * _stationHash;
    int  _stationID;
    int  _type;
}

@property (nonatomic, readonly, copy) NSString *categoryDescription;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) int stationID;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)categoryDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)stationHash;
- (int)stationID;
- (int)type;

@end
