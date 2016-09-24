/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPagePrivate : NSObject {
    NSMutableArray * annotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  artBox;
    NSMutableAttributedString * attributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bleedBox;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cropBox;
    bool  displaysAnnotations;
    bool  displaysMarkups;
    PDFDocument * document;
    bool  enqueuedForDataDetection;
    bool  enqueuedForLayout;
    UIImage * image;
    bool  isBookmarked;
    bool  isFullyConstructed;
    NSString * label;
    struct CGPDFLayout { } * layout;
    NSThread * layoutThread;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    }  layoutThreadCondition;
    NSLock * lock_accessAnnotations;
    NSLock * lock_accessLayout;
    NSLock * lock_dataEnqueuedForDataDetection;
    NSLock * lock_getAnnotations;
    NSLock * lock_text;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mediaBox;
    int  numChars;
    struct CGPDFPage { } * page;
    bool  ranDataDetectors;
    int  rotation;
    NSMutableArray * scannedAnnotations;
    struct __CFString { } * text;
    BOOL  textCharsLoaded;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[4088]; } * threadFetchingLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  trimBox;
    NSMutableArray * unsupportedElements;
    PDFView * view;
}

- (void).cxx_destruct;

@end
