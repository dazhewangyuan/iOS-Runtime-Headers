/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRepMagicMoveTextChunk : NSObject {
    BOOL  _hasListLabel;
    BOOL  _isVisible;
    double  _opacityFromRenderer;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
    TSWPShapeRep * _rep;
    int  _stageIndex;
    NSString * _stringValue;
    NSMutableIndexSet * _unhandledIndexSet;
}

@property (nonatomic) BOOL hasListLabel;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) double opacityFromRenderer;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic) TSWPShapeRep *rep;
@property (nonatomic) int stageIndex;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, retain) NSMutableIndexSet *unhandledIndexSet;

- (void)dealloc;
- (id)description;
- (BOOL)hasListLabel;
- (id)init;
- (BOOL)isVisible;
- (float)opacityFromRenderer;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)rep;
- (void)setHasListLabel:(BOOL)arg1;
- (void)setIsVisible:(BOOL)arg1;
- (void)setOpacityFromRenderer:(float)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setRep:(id)arg1;
- (void)setStageIndex:(int)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUnhandledIndexSet:(id)arg1;
- (int)stageIndex;
- (id)stringValue;
- (id)unhandledIndexSet;

@end
