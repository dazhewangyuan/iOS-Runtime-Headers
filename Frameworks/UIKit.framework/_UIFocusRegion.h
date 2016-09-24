/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusRegion : NSObject <NSCopying, _UIFocusDebugQuickLookImageDrawing> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSMutableArray * _mutableOccludingRegions;
    _UIFocusRegion * _originalRegion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned int hash;
@property (getter=_mutableOccludingRegions, setter=_setMutableOccludingRegions:, nonatomic, retain) NSMutableArray *mutableOccludingRegions;
@property (getter=_originalRegion, setter=_setOriginRegion:, nonatomic, retain) _UIFocusRegion *originalRegion;
@property (readonly) Class superclass;

+ (id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1;
+ (id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1 beneathRegions:(id)arg2;
+ (id)_regionsByOccludingRegions:(id)arg1 withRegions:(id)arg2;

- (void).cxx_destruct;
- (void)_addOccludingRegion:(id)arg1;
- (unsigned int)_boundariesBlockingFocusMovement:(id)arg1;
- (id)_defaultFocusItem;
- (id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned int)_effectiveBoundariesBlockingFocusMovement:(id)arg1;
- (unsigned int)_effectiveFocusableBoundariesForHeading:(unsigned int)arg1;
- (unsigned int)_focusableBoundaries;
- (id)_mutableOccludingRegions;
- (id)_occludingRegions;
- (id)_originalRegion;
- (id)_resizeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setMutableOccludingRegions:(id)arg1;
- (void)_setOriginRegion:(id)arg1;
- (BOOL)_shouldBeOccludedByRegion:(id)arg1;
- (BOOL)_shouldCropRegionToSearchArea;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (BOOL)_shouldOccludeRegion:(id)arg1;
- (id)_subregionWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 occludedByRegion:(id)arg2;
- (id)_visibleSubregionsWhenOccludedByRegion:(id)arg1;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
