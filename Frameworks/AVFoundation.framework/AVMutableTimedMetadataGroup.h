/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {
    AVTimedMetadataGroupInternal * _mutablePriv;
}

@property (nonatomic, copy) NSArray *items;
@property (nonatomic) struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; } timeRange;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithItems:(id)arg1 timeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })arg2;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })arg1;
- (struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })timeRange;

@end
