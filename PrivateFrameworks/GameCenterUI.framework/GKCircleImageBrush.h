/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification> {
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeOverride;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGSize { double x1; double x2; } sizeOverride;
@property (readonly) Class superclass;

- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)renderedImageIdentifier;
- (float)scaleForInput:(id)arg1;
- (void)setSizeOverride:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeOverride;

@end
