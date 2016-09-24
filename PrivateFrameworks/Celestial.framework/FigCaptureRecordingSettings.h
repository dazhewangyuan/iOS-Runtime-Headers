/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureRecordingSettings : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _maxDuration;
    int  _maxFileSize;
    int  _minFreeDiskSpaceLimit;
    NSString * _outputFileType;
    NSURL * _outputURL;
    int  _settingsID;
}

@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } maxDuration;
@property (nonatomic) int maxFileSize;
@property (nonatomic) int minFreeDiskSpaceLimit;
@property (nonatomic, copy) NSString *outputFileType;
@property (nonatomic, copy) NSURL *outputURL;
@property (nonatomic) int settingsID;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct { int x1; int x2; unsigned int x3; int x4; })maxDuration;
- (int)maxFileSize;
- (int)minFreeDiskSpaceLimit;
- (id)outputFileType;
- (id)outputURL;
- (void)setMaxDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setMaxFileSize:(int)arg1;
- (void)setMinFreeDiskSpaceLimit:(int)arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setSettingsID:(int)arg1;
- (int)settingsID;

@end
