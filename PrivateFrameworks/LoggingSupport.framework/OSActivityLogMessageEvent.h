/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSActivityLogMessageEvent : OSActivityEventMessage {
    NSString * _category;
    unsigned char  _messageType;
    unsigned int  _senderProgramCounter;
    NSString * _subsystem;
}

@property (readonly, copy) NSString *category;
@property (readonly) unsigned char messageType;
@property (readonly) unsigned int senderProgramCounter;
@property (readonly, copy) NSString *subsystem;

- (void).cxx_destruct;
- (void)_addProperties:(id)arg1;
- (id)category;
- (id)initWithEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned int x3; char *x4; char *x5; unsigned int x6; unsigned int x7; union { struct os_activity_stream_common_s { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned int x_1_2_8; } x_8_1_1; struct os_activity_create_s { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned int x_2_2_8; char *x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; } x_8_1_2; struct os_activity_transition_s { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned int x_3_2_8; unsigned int x_3_2_9; } x_8_1_3; struct os_log_message_s { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; char *x_4_2_4; char *x_4_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_4_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_4_2_7; unsigned int x_4_2_8; char *x_4_2_9; char *x_4_2_10; unsigned int x_4_2_11; char *x_4_2_12; unsigned int x_4_2_13; char *x_4_2_14; char *x_4_2_15; unsigned int x_4_2_16; unsigned char x_4_2_17; bool x_4_2_18; } x_8_1_4; } x8; }*)arg1;
- (unsigned char)messageType;
- (unsigned int)senderProgramCounter;
- (id)subsystem;

@end
