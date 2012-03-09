/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SACommandFailed : SABaseCommand <SAServerBoundCommand, SAClientBoundCommand> {
}

@property int errorCode;
@property(copy) NSString * reason;
@property(copy) NSString * refId;
@property(copy) NSArray * callbacks;
@property(copy) NSString * aceId;

+ (id)commandFailed;
+ (id)commandFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandFailedWithErrorCode:(int)arg1;
+ (id)commandFailedWithReason:(id)arg1;

- (id)groupIdentifier;
- (void)setReason:(id)arg1;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)initWithErrorCode:(int)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end