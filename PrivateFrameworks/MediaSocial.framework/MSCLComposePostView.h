/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLComposePostView : UIScrollView <NSLayoutManagerDelegate, UITextViewDelegate> {
    int  _allowedCharacterCount;
    UIButton * _attachmentButton;
    NSMutableArray * _attachmentViews;
    UILabel * _characterCountLabel;
    <MSCLComposePostViewDataSource> * _dataSource;
    NSArray * _footerViews;
    NSArray * _headerViews;
    int  _numberOfAttachments;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preCompletionContentOffset;
    NSArray * _scrollableHeaderViews;
    UITapGestureRecognizer * _tapRecognizer;
    UIViewController * _textCompletionViewController;
    MSCLTokenTextView * _textView;
}

@property (nonatomic) int allowedCharacterCount;
@property (nonatomic, readonly) UIControl *attachmentButton;
@property (nonatomic, copy) NSArray *attachmentViews;
@property (nonatomic) <MSCLComposePostViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLComposePostViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *footerViews;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *headerViews;
@property (nonatomic, copy) NSArray *scrollableHeaderViews;
@property (nonatomic) BOOL showsAttachmentButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tagForSelectedRange;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (void)_keyboardHideNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_reloadCharacterCountLabel;
- (void)_reloadUnderlineStyling;
- (void)_removeAttachmentButtonAction:(id)arg1;
- (void)_tapRecognizerAction:(id)arg1;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (int)allowedCharacterCount;
- (id)attachmentButton;
- (id)attachmentViews;
- (BOOL)becomeFirstResponder;
- (id)dataSource;
- (void)dealloc;
- (id)footerViews;
- (id)headerViews;
- (void)hideTextCompletionViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertTag:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (id)scrollableHeaderViews;
- (void)setAllowedCharacterCount:(int)arg1;
- (void)setAttachmentViews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFooterViews:(id)arg1;
- (void)setHeaderViews:(id)arg1;
- (void)setScrollableHeaderViews:(id)arg1;
- (void)setShowsAttachmentButton:(BOOL)arg1;
- (void)showTextCompletionViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)showsAttachmentButton;
- (id)tagForSelectedRange;
- (id)text;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;

@end
