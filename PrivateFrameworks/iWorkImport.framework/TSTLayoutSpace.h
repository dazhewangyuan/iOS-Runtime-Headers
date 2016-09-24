/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutSpace : NSObject {
    TSTLayoutSpaceBezierPathCache * mBezierPathCache;
    TSTCoordinateArray * mBodyColumnCoordinates;
    TSTCoordinateArray * mBodyRowCoordinates;
    TSTLayoutSpaceBundle * mBundle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedAlignedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedAlignedStrokeFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedStrokeFrame;
    BOOL  mDrawBlackAndWhite;
    BOOL  mDrawPreventAntialias;
    struct { 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } topLeft; 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } bottomRight; 
    }  mGridRange;
    TSTCoordinateArray * mHeaderColumnRowCoordinates;
    BOOL  mHeaderColumnsRepeat;
    TSTCoordinateArray * mHeaderRowColumnCoordinates;
    BOOL  mHeaderRowsRepeat;
    unsigned char  mInvalidColumnIndex;
    unsigned short  mInvalidRowIndex;
    BOOL  mInvalidTableOffset;
    BOOL  mLayoutDirectionIsLeftToRight;
    int  mLayoutSpaceType;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  mLock;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTableOffset;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformFromCanvas;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformFromDevice;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformToCanvas;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransformToDevice;
    double  mViewScale;
}

@property (nonatomic, readonly) TSTLayoutSpaceBezierPathCache *bezierPathCache;
@property (nonatomic, readonly) TSTLayoutSpaceBundle *bundle;
@property (nonatomic) BOOL drawBlackAndWhite;
@property (nonatomic) BOOL drawPreventAntialias;
@property (nonatomic) BOOL headerColumnsRepeat;
@property (nonatomic) BOOL headerRowsRepeat;
@property (nonatomic, readonly) BOOL isColumns;
@property (nonatomic, readonly) BOOL isCorner;
@property (nonatomic, readonly) BOOL isFrozen;
@property (nonatomic, readonly) BOOL isMain;
@property (nonatomic, readonly) BOOL isRepeat;
@property (nonatomic, readonly) BOOL isRows;
@property (nonatomic, readonly) TSTLayout *layout;
@property (nonatomic, readonly) BOOL layoutDirectionIsLeftToRight;
@property (nonatomic, readonly) int layoutSpaceType;
@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic) struct CGPoint { double x1; double x2; } tableOffset;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformFromCanvas;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformFromDevice;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToCanvas;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToDevice;
@property (nonatomic) double viewScale;

- (id)bezierPathCache;
- (id)bundle;
- (void)dealloc;
- (id)description;
- (BOOL)drawBlackAndWhite;
- (BOOL)drawPreventAntialias;
- (void)drawStrokesInGridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 clearStrokes:(BOOL)arg2 context:(struct CGContext { }*)arg3;
- (BOOL)headerColumnsRepeat;
- (BOOL)headerRowsRepeat;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
- (void)invalidateCoordinates;
- (void)invalidateCoordinatesAfterColumn:(unsigned char)arg1;
- (void)invalidateCoordinatesAfterRow:(unsigned short)arg1;
- (void)invalidateTableOffset;
- (BOOL)isColumns;
- (BOOL)isCorner;
- (BOOL)isFrozen;
- (BOOL)isMain;
- (BOOL)isRepeat;
- (BOOL)isRows;
- (id)layout;
- (BOOL)layoutDirectionIsLeftToRight;
- (int)layoutSpaceType;
- (void)lockForRead;
- (void)lockForWrite;
- (id)masterLayout;
- (void)p_drawStrokeForGridColumn:(unsigned int)arg1 strokeRect:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2 clearStroke:(BOOL)arg3 shadowType:(int)arg4 context:(struct CGContext { }*)arg5;
- (void)p_drawStrokeForGridRow:(unsigned int)arg1 strokeRect:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2 clearStroke:(BOOL)arg3 shadowType:(int)arg4 context:(struct CGContext { }*)arg5;
- (BOOL)p_getLayoutDirectionLeftToRight;
- (void)setDrawBlackAndWhite:(BOOL)arg1;
- (void)setDrawPreventAntialias:(BOOL)arg1;
- (void)setHeaderColumnsRepeat:(BOOL)arg1;
- (void)setHeaderRowsRepeat:(BOOL)arg1;
- (void)setTableOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransformFromCanvas:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformFromDevice:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformToCanvas:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformToDevice:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScale:(float)arg1;
- (struct CGPoint { double x1; double x2; })tableOffset;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromCanvas;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromDevice;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToCanvas;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToDevice;
- (void)unlock;
- (int)validate:(id)arg1;
- (void)validateCachedFrames;
- (int)validateCoordinateCache:(id)arg1;
- (int)validateTableOffset:(id)arg1;
- (float)viewScale;

@end
