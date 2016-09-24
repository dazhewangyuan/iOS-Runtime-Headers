/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSDispatchQueueAttributes : NSObject {
    NSObject<OS_dispatch_queue_attr> * _attrs;
}

@property (nonatomic) NSObject<OS_dispatch_queue_attr> *attributes;

+ (id)_attributesWithAttributes:(id)arg1;
+ (id)concurrent;
+ (id)serial;

- (id)attributes;
- (id)autoreleaseFrequency:(unsigned long)arg1;
- (id)inactive;
- (id)serviceClass:(unsigned int)arg1;
- (void)setAttributes:(id)arg1;

@end
