/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDWorkQueueName : NSObject <NSCopying> {
    unsigned int  _counter32;
    unsigned short  _otherbits;
    unsigned int  _timestamp32;
}

@property (nonatomic) unsigned int counter;
@property (nonatomic) unsigned int fails;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int timestamp;

+ (BOOL)isValidFilename:(id)arg1;

- (id)copyWithState:(unsigned int)arg1;
- (id)copyWithState:(unsigned int)arg1 andFails:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (id)description;
- (unsigned int)fails;
- (unsigned int)hash;
- (id)initWithPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)pathInDirectory:(id)arg1;
- (id)queueItemId;
- (void)setCounter:(unsigned int)arg1;
- (void)setFails:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned int)timestamp;

@end
