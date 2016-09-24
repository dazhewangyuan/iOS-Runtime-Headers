/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxView : UIView <PTXParallaxObserver, _UISettingsKeyObserver> {
    PTXParallaxController * _parallaxController;
    BOOL  _resizesView;
    PTXParallaxSettings * _settings;
    PTXMotionWindow * _slideWindowX;
    PTXMotionWindow * _slideWindowY;
    BOOL  _stopped;
    PTXMotionWindow * _tiltWindowX;
    PTXMotionWindow * _tiltWindowY;
    UIView * _view;
    double  _viewAlpha;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL resizesView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)_clearOffset;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_slideTransform:(struct CGPoint { double x1; double x2; })arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_tiltTransform:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateSettings;
- (void)clearParallaxOffset;
- (void)dealloc;
- (void)handleParallaxOffset:(struct CGPoint { double x1; double x2; })arg1 lockStatus:(int)arg2 strength:(float)arg3;
- (id)initWithView:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3;
- (void)layoutSubviews;
- (BOOL)resizesView;
- (void)setResizesView:(BOOL)arg1;
- (void)setView:(id)arg1;
- (void)setViewAlpha:(float)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)start;
- (void)stop;
- (id)view;

@end
