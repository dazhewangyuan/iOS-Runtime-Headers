/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImagePickerController : UINavigationController <NSCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    id  _image;
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int savingOptions : 3; 
        unsigned int didRevertStatusBar : 1; 
    }  _imagePickerFlags;
    NSArray * _mediaTypes;
    BOOL  _previousStatusBarHidden;
    int  _previousStatusBarStyle;
    NSMutableDictionary * _properties;
    int  _sourceType;
}

@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsImageEditing;
@property (nonatomic) int cameraCaptureMode;
@property (nonatomic) int cameraDevice;
@property (nonatomic) int cameraFlashMode;
@property (nonatomic, retain) UIView *cameraOverlayView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } cameraViewTransform;
@property (nonatomic) <UINavigationControllerDelegate><UIImagePickerControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *mediaTypes;
@property (nonatomic) BOOL showsCameraControls;
@property (nonatomic) int sourceType;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) int videoQuality;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(int)arg2;
+ (BOOL)_reviewCapturedItems;
+ (id)availableCaptureModesForCameraDevice:(int)arg1;
+ (id)availableMediaTypesForSourceType:(int)arg1;
+ (BOOL)isCameraDeviceAvailable:(int)arg1;
+ (BOOL)isFlashAvailableForCameraDevice:(int)arg1;
+ (BOOL)isSourceTypeAvailable:(int)arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_adjustedContentSizeForPopover:(struct CGSize { double x1; double x2; })arg1;
- (BOOL)_allowsImageEditing;
- (BOOL)_allowsIris;
- (BOOL)_allowsMultipleSelection;
- (void)_autoDismiss;
- (id)_cameraViewController;
- (id)_createInitialController;
- (BOOL)_didRevertStatusBar;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;
- (unsigned int)_imagePickerSavingOptions;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_initializeProperties;
- (BOOL)_isCameraCaptureModeValid:(int)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)_properties;
- (void)_removeAllChildren;
- (void)_setAllowsImageEditing:(BOOL)arg1;
- (void)_setAllowsIris:(BOOL)arg1;
- (void)_setAllowsMultipleSelection:(BOOL)arg1;
- (void)_setImagePickerSavingOptions:(unsigned int)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setupControllersForCurrentSourceType;
- (BOOL)_sourceTypeIsCamera;
- (void)_updateCameraCaptureMode;
- (id)_valueForProperty:(id)arg1;
- (BOOL)allowsEditing;
- (BOOL)allowsImageEditing;
- (int)cameraCaptureMode;
- (int)cameraDevice;
- (int)cameraFlashMode;
- (id)cameraOverlayView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cameraViewTransform;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mediaTypes;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)setCameraCaptureMode:(int)arg1;
- (void)setCameraDevice:(int)arg1;
- (void)setCameraFlashMode:(int)arg1;
- (void)setCameraOverlayView:(id)arg1;
- (void)setCameraViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setMediaTypes:(id)arg1;
- (void)setShowsCameraControls:(BOOL)arg1;
- (void)setSourceType:(int)arg1;
- (void)setVideoMaximumDuration:(double)arg1;
- (void)setVideoQuality:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showsCameraControls;
- (int)sourceType;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;
- (unsigned int)supportedInterfaceOrientations;
- (void)takePicture;
- (double)videoMaximumDuration;
- (int)videoQuality;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillUnload;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)aaui_fixedCropRect:(id)arg1 forOriginalImage:(id)arg2;

@end
