/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFacebookLikeStatus : NSObject <NSCopying> {
    NSArray * _friends;
    NSURL * _url;
    BOOL  _userLiked;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray *friendNames;
@property (getter=isUserLiked, nonatomic) BOOL userLiked;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)friendNames;
- (id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2;
- (BOOL)isUserLiked;
- (void)setFriendNames:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUserLiked:(BOOL)arg1;

@end
