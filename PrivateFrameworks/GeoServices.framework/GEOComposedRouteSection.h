/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteSection : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    GEOComposedRouteLeg * _composedRouteLeg;
    unsigned int  _composedRouteLegIndex;
    GEOComposedRouteStep * _composedRouteStep;
    unsigned int  _finalStepIndex;
    double  _lengthScaleFactor;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _overlayBounds;
    unsigned int  _pointCount;
    struct { double x1; double x2; } * _points;
    double  _startDistance;
    unsigned int  _startPointIndex;
    int  _transportType;
}

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) GEOComposedRouteLeg *composedRouteLeg;
@property (nonatomic, readonly) unsigned int composedRouteLegIndex;
@property (nonatomic, readonly) GEOComposedRouteStep *composedRouteStep;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) unsigned int finalStepIndex;
@property (nonatomic) double lengthScaleFactor;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*points;
@property (nonatomic, readonly) double startDistance;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  vkBounds; /* unknown property attribute:  1>=[2d]}} */

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)_initStepForRoute:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)composedRouteLeg;
- (unsigned int)composedRouteLegIndex;
- (id)composedRouteStep;
- (void)dealloc;
- (id)description;
- (unsigned int)endPointIndex;
- (unsigned int)finalStepIndex;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 bounds:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg4 transportType:(int)arg5 finalStepIndex:(unsigned int)arg6 startDistance:(double)arg7 lengthScaleFactor:(double)arg8;
- (id)initWithRoute:(id)arg1 startPoint:(unsigned int)arg2 pointCount:(unsigned int)arg3 transportType:(int)arg4 finalStepIndex:(unsigned int)arg5 fallbackStartCoordinate:(struct { double x1; double x2; })arg6 fallbackEndCoordinate:(struct { double x1; double x2; })arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9;
- (BOOL)isTransfer;
- (double)lengthScaleFactor;
- (unsigned int)pointCount;
- (struct { double x1; double x2; }*)points;
- (void)setLengthScaleFactor:(double)arg1;
- (double)startDistance;
- (unsigned int)startPointIndex;
- (int)transportType;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(BOOL)arg3 verifySnapping:(BOOL)arg4;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })vkBounds;

@end
