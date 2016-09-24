/* Generated by RuntimeBrowser
   Image: /usr/lib/libtzupdate.dylib
 */

@interface TZVersionInfo : NSObject {
    NSDictionary * _alertZones;
    NSString * _bundleVersion;
    NSArray * _changedFiles;
    NSURL * _diskLocation;
    NSString * _icuTZSchemaVersion;
    NSNumber * _shouldAlertAll;
    NSString * _tzDataVersion;
}

@property (retain) NSDictionary *alertZones;
@property (retain) NSString *bundleVersion;
@property (retain) NSArray *changedFiles;
@property (retain) NSURL *diskLocation;
@property (retain) NSString *icuTZSchemaVersion;
@property (retain) NSNumber *shouldAlertAll;
@property (retain) NSString *tzDataVersion;
@property (readonly) NSString *versionString;

+ (id)_tzDataVersionFromZoneinfoDirectory:(id)arg1 withError:(id*)arg2;
+ (BOOL)_verifyVersionInfoDictionary:(id)arg1;
+ (id)blankVersionInfo;
+ (id)versionInfoFromContainerDirectory:(id)arg1;
+ (id)versionInfoFromDefaultSystem;
+ (id)versionInfoWithDictionary:(id)arg1 isPartial:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_initWithVersionInfoDictionary:(id)arg1 isPartial:(BOOL)arg2;
- (id)alertZones;
- (id)bundleVersion;
- (id)changedFiles;
- (int)compare:(id)arg1;
- (id)description;
- (id)diskLocation;
- (id)icuTZSchemaVersion;
- (BOOL)isBlank;
- (void)setAlertZones:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setChangedFiles:(id)arg1;
- (void)setDiskLocation:(id)arg1;
- (void)setIcuTZSchemaVersion:(id)arg1;
- (void)setShouldAlertAll:(id)arg1;
- (void)setTzDataVersion:(id)arg1;
- (id)shouldAlertAll;
- (id)tzDataVersion;
- (id)versionString;

@end
