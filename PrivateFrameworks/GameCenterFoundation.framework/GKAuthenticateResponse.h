/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAuthenticateResponse : GKInternalRepresentation {
    GKPlayerCredential * _credential;
    BOOL  _loginDisabled;
    BOOL  _passwordChangeRequired;
    NSURL * _passwordChangeURL;
    BOOL  _shouldShowLinkAccountsUI;
}

@property (nonatomic, retain) GKPlayerCredential *credential;
@property (nonatomic) BOOL loginDisabled;
@property (nonatomic) BOOL passwordChangeRequired;
@property (nonatomic, retain) NSURL *passwordChangeURL;
@property (nonatomic) BOOL shouldShowLinkAccountsUI;

+ (id)secureCodedPropertyKeys;

- (id)credential;
- (void)dealloc;
- (BOOL)loginDisabled;
- (BOOL)passwordChangeRequired;
- (id)passwordChangeURL;
- (void)setCredential:(id)arg1;
- (void)setLoginDisabled:(BOOL)arg1;
- (void)setPasswordChangeRequired:(BOOL)arg1;
- (void)setPasswordChangeURL:(id)arg1;
- (void)setShouldShowLinkAccountsUI:(BOOL)arg1;
- (BOOL)shouldShowLinkAccountsUI;

@end
