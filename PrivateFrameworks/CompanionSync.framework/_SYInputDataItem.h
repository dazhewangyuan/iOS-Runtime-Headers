/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYInputDataItem : NSObject {
    id /* block */  _callback;
    NSMutableData * _data;
    unsigned int  _length;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly) NSMutableData *data;
@property (nonatomic) unsigned int length;
@property (nonatomic, readonly) unsigned int lengthRemaining;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)data;
- (id)init;
- (unsigned int)length;
- (unsigned int)lengthRemaining;
- (void)setCallback:(id /* block */)arg1;
- (void)setLength:(unsigned int)arg1;

@end
