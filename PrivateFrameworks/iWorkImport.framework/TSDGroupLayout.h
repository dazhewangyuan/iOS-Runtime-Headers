/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBoundsForStandardKnobs;
    TSUBezierPath * mCachedExternalWrapPath;
    TSUBezierPath * mCachedWrapPath;
    TSDLayoutGeometry * mDynamicLayoutGeometry;
}

- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (BOOL)allowsConnections;
- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canFlip;
- (BOOL)canInspectGeometry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (id)computeInfoGeometryDuringResize;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)descendentWrappables;
- (void)dragBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)endDynamicOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCulling;
- (id)i_computeWrapPath;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (void)invalidate;
- (void)invalidateExteriorWrap;
- (BOOL)isDraggable;
- (id)layoutGeometryFromInfo;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (struct CGSize { double x1; double x2; })minimumSize;
- (id)p_childWrapPathsFrom:(id)arg1;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateDescendentWrapPaths;
- (void)p_invalidateParentForWrap;
- (void)processChangedProperty:(int)arg1;
- (BOOL)providesGuidesForChildLayouts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootForCalculatingActivityLineEndpoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (id)reliedOnLayouts;
- (BOOL)resizeMayChangeAspectRatio;
- (void)setDynamicGeometry:(id)arg1;
- (void)setGeometry:(id)arg1;
- (BOOL)supportsFlipping;
- (BOOL)supportsInspectorPositioning;
- (BOOL)supportsParentRotation;
- (BOOL)supportsRotation;
- (id)visibleGeometries;
- (void)wrappableChildInvalidated;

@end
