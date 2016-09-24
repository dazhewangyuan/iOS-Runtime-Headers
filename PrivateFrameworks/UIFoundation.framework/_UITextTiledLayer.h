/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UITextTiledLayer : CALayer {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gridBounds;
    struct { 
        unsigned int disableTiling : 1; 
        unsigned int ditchAllTiles : 1; 
        unsigned int suspendLayout : 4; 
    }  _tcTiledLayerFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
    NSMutableArray * _unusedTiles;
    NSMutableArray * _visibleTiles;
}

@property (nonatomic) BOOL usesTiledLayers;

- (void)_prepareGridForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareTilesForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_preparedTileForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setUsesTiledLayers:(BOOL)arg1 onlyHiding:(BOOL)arg2;
- (void)dealloc;
- (void)drawDirtyLayer:(id)arg1 intoContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)layoutSublayers;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)resumeTiling;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setDrawsAsynchronously:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesTiledLayers:(BOOL)arg1;
- (void)suspendTiling;
- (BOOL)usesTiledLayers;

@end
