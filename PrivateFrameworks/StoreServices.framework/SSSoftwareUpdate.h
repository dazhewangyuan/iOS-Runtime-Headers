/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdate : NSObject {
    NSDictionary * _dictionary;
    NSDate * _installDate;
    int  _updateState;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic, readonly) int parentalControlsRank;
@property (nonatomic, readonly) int storeItemIdentifier;
@property (nonatomic, readonly) NSDictionary *updateDictionary;
@property (nonatomic) int updateState;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)installDate;
- (int)parentalControlsRank;
- (void)setInstallDate:(id)arg1;
- (void)setUpdateState:(int)arg1;
- (int)storeItemIdentifier;
- (id)updateDictionary;
- (int)updateState;

@end
