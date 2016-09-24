/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayer : CALayer <PDFTileDelegate, RequestDisplayListDelegate> {
    PDFPageLayerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_tileIsOccluded:(id)arg1;
- (void)_updateTilesIOS;
- (void)appendDebugDotFile:(id)arg1;
- (void)dealloc;
- (void)hideTileLayer:(bool)arg1;
- (id)init;
- (bool)isPageVisible;
- (float)lastLayoutDuration;
- (void)magnificationDidChange;
- (void)magnificationWillChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageLayerVisibleRect;
- (void)recievedDisplayList:(struct CGDisplayList { }*)arg1;
- (void)releaseDisplayList;
- (void)releaseTiles;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisplayBox:(int)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setNeedsTilesUpdate;
- (void)setPage:(id)arg1;
- (void)setParentView:(id)arg1;
- (void)setShouldAntiAlias:(bool)arg1;
- (void)tileDrawingComplete:(id)arg1;
- (void)updateTiles;

@end
