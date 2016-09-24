/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INResumeWorkoutIntentResponse : INIntentResponse <INResumeWorkoutIntentResponseExport> {
    _INPBResumeWorkoutIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, readonly) int code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_appLaunchRequestedFromCode:(int)arg1;
+ (int)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (int)_errorCodeFromCode:(int)arg1;
+ (int)_intentHandlingStatusFromCode:(int)arg1;
+ (int)_typeFromCode:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_responseMessagePBRepresentation;
- (int)code;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(int)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
