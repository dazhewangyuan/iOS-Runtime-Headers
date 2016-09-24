/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKStrokedAnnotation : AKAnnotation <AKStrokedAnnotationProtocol> {
    int  _brushStyle;
    BOOL  _dashed;
    BOOL  _hasShadow;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property int brushStyle;
@property (getter=isDashed) BOOL dashed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasShadow;
@property (readonly) unsigned int hash;
@property (retain) UIColor *strokeColor;
@property double strokeWidth;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)brushStyle;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasShadow;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDashed;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)setBrushStyle:(int)arg1;
- (void)setDashed:(BOOL)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(float)arg1;
- (id)strokeColor;
- (float)strokeWidth;

@end
