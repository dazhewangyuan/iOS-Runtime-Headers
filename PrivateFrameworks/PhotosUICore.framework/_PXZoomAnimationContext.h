/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXZoomAnimationContext : NSObject <PXZoomAnimationContext> {
    id /* block */  __allAnimationsCompletionHandler;
    double  _animationDuration;
    NSObject<OS_dispatch_group> * _animationGroup;
    int  _animationType;
    NSMutableArray * _cleanupHandlers;
    double  _fromAlpha;
    PXRegionOfInterest * _fromRegionOfInterest;
    PXNonuniformTransform * _fromTransform;
    BOOL  _keepsSourceRegionOfInterestContent;
    BOOL  _matchingRegionsOfInterest;
    double  _toAlpha;
    PXRegionOfInterest * _toRegionOfInterest;
    PXNonuniformTransform * _toTransform;
}

@property (setter=_setAllAnimationsCompletionHandler:, nonatomic, copy) id /* block */ _allAnimationsCompletionHandler;
@property (nonatomic) double animationDuration;
@property (nonatomic) int animationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fromAlpha;
@property (nonatomic, retain) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic, retain) PXNonuniformTransform *fromTransform;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (getter=isMatchingRegionsOfInterest, nonatomic) BOOL matchingRegionsOfInterest;
@property (readonly) Class superclass;
@property (nonatomic) double toAlpha;
@property (nonatomic, retain) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, retain) PXNonuniformTransform *toTransform;

- (void).cxx_destruct;
- (id /* block */)_allAnimationsCompletionHandler;
- (void)_setAllAnimationsCompletionHandler:(id /* block */)arg1;
- (double)animationDuration;
- (int)animationType;
- (void)cleanup;
- (void)didEndAnimation:(int)arg1;
- (float)fromAlpha;
- (id)fromRegionOfInterest;
- (id)fromTransform;
- (id)init;
- (BOOL)isMatchingRegionsOfInterest;
- (BOOL)keepsSourceRegionOfInterestContent;
- (void)notifyWhenAllAnimationsCompleted:(id /* block */)arg1;
- (void)registerCleanupHandler:(id /* block */)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationType:(int)arg1;
- (void)setFromAlpha:(float)arg1;
- (void)setFromRegionOfInterest:(id)arg1;
- (void)setFromTransform:(id)arg1;
- (void)setKeepsSourceRegionOfInterestContent:(BOOL)arg1;
- (void)setMatchingRegionsOfInterest:(BOOL)arg1;
- (void)setToAlpha:(float)arg1;
- (void)setToRegionOfInterest:(id)arg1;
- (void)setToTransform:(id)arg1;
- (float)toAlpha;
- (id)toRegionOfInterest;
- (id)toTransform;
- (int)willBeginAnimation;

@end
