/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATStatus : NSObject <NSSecureCoding> {
    BOOL  _automaticSync;
    unsigned int  _completedAssetCount;
    NSString * _dataClass;
    NSString * _libraryID;
    NSString * _localizedDescription;
    double  _progress;
    unsigned int  _syncStage;
    unsigned int  _syncType;
    unsigned int  _totalAssetCount;
    unsigned int  _totalItemCount;
    BOOL  _wirelessSync;
}

@property (getter=isAutomaticSync, nonatomic) BOOL automaticSync;
@property (nonatomic) unsigned int completedAssetCount;
@property (nonatomic, copy) NSString *dataClass;
@property (nonatomic, copy) NSString *libraryID;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic) double progress;
@property (nonatomic) unsigned int syncStage;
@property (nonatomic) unsigned int syncType;
@property (nonatomic) unsigned int totalAssetCount;
@property (nonatomic) unsigned int totalItemCount;
@property (getter=isWirelessSync, nonatomic) BOOL wirelessSync;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)completedAssetCount;
- (id)dataClass;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryID:(id)arg1 dataClass:(id)arg2;
- (BOOL)isAutomaticSync;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isWirelessSync;
- (id)libraryID;
- (id)localizedDescription;
- (float)progress;
- (void)setAutomaticSync:(BOOL)arg1;
- (void)setCompletedAssetCount:(unsigned int)arg1;
- (void)setDataClass:(id)arg1;
- (void)setLibraryID:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setSyncStage:(unsigned int)arg1;
- (void)setSyncType:(unsigned int)arg1;
- (void)setTotalAssetCount:(unsigned int)arg1;
- (void)setTotalItemCount:(unsigned int)arg1;
- (void)setWirelessSync:(BOOL)arg1;
- (unsigned int)syncStage;
- (unsigned int)syncType;
- (unsigned int)totalAssetCount;
- (unsigned int)totalItemCount;

@end
