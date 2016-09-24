/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneHealthSyncPersistedState : BRCPersistedState {
    CKServerChangeToken * _changeToken;
    NSDate * _lastSyncDownDate;
    BOOL  _needsSyncDown;
    unsigned int  _requestID;
}

@property (nonatomic, readonly) CKServerChangeToken *changeToken;
@property (readonly) NSDate *lastSyncDownDate;
@property (nonatomic) BOOL needsSyncDown;
@property (nonatomic, readonly) unsigned int requestID;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)allocateNextRequestID;
- (id)changeToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneHealthState:(id)arg1;
- (id)lastSyncDownDate;
- (BOOL)needsSyncDown;
- (unsigned int)requestID;
- (void)setNeedsSyncDown:(BOOL)arg1;
- (void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned int)arg2;
- (void)zoneHealthWasReset;

@end
