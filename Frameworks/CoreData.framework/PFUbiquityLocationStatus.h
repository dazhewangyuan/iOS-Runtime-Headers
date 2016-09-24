/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityLocationStatus : NSObject {
    NSError * _error;
    unsigned int  _hash;
    BOOL  _isDeleted;
    BOOL  _isDownloaded;
    BOOL  _isDownloading;
    BOOL  _isExported;
    BOOL  _isFailed;
    BOOL  _isImported;
    BOOL  _isLive;
    BOOL  _isScheduled;
    BOOL  _isUploaded;
    BOOL  _isUploading;
    PFUbiquityLocation * _location;
    int  _numBytes;
    int  _numNotifications;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) BOOL isDeleted;
@property (nonatomic, readonly) BOOL isDownloaded;
@property (nonatomic) BOOL isDownloading;
@property (nonatomic, readonly) BOOL isExported;
@property (nonatomic, readonly) BOOL isFailed;
@property (nonatomic, readonly) BOOL isImported;
@property (nonatomic, readonly) BOOL isLive;
@property (nonatomic, readonly) BOOL isScheduled;
@property (nonatomic, readonly) BOOL isUploaded;
@property (nonatomic, readonly) BOOL isUploading;
@property (nonatomic, readonly) PFUbiquityLocation *location;
@property (nonatomic, readonly) int numBytes;
@property (nonatomic, readonly) int numNotifications;

- (void)checkFileURLState;
- (void)dealloc;
- (id)description;
- (void)encounteredError:(id)arg1;
- (id)error;
- (unsigned int)hash;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (BOOL)isDeleted;
- (BOOL)isDownloaded;
- (BOOL)isDownloading;
- (BOOL)isExported;
- (BOOL)isFailed;
- (BOOL)isImported;
- (BOOL)isLive;
- (BOOL)isScheduled;
- (BOOL)isUploaded;
- (BOOL)isUploading;
- (id)location;
- (void)logImportWasCancelled;
- (void)logWasExported;
- (void)logWasImported;
- (void)logWasScheduled;
- (int)numBytes;
- (int)numNotifications;
- (void)recoveredFromError;
- (void)setIsDownloading:(BOOL)arg1;
- (void)statusDidChange;

@end
