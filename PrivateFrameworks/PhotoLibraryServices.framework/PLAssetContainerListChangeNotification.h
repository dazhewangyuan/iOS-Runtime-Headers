/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, retain) NSObject<PLAlbumContainer> *albumList;
@property (nonatomic, readonly, retain) <PLAssetContainerList> *assetContainerList;

+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;

- (id)_contentRelationshipName;
- (struct NSObject { Class x1; }*)albumList;
- (id)assetContainerList;
- (void)dealloc;
- (id)description;
- (id)name;
- (id)userInfo;

@end
