/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAbstractLayoutGuide : NSObject <NSCoding, NSISVariableDelegate, NSLayoutItem> {
    <NSLayoutItem> * _concreteLayoutGuide;
    NSISVariable * _heightVariable;
    NSString * _identifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutFrame;
    NSISVariable * _minXVariable;
    NSISVariable * _minYVariable;
    <NSLayoutItem> * _owningView;
    NSISVariable * _widthVariable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned int hash;
@property (readonly) NSISVariable *heightVariable;
@property (copy) NSString *identifier;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutFrame;
@property (readonly) NSISVariable *minXVariable;
@property (readonly) NSISVariable *minYVariable;
@property <NSLayoutItem> *owningView;
@property (readonly) Class superclass;
@property (readonly) NSISVariable *widthVariable;

- (BOOL)_isDescendantOf:(id)arg1;
- (void)_snipReferencingConstraints;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)heightVariable;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcreteLayoutGuide:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrame;
- (id)minXVariable;
- (id)minYVariable;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (unsigned int)nsli_autoresizingMask;
- (struct CGSize { double x1; double x2; })nsli_convertSizeFromEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })nsli_convertSizeToEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (id)nsli_description;
- (BOOL)nsli_descriptionIncludesPointer;
- (id)nsli_installedConstraints;
- (BOOL)nsli_isFlipped;
- (id)nsli_layoutEngine;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 container:(id)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 forConstraint:(id)arg4;
- (float)nsli_marginOffsetForAttribute:(int)arg1;
- (BOOL)nsli_removeConstraint:(id)arg1;
- (BOOL)nsli_resolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
- (id)nsli_superitem;
- (id)owningView;
- (void)setIdentifier:(id)arg1;
- (void)setOwningView:(id)arg1;
- (id)widthVariable;

@end
