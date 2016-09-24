/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPOBHFragmentRecord : _DPOBHSequenceRecord {
    NSString * _fragment;
    int  _fragmentBitPosition;
    BOOL  _fragmentBitValue;
    short  _fragmentPosition;
    short  _fragmentWidth;
}

@property (nonatomic, copy) NSString *fragment;
@property (nonatomic) int fragmentBitPosition;
@property (nonatomic) BOOL fragmentBitValue;
@property (nonatomic) short fragmentPosition;
@property (nonatomic) short fragmentWidth;

+ (id)entityName;
+ (id)fragmentWithKey:(id)arg1 sequence:(id)arg2 sequenceBitPosition:(unsigned short)arg3 sequenceBitValue:(BOOL)arg4 fragmentPosition:(unsigned short)arg5 fragmentWidth:(unsigned short)arg6 fragment:(id)arg7 fragmentBitPosition:(int)arg8 fragmentBitValue:(BOOL)arg9 creationDate:(double)arg10 submitted:(BOOL)arg11 objectId:(id)arg12;

- (void).cxx_destruct;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)description;
- (id)fragment;
- (int)fragmentBitPosition;
- (BOOL)fragmentBitValue;
- (short)fragmentPosition;
- (short)fragmentWidth;
- (id)initWithKey:(id)arg1 sequence:(id)arg2 sequenceBitPosition:(unsigned short)arg3 sequenceBitValue:(BOOL)arg4 fragmentPosition:(unsigned short)arg5 fragmentWidth:(unsigned short)arg6 fragment:(id)arg7 fragmentBitPosition:(int)arg8 fragmentBitValue:(BOOL)arg9 creationDate:(double)arg10 submitted:(BOOL)arg11 objectId:(id)arg12;
- (id)jsonString;
- (void)setFragment:(id)arg1;
- (void)setFragmentBitPosition:(int)arg1;
- (void)setFragmentBitValue:(BOOL)arg1;
- (void)setFragmentPosition:(short)arg1;
- (void)setFragmentWidth:(short)arg1;

@end
