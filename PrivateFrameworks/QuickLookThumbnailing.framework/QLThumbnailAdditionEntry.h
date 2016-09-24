/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailAdditionEntry : NSObject <NSSecureCoding, PQLResultSetInitializer> {
    unsigned int  _documentID;
    NSDate * _lastHitDate;
    NSURL * _lastSeenURL;
    int  _size;
    NSData * _vol_uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int documentID;
@property (readonly) unsigned int hash;
@property (retain) NSDate *lastHitDate;
@property (retain) NSURL *lastSeenURL;
@property int size;
@property (readonly) Class superclass;
@property (readonly) NSString *unparsedVolumeUUID;
@property (retain) NSData *vol_uuid;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (unsigned int)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)lastHitDate;
- (id)lastSeenURL;
- (void)setDocumentID:(unsigned int)arg1;
- (void)setLastHitDate:(id)arg1;
- (void)setLastSeenURL:(id)arg1;
- (void)setSize:(int)arg1;
- (void)setVol_uuid:(id)arg1;
- (int)size;
- (id)unparsedVolumeUUID;
- (id)vol_uuid;

@end
