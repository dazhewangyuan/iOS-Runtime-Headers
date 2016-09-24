/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSUsageLogLine : DSLogLine

@property (nonatomic, readonly) int batteryLevel;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) BOOL isOffPower;
@property (nonatomic, readonly) BOOL isOnPower;
@property (nonatomic, readonly) BOOL isReset;
@property (nonatomic, readonly) int standbyTime;
@property (nonatomic, readonly) int usageTime;

- (int)batteryLevel;
- (id)eventType;
- (BOOL)isOffPower;
- (BOOL)isOnPower;
- (BOOL)isReset;
- (int)standbyTime;
- (int)usageTime;

@end
