/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLKeyFaceOperation : NSOperation {
    NSString * _personUUID;
    PLPhotoLibrary * _photoLibrary;
}

- (void)dealloc;
- (id)fetchFacesForPerson:(id)arg1;
- (id)filterPredicateForPerson:(id)arg1;
- (id)initWithPersonUUID:(id)arg1;
- (id)initWithPersonUUID:(id)arg1 photoLibrary:(id)arg2;
- (void)main;
- (void)pickKeyFace;

@end
