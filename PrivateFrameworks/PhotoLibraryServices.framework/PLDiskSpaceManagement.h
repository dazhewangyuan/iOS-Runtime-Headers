/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiskSpaceManagement : NSObject

+ (unsigned int)_performCloudSharingSpaceManagementWithBytesToPurge:(unsigned int)arg1 shouldFreeSpace:(BOOL)arg2 fromPhotoLibrary:(id)arg3 keepRecentlyViewedAssets:(BOOL)arg4;
+ (int)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(BOOL)arg2;
+ (unsigned int)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned int)arg3;
+ (unsigned int)_scanFilesInCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(unsigned int)arg2;
+ (unsigned int)_scanFilesInPhotoMetadataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(unsigned int)arg2 skipAssets:(id)arg3;
+ (unsigned int)_scanFilesInReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)arg1 bytesToPurge:(unsigned int)arg2;
+ (unsigned int)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned int)arg1 shouldFreeSpace:(BOOL)arg2 fromPhotoLibrary:(id)arg3;
+ (unsigned int)purgeCloudSharingAssetsIfNotRecentlyViewedFromPhotoLibrary:(id)arg1;
+ (unsigned int)purgeExpiredOutboundSharingAssets;

@end
