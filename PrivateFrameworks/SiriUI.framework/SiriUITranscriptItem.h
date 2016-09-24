/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUITranscriptItem : NSObject {
    AceObject * _aceObject;
    NSUUID * _itemIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousFrame;
    BOOL  _snippetViewControllerHasBeenUnloaded;
    UIViewController<SiriUIViewController> * _viewController;
}

@property (nonatomic, retain) AceObject *aceObject;
@property (nonatomic, copy) NSUUID *itemIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousFrame;
@property (nonatomic) BOOL snippetViewControllerHasBeenUnloaded;
@property (nonatomic, retain) UIViewController<SiriUIViewController> *viewController;

+ (id)transcriptItemWithAceObject:(id)arg1;

- (void).cxx_destruct;
- (id)aceObject;
- (id)description;
- (id)initWithAceObject:(id)arg1;
- (id)itemIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousFrame;
- (void)setAceObject:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setPreviousFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSnippetViewControllerHasBeenUnloaded:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (BOOL)snippetViewControllerHasBeenUnloaded;
- (id)viewController;

@end
