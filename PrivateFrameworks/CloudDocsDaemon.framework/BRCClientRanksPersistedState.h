/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCClientRanksPersistedState : BRCPersistedState {
    unsigned int  _nextItemRowID;
    unsigned int  _nextNotifRank;
    unsigned int  _nextPackageItemRank;
}

@property (nonatomic, readonly) unsigned int nextItemRowID;
@property (nonatomic) unsigned int nextNotifRank;
@property (nonatomic) unsigned int nextPackageItemRank;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (unsigned int)allocateItemRowID;
- (unsigned int)allocateNotifRank;
- (unsigned int)allocatePackageItemRank;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nextItemRowID;
- (unsigned int)nextNotifRank;
- (unsigned int)nextPackageItemRank;
- (void)setNextNotifRank:(unsigned int)arg1;
- (void)setNextPackageItemRank:(unsigned int)arg1;

@end
