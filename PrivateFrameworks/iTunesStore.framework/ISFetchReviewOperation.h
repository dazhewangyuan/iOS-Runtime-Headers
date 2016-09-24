/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISFetchReviewOperation : ISOperation {
    int  _assetType;
    BOOL  _backgroundReview;
    unsigned int  _itemIdentifier;
    ISReview * _review;
    unsigned int  _softwareVersionIdentifier;
    NSURL * _url;
}

@property int assetType;
@property (getter=isBackgroundReview) BOOL backgroundReview;
@property unsigned int itemIdentifier;
@property (retain) ISReview *review;
@property unsigned int softwareVersionIdentifier;
@property (retain) NSURL *url;

- (void)_fetchReviewInformation;
- (int)assetType;
- (void)dealloc;
- (BOOL)isBackgroundReview;
- (unsigned int)itemIdentifier;
- (id)review;
- (void)run;
- (void)setAssetType:(int)arg1;
- (void)setBackgroundReview:(BOOL)arg1;
- (void)setItemIdentifier:(unsigned int)arg1;
- (void)setReview:(id)arg1;
- (void)setSoftwareVersionIdentifier:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (unsigned int)softwareVersionIdentifier;
- (id)url;

@end
