/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (getter=isBackgrounded, nonatomic) BOOL backgrounded;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) int interfaceOrientation;
@property (nonatomic) double level;
@property (nonatomic, copy) NSArray *occlusions;

+ (BOOL)_isMutable;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ignoreOcclusionReasons;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)otherSettings;
- (void)setBackgrounded:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setLevel:(float)arg1;
- (void)setOcclusions:(id)arg1;
- (id)transientLocalSettings;

@end
