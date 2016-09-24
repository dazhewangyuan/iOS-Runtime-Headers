/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSCompositeLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {
    NSLayoutDimension * _firstLayoutDimension;
    NSLayoutDimension * _secondLayoutDimension;
    double  _secondLayoutDimensionMultiplier;
}

@property (readonly) NSArray *_childAnchors;

- (id)_childAnchors;
- (id)_expressionInContext:(/* Warning: unhandled struct encoding: '{?=i@}' */ struct { int x1; id x2; })arg1;
- (float)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2;
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2 times:(float)arg3;

@end
