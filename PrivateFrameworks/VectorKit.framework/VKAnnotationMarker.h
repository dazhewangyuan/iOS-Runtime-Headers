/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationMarker : VKAnnotationMarkerLayer <VKTrackableAnnotationPresentation> {
    BOOL  _animatingToCoordinate;
    <VKAnnotation> * _annotation;
    struct { 
        double latitude; 
        double longitude; 
    }  _presentationCoordinate;
    struct { 
        int from; 
        int to; 
        struct { 
            unsigned char timePeriod; 
            unsigned char overlayType; 
            unsigned char applicationState; 
            unsigned char searchResultsType; 
            BOOL mapHasLabels; 
        } fromDisplayStyle; 
        struct { 
            unsigned char timePeriod; 
            unsigned char overlayType; 
            unsigned char applicationState; 
            unsigned char searchResultsType; 
            BOOL mapHasLabels; 
        } toDisplayStyle; 
        double fraction; 
    }  _styleTransitionState;
    BOOL  _tracking;
}

@property (nonatomic) BOOL animatingToCoordinate;
@property (nonatomic, retain) <VKAnnotation> *annotation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic) struct { int x1; int x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; BOOL x_3_1_5; } x3; struct { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; BOOL x_4_1_5; } x4; double x5; } styleTransitionState;
@property (readonly) Class superclass;
@property (getter=isTracking, nonatomic) BOOL tracking;

- (BOOL)animatingToCoordinate;
- (id)annotation;
- (void)dealloc;
- (id)init;
- (id)initWithAnnotation:(id)arg1;
- (BOOL)isTracking;
- (struct { double x1; double x2; })presentationCoordinate;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setStyleTransitionState:(struct { int x1; int x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; BOOL x_3_1_5; } x3; struct { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; BOOL x_4_1_5; } x4; double x5; })arg1;
- (void)setTracking:(BOOL)arg1;
- (struct { int x1; int x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; BOOL x_3_1_5; } x3; struct { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; BOOL x_4_1_5; } x4; double x5; })styleTransitionState;

@end
