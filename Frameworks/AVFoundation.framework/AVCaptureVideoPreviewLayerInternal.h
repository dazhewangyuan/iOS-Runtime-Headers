/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    BOOL  automaticallyAdjustsMirroring;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  captureDeviceTransform;
    int  changeSeed;
    BOOL  chromaNoiseReductionEnabled;
    AVCaptureConnection * connection;
    BOOL  disableActions;
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    NSString * gravity;
    BOOL  isPaused;
    BOOL  isPresentationLayer;
    BOOL  mirrored;
    int  orientation;
    double  previewRotationDegrees;
    struct CGSize { 
        double width; 
        double height; 
    }  previewSize;
    double  rollAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  sensorSize;
    NSString * sensorToPreviewVTScalingMode;
    AVCaptureSession * session;
    NSString * sinkID;
    CALayer * sublayer;
    BOOL  visible;
    AVWeakReference * weakReference;
}

@end
