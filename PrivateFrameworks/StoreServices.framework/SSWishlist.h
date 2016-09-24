/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWishlist : NSObject {
    int  _accountIdentifier;
    SSSQLiteDatabase * _database;
}

@property (nonatomic, readonly) int accountIdentifier;
@property (nonatomic, copy) NSNumber *lastSyncTime;

+ (BOOL)existsForAccountIdentifier:(int)arg1;

- (int)accountIdentifier;
- (void)dealloc;
- (BOOL)deleteBackingStore;
- (id)initWithAccountIdentifier:(int)arg1;
- (id)lastSyncTime;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (void)setLastSyncTime:(id)arg1;

@end
