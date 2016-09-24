/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppSubscription : AceObject <SABackgroundContextObject>

@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *subscriptionTiers;
@property (readonly) Class superclass;

+ (id)appSubscription;
+ (id)appSubscriptionWithDictionary:(id)arg1 context:(id)arg2;

- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setBundleId:(id)arg1;
- (void)setSubscriptionTiers:(id)arg1;
- (id)subscriptionTiers;

@end
