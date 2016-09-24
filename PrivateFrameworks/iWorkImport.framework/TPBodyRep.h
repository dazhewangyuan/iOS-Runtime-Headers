/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyRep : TSWPRep {
    TPBodyLayout * _bodyLayout;
    NSSet * _lastSelectedInfos;
}

@property (nonatomic, readonly) TPBodyLayout *bodyLayout;

- (id)bodyLayout;
- (void)dealloc;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)p_doesRep:(id)arg1 containCharIndex:(unsigned int)arg2 isStart:(BOOL)arg3;
- (id)storage;

@end
