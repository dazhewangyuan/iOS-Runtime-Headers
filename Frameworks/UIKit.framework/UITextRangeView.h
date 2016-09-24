/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRangeView : UIView {
    UITouch * m_activeTouch;
    BOOL  m_animateUpdate;
    BOOL  m_baseIsStart;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_basePoint;
    BOOL  m_commandsWereShowing;
    UIResponder<UITextInput> * m_container;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_endEdge;
    UISelectionGrabber * m_endGrabber;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_extentPoint;
    double  m_firstMovedTime;
    BOOL  m_inGesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_initialBasePoint;
    double  m_initialDistance;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_initialExtentPoint;
    BOOL  m_inputViewIsChanging;
    BOOL  m_isClearingRange;
    BOOL  m_magnifying;
    int  m_mode;
    UIView * m_rectContainerView;
    NSMutableArray * m_rectViews;
    NSArray * m_rects;
    BOOL  m_rotating;
    BOOL  m_scaling;
    BOOL  m_scrolling;
    UITextSelectionView * m_selectionView;
    BOOL  m_shouldStayVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_startEdge;
    UISelectionGrabber * m_startGrabber;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_touchOffset;
}

@property (nonatomic, retain) UITouch *activeTouch;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } activeTouchPoint;
@property (nonatomic) BOOL animateUpdate;
@property (nonatomic, readonly) BOOL autoscrolled;
@property (nonatomic) BOOL baseIsStart;
@property (nonatomic) struct CGPoint { double x1; double x2; } basePoint;
@property (nonatomic) BOOL commandsWereShowing;
@property (nonatomic, readonly) UIResponder<UITextInput> *container;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endEdge;
@property (nonatomic, retain) UISelectionGrabber *endGrabber;
@property (nonatomic) struct CGPoint { double x1; double x2; } extentPoint;
@property (nonatomic) double firstMovedTime;
@property (nonatomic) BOOL inGesture;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialBasePoint;
@property (nonatomic) double initialDistance;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialExtentPoint;
@property (nonatomic) BOOL inputViewIsChanging;
@property (nonatomic) BOOL isClearingRange;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL magnifying;
@property (nonatomic) int mode;
@property (nonatomic, retain) NSArray *rects;
@property (nonatomic) BOOL rotating;
@property (nonatomic) BOOL scaling;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic) BOOL shouldStayVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startEdge;
@property (nonatomic, retain) UISelectionGrabber *startGrabber;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchOffset;

- (void).cxx_destruct;
- (BOOL)_endIsHorizontal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (BOOL)_startIsHorizontal;
- (id)activeTouch;
- (struct CGPoint { double x1; double x2; })activeTouchPoint;
- (BOOL)animateUpdate;
- (struct CGPoint { double x1; double x2; })applyTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)autoscrolled;
- (BOOL)baseIsStart;
- (struct CGPoint { double x1; double x2; })basePoint;
- (void)beginMagnifying;
- (void)cancelDelayedActions;
- (void)clearRangeAnimated:(BOOL)arg1;
- (BOOL)commandsWereShowing;
- (id)container;
- (struct CGPoint { double x1; double x2; })convertFromMagnifierPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)didRotate;
- (void)didScroll;
- (void)doneMagnifying;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge;
- (id)endGrabber;
- (struct CGPoint { double x1; double x2; })extentPoint;
- (double)firstMovedTime;
- (BOOL)inGesture;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionView:(id)arg2;
- (struct CGPoint { double x1; double x2; })initialBasePoint;
- (float)initialDistance;
- (struct CGPoint { double x1; double x2; })initialExtentPoint;
- (void)inputViewDidChange;
- (BOOL)inputViewIsChanging;
- (void)inputViewWillChange;
- (BOOL)isClearingRange;
- (BOOL)isScrolling;
- (struct CGPoint { double x1; double x2; })magnifierPoint;
- (BOOL)magnifying;
- (int)mode;
- (BOOL)pointCloserToEnd:(struct CGPoint { double x1; double x2; })arg1 startEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 endEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (BOOL)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForMagnification;
- (id)rects;
- (void)removeFromSuperview;
- (BOOL)rotating;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (BOOL)scaling;
- (id)selectionView;
- (void)setActiveTouch:(id)arg1;
- (void)setAnimateUpdate:(BOOL)arg1;
- (void)setBaseIsStart:(BOOL)arg1;
- (void)setBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCommandsWereShowing:(BOOL)arg1;
- (void)setEndEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEndGrabber:(id)arg1;
- (void)setExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFirstMovedTime:(double)arg1;
- (void)setInGesture:(BOOL)arg1;
- (void)setInitialBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialDistance:(float)arg1;
- (void)setInitialExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputViewIsChanging:(BOOL)arg1;
- (void)setIsClearingRange:(BOOL)arg1;
- (void)setIsScrolling:(BOOL)arg1;
- (void)setMagnifierOrientation;
- (void)setMagnifying:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setRects:(id)arg1;
- (void)setRotating:(BOOL)arg1;
- (void)setScaling:(BOOL)arg1;
- (void)setShouldStayVisible:(BOOL)arg1;
- (void)setStartEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartGrabber:(id)arg1;
- (void)setTouchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchOffset:(struct CGPoint { double x1; double x2; })arg1 touchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (BOOL)shouldStayVisible;
- (void)startAnimating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge;
- (id)startGrabber;
- (void)stopAnimating;
- (struct CGPoint { double x1; double x2; })touchOffset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateBaseAndExtentPointsFromEdges;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateDots;
- (void)updateEdges;
- (void)updateGrabbers;
- (void)updateRectViews;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willRotate;
- (void)willScroll;

@end
