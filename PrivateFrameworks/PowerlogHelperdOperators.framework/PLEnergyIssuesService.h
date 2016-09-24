/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLEnergyIssuesService : PLService {
    PLXPCResponderOperatorComposition * _ABCUIResponder;
    NSString * _entryKeyForEnergyIssues;
    PLXPCListenerOperatorComposition * _eventListener;
    PLXPCListenerOperatorComposition * _xpcListenerEnergyIssueTrigger;
}

@property (retain) PLXPCResponderOperatorComposition *ABCUIResponder;
@property (retain) NSString *entryKeyForEnergyIssues;
@property (retain) PLXPCListenerOperatorComposition *eventListener;
@property (retain) PLXPCListenerOperatorComposition *xpcListenerEnergyIssueTrigger;

+ (id)entryEventPointDefinitionEnergySignatures;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)ABCUIResponder;
- (id)ABCUIResponseWithPayload:(id)arg1;
- (id)buildVersion;
- (struct __CFDictionary { }*)createAssertionThreshold:(int)arg1 withAggregateLimit:(int)arg2;
- (id)entryKeyForEnergyIssues;
- (id)eventListener;
- (void)handleAssertionNotifications;
- (id)init;
- (void)initOperatorDependancies;
- (id)nonNullValue:(id)arg1 withKey:(id)arg2;
- (void)registerTrigger:(id)arg1;
- (void)setABCUIResponder:(id)arg1;
- (void)setAssertionThresholds;
- (void)setEntryKeyForEnergyIssues:(id)arg1;
- (void)setEventListener:(id)arg1;
- (void)setXpcListenerEnergyIssueTrigger:(id)arg1;
- (id)signaturesWithEnergyEntries;
- (id)xpcListenerEnergyIssueTrigger;

@end
