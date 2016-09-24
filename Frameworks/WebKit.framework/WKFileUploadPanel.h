/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFileUploadPanel : UIViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate> {
    struct RetainPtr<UIAlertController> { 
        void *m_ptr; 
    }  _actionSheetController;
    BOOL  _allowMultipleFiles;
    <WKFileUploadPanelDelegate> * _delegate;
    struct RetainPtr<UIDocumentMenuViewController> { 
        void *m_ptr; 
    }  _documentMenuController;
    struct RetainPtr<UIImagePickerController> { 
        void *m_ptr; 
    }  _imagePicker;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy> { 
        struct WebOpenPanelResultListenerProxy {} *m_ptr; 
    }  _listener;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _mimeTypes;
    struct RetainPtr<UIPopoverController> { 
        void *m_ptr; 
    }  _presentationPopover;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _presentationViewController;
    BOOL  _usingCamera;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKFileUploadPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_cameraButtonLabel;
- (void)_cancel;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_dismissDisplayAnimated:(BOOL)arg1;
- (void)_dispatchDidDismiss;
- (id)_displayStringForPhotos:(unsigned int)arg1 videos:(unsigned int)arg2;
- (id)_documentPickerMenuMediaTypes;
- (id)_mediaTypesForPickerSourceType:(int)arg1;
- (id)_photoLibraryButtonLabel;
- (void)_presentForCurrentInterfaceIdiom:(id)arg1;
- (void)_presentFullscreenViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned int)arg2 processedResults:(id)arg3 processedImageCount:(unsigned int)arg4 processedVideoCount:(unsigned int)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_showDocumentPickerMenu;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (void)_uploadItemForImage:(id)arg1 withAssetURL:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentWithParameters:(struct OpenPanelParameters { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*x3; int x4; long x5; void*x6; unsigned char x7; void*x8; out out short x9; void*x10; const unsigned short x11; void*x12; void*x13; void*x14; int x15; in void*x16; short x17; void*x18; bool x19; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_20_1_1; unsigned int x_20_1_2; unsigned int x_20_1_3; } x20; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_21_1_1; unsigned int x_21_1_2; unsigned int x_21_1_3; } x21; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_22_1_1; unsigned int x_22_1_2; unsigned int x_22_1_3; } x22; }*)arg1 resultListener:(struct WebOpenPanelResultListenerProxy { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; double x5; void*x6; void*x7; const void*x8; void*x9; void*x10; unsigned int x11/* : ? */; void*x12; int x13; void*x14; SEL x15; SEL x16; void*x17; void*x18; unsigned int x19/* : ? */; void*x20; void*x21; void*x22; void*x23; void*x24; const out void*x25; void*x26; void*x27; void*x28; struct WebPageProxy {} *x29; }*)arg2;
- (void)setDelegate:(id)arg1;

@end
