/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (nonatomic) <SiriUISelectionTemplateViewControllerDelegate> *delegate;
@property (nonatomic) BOOL selected;
@property (nonatomic, retain) <SiriUISelectionTemplateModel> *templateModel;
@property (nonatomic, retain) SiriUISelectionTemplateView *view;

- (void)_didSelectChoiceFromSender:(id)arg1;
- (void)loadView;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (Class)templateViewClass;

@end
