/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMVendorDataManager : NSObject {
    int  _dataVersion;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSDictionary * _vendorModelEntries;
}

@property (nonatomic) int dataVersion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *databaseQueue;
@property (nonatomic, readonly) NSDictionary *vendorModelEntries;

+ (id)sharedVendorDataManager;

- (void).cxx_destruct;
- (id)_modelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (void)_parseManufacturersList:(id)arg1;
- (id)bundleIDForManufacturer:(id)arg1 model:(id)arg2;
- (int)dataVersion;
- (id)databaseQueue;
- (id)init;
- (void)setDataVersion:(int)arg1;
- (void)setDatabaseQueue:(id)arg1;
- (id)storeIDForManufacturer:(id)arg1 model:(id)arg2;
- (id)vendorModelEntries;

@end
