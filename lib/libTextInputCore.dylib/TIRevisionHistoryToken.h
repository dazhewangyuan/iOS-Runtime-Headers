/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIRevisionHistoryToken : NSObject {
    BOOL  _accepted;
    unsigned int  _offset;
    NSString * _tokenDictionaryString;
    struct TITokenID { 
        unsigned int lexicon_id; 
        unsigned int word_id; 
    }  _tokenID;
    NSString * _tokenInputString;
    unsigned int  _usageLearningMask;
    unsigned int  _usageTrackingMask;
    NSString * _userTyping;
}

@property (getter=isAccepted, nonatomic) BOOL accepted;
@property (nonatomic) unsigned int offset;
@property (nonatomic, copy) NSString *tokenDictionaryString;
@property (nonatomic) struct TITokenID { unsigned int x1; unsigned int x2; } tokenID;
@property (nonatomic, copy) NSString *tokenInputString;
@property (nonatomic) unsigned int usageLearningMask;
@property (nonatomic) unsigned int usageTrackingMask;
@property (nonatomic, copy) NSString *userTyping;

- (void)dealloc;
- (id)description;
- (BOOL)isAccepted;
- (unsigned int)offset;
- (void)setAccepted:(BOOL)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setTokenDictionaryString:(id)arg1;
- (void)setTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg1;
- (void)setTokenInputString:(id)arg1;
- (void)setUsageLearningMask:(unsigned int)arg1;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (void)setUserTyping:(id)arg1;
- (id)tokenDictionaryString;
- (struct TITokenID { unsigned int x1; unsigned int x2; })tokenID;
- (id)tokenInputString;
- (unsigned int)usageLearningMask;
- (unsigned int)usageTrackingMask;
- (id)userTyping;

@end
