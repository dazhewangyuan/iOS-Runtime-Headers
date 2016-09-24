/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {
    PBCodable * _record;
    NTPBRecordBase * _recordBase;
    NSData * _recordData;
    int  _recordLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PBCodable *record;
@property (nonatomic, retain) NTPBRecordBase *recordBase;
@property (nonatomic, retain) NSData *recordData;
@property (nonatomic) int recordLock;
@property (readonly) Class superclass;

+ (id)faultableRecordWithRecord:(id)arg1;
+ (id)faultableRecordWithRecordData:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)record;
- (id)recordBase;
- (id)recordData;
- (int)recordLock;
- (void)setRecord:(id)arg1;
- (void)setRecordBase:(id)arg1;
- (void)setRecordData:(id)arg1;
- (void)setRecordLock:(int)arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end
