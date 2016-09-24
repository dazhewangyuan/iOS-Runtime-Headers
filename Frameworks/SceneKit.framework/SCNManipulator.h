/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNManipulator : NSObject {
    unsigned short  _action;
    union { 
        struct { 
            unsigned short selectedAxis; 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*originalPosition; 
        } axisMove; 
        struct { 
            unsigned short selectedPlane; 
            void*originalPosition; 
        } planeMove; 
        struct { 
            unsigned short selectedAxis; 
            struct CGPoint { 
                double x; 
                double y; 
            } originalMouseLocation; 
            double rotationSign; 
            struct __C3DQuaternion { 
                double x; 
                double y; 
                double z; 
                double s; 
            } originalRotation; 
        } axisRotate; 
    }  _actionData;
    SCNAuthoringEnvironment * _authoringEnvironment;
    NSOrderedSet * _cloneSet;
    BOOL  _cloning;
    BOOL  _isMouseDown;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void**positions; 
    }  _originalData;
    unsigned int  _originalDataCount;
    BOOL  _readonly;
    long  _snapToAlignCount;
    struct { double x1; struct __C3DNode {} *x2; double x3; } * _snapToAlignOnX;
    struct { double x1; struct __C3DNode {} *x2; double x3; } * _snapToAlignOnY;
    struct { double x1; struct __C3DNode {} *x2; double x3; } * _snapToAlignOnZ;
    NSMutableIndexSet * _snapXIndexes;
    NSMutableIndexSet * _snapYIndexes;
    NSMutableIndexSet * _snapZIndexes;
    NSOrderedSet * _targets;
    union C3DMatrix4x4 { 
        double components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _worldInitialMatrix;
    union C3DMatrix4x4 { 
        double components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _worldMatrix;
    int  _xAlignment;
    union C3DMatrix4x4 { 
        double components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xAxisToZAxisTransform;
    union C3DMatrix4x4 { 
        double components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xyPlaneToXZPlaneTransform;
    union C3DMatrix4x4 { 
        double components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xyPlaneToYZPlaneTransform;
    int  _yAlignment;
    union C3DMatrix4x4 { 
        double components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _yAxisToZAxisTransform;
    int  _zAlignment;
}

@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (nonatomic) BOOL readonly;
@property (nonatomic, retain) SCNNode *target;
@property (nonatomic, retain) NSOrderedSet *targets;
@property (readonly) struct SCNMatrix4 { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;
@property (nonatomic) int xAlignment;
@property (nonatomic) int yAlignment;
@property (nonatomic) int zAlignment;

- (BOOL)_applyWithEvent:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (void)_deleteOriginalData;
- (void)_prepareSnapToAlignData:(void *)arg1 minOffset:(void *)arg2 maxOffset:(void *)arg3; // needs 3 arg types, found 1: unsigned short
- (void)_saveOriginalData;
- (void)_setAuthoringEnvironment:(id)arg1;
- (void)_snapPositionToAlign:(void *)arg1 original:(void *)arg2 unit:(void *)arg3 axisMove:(void *)arg4 rayStart:(void *)arg5 rayDir:(void *)arg6 didSnap:(void *)arg7 snapIndexes:(void *)arg8; // needs 8 arg types, found 5: struct SCNVector3 { double x1; double x2; double x3; }, float, bool, bool*, int*
- (void)_updateCloneStateWithEvent:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (void)addClonesToScene;
- (id)authoringEnvironment;
- (void)clearSnapIndexes;
- (id)copy;
- (void)dealloc;
- (void)draw;
- (int)effectiveEditingSpace;
- (id)init;
- (BOOL)isDragging;
- (BOOL)mouseDown:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (BOOL)mouseDragged:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (BOOL)mouseMoved:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (BOOL)mouseUp:(struct { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; void*x4; out int x5; in void*x6; void*x7; double x8; double x9; })arg1;
- (void)prepareSnapToAlignData;
- (void)prepareSnapToAlignDataIfNeeded;
- (BOOL)readonly;
- (void)removeClonesFromScene;
- (id)scene;
- (void)setReadonly:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargets:(id)arg1;
- (void)setXAlignment:(int)arg1;
- (void)setYAlignment:(int)arg1;
- (void)setZAlignment:(int)arg1;
- (id)setupClones;
- (id)snapGuideIndexesOnAxis:(int)arg1;
- (const struct { double x1; struct __C3DNode {} *x2; double x3; }*)snapInfoAtIndex:(unsigned int)arg1 axis:(int)arg2;
- (id)target;
- (id)targets;
- (struct SCNMatrix4 { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (void)updateItemsPosition;
- (void)updateItemsRotation:(struct __C3DQuaternion { double x1; double x2; double x3; double x4; })arg1;
- (void)validateClones;
- (int)xAlignment;
- (int)yAlignment;
- (int)zAlignment;

@end
