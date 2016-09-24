/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayLayout : NSObject <BSDescriptionProviding, BSXPCCoding> {
    int  _backlightLevel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    FBSDisplay * _display;
    unsigned int  _displayType;
    NSMutableArray * _elements;
    int  _interfaceOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    NSDate * _timestamp;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplay *display;
@property (nonatomic) int displayBacklightLevel;
@property (nonatomic) unsigned int displayType;
@property (nonatomic, copy) NSArray *elements;
@property (readonly) unsigned int hash;
@property (nonatomic) int interfaceOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSDate *timestamp;

- (id)_initWithElements:(id)arg1;
- (void)_sortElements;
- (void)addElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (int)displayBacklightLevel;
- (unsigned int)displayType;
- (id)elements;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)finalizeLayout;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (int)interfaceOrientation;
- (BOOL)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (void)removeElement:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisplay:(id)arg1;
- (void)setDisplayBacklightLevel:(int)arg1;
- (void)setDisplayType:(unsigned int)arg1;
- (void)setElements:(id)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timestamp;

@end
