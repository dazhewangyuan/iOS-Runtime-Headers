/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGAggregateLogging : NSObject

+ (id)_appNameForApp:(unsigned int)arg1;
+ (void)_pushValuesForContact:(id)arg1 usingDomain:(id)arg2 subdomain:(id)arg3 type:(id)arg4 action:(id)arg5 extraSignature:(id)arg6;
+ (void)addValueForScalarKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(int)arg5;
+ (id)aggregateKeyForKeySuffix:(id)arg1;
+ (void)app:(id)arg1 performedAction:(id)arg2 onContacts:(id)arg3 withResult:(id)arg4 elapsedTime:(unsigned int)arg5;
+ (void)app:(id)arg1 performedAction:(id)arg2 onEvents:(id)arg3 withResult:(id)arg4 elapsedTime:(unsigned int)arg5;
+ (void)assetVersion;
+ (void)assetVersion:(int)arg1;
+ (void)clearDistributionKey:(id)arg1;
+ (void)contactConfirmed:(id)arg1 inApp:(unsigned int)arg2;
+ (void)contactRejected:(id)arg1 inApp:(unsigned int)arg2;
+ (void)contactSuggestionImpressionsViaBanner:(int)arg1;
+ (void)contactsFoundOnDeviceEnabled:(BOOL)arg1;
+ (id)contactsFromEntity:(id)arg1;
+ (void)contactsSuggested:(id)arg1 withElapsedTime:(unsigned int)arg2 inApp:(unsigned int)arg3;
+ (void)databaseCorruptionDetectedViaCorruptionMarker;
+ (void)databaseCorruptionDetectedViaIntegrityCheck;
+ (void)detail:(id)arg1 confirmedForContact:(id)arg2;
+ (void)detail:(id)arg1 rejectedForContact:(id)arg2;
+ (void)eventConfirmed:(id)arg1 inApp:(unsigned int)arg2;
+ (void)eventConfirmedByRecord:(id)arg1;
+ (void)eventRejected:(id)arg1 inApp:(unsigned int)arg2;
+ (void)eventRejectedByRecord:(id)arg1;
+ (void)eventSuggestionImpressionsViaBanner:(int)arg1;
+ (void)eventsFoundOnDeviceEnabled:(BOOL)arg1;
+ (id)eventsFromEntity:(id)arg1;
+ (void)eventsSuggested:(id)arg1 withElapsedTime:(unsigned int)arg2 inApp:(unsigned int)arg3;
+ (void)flushSynchronously;
+ (void)harvestDrainedNumberOfMails:(int)arg1;
+ (void)harvestedEntity:(id)arg1 withElapsedTime:(unsigned int)arg2;
+ (void)harvestedMessageInQueueSince:(double)arg1;
+ (void)hypotheticalContactSuggestionImpressionsIncludingInsignificant:(int)arg1;
+ (void)hypotheticalSuggestionImpressionsIncludingActedOn:(int)arg1;
+ (void)identityGroupSize:(unsigned int)arg1;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 by:(unsigned int)arg5;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 by:(unsigned int)arg4;
+ (void)incrementKeyWithDomain:(id)arg1 suffix:(id)arg2;
+ (void)incrementValuesInDomain:(id)arg1 subdomain:(id)arg2 type:(id)arg3 action:(id)arg4 withKeysAndIncrements:(id)arg5 extraSignature:(id)arg6;
+ (void)messagesAdded:(unsigned int)arg1;
+ (void)messagesDeleted:(unsigned int)arg1;
+ (void)messagesFound:(unsigned int)arg1;
+ (void)messagesFoundAfterUndisplayablyLost:(unsigned int)arg1;
+ (void)messagesLost:(unsigned int)arg1;
+ (void)messagesPruned:(unsigned int)arg1;
+ (void)messagesUndisplayablyLost:(int)arg1;
+ (void)performedAction:(id)arg1 forApp:(id)arg2 onContact:(id)arg3;
+ (void)performedAction:(id)arg1 forApp:(id)arg2 onEvent:(id)arg3;
+ (void)performedAction:(id)arg1 onDetail:(id)arg2 forContact:(id)arg3;
+ (void)performedAction:(id)arg1 onEventInCalendar:(id)arg2;
+ (void)performedAction:(id)arg1 onRecordForContact:(id)arg2;
+ (void)persistInMemoryStatisticsToDatabase;
+ (void)persistInMemoryStatisticsToDatabaseInternal:(id)arg1;
+ (void)platform_flushSynchronously;
+ (void)platform_persistInMemoryStatisticsToDatabase;
+ (void)platform_popMetricsFromDatabaseAndSendToMessageTracer;
+ (void)platform_setEntityStore:(id)arg1;
+ (void)popMetricsFromDatabaseAndSendToMessageTracer;
+ (void)pushValue:(double)arg1 toDistKeyWithDomain:(id)arg2 suffix:(id)arg3;
+ (void)pushValue:(double)arg1 toDistKeyWithSuffix:(id)arg2;
+ (void)pushValueForDistributionKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(int)arg5;
+ (void)reMatched:(id)arg1;
+ (void)recordConfirmedForContact:(id)arg1;
+ (void)recordRejectedForContact:(id)arg1;
+ (void)setEntityStore:(id)arg1;
+ (void)setKeyWithDomain:(id)arg1 suffix:(id)arg2 toValue:(unsigned int)arg3;
+ (void)setValueForScalarKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(int)arg5;
+ (void)suggestionImpressionsViaBanner:(int)arg1;
+ (void)suggestionImpressionsViaBannerSuppressed:(int)arg1;

@end
