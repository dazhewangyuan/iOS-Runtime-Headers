/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {
    int  _albumArtistPersistentID;
    BOOL  _compilation;
    NSString * _feedURL;
    NSData * _groupingKey;
    int  _seasonNumber;
}

@property (nonatomic, readonly) int albumArtistPersistentID;
@property (nonatomic, readonly) BOOL compilation;
@property (nonatomic, readonly) NSString *feedURL;
@property (nonatomic, readonly) NSData *groupingKey;
@property (nonatomic, readonly) NSData *keyValue;
@property (nonatomic, readonly) int seasonNumber;

- (void).cxx_destruct;
- (int)albumArtistPersistentID;
- (BOOL)compilation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)feedURL;
- (id)groupingKey;
- (unsigned int)hash;
- (id)initWithAlbumArtistPersistentID:(int)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(int)arg4 compilation:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)keyValue;
- (int)seasonNumber;

@end
