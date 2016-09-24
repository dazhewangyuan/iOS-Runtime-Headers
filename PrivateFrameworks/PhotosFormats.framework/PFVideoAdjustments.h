/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoAdjustments : PFAssetAdjustments {
    double  _slowMotionRate;
    struct { 
        struct { 
            int value; 
            int timescale; 
            unsigned int flags; 
            int epoch; 
        } start; 
        struct { 
            int value; 
            int timescale; 
            unsigned int flags; 
            int epoch; 
        } duration; 
    }  _slowMotionTimeRange;
}

@property (nonatomic, readonly) struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; } slowMotionRampIn;
@property (nonatomic, readonly) struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; } slowMotionRampOut;
@property (nonatomic, readonly) double slowMotionRate;
@property (nonatomic) double slowMotionRate;
@property (nonatomic) struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; } slowMotionTimeRange;
@property (nonatomic, readonly) struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; } slowMotionTimeRange;

// Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats

+ (id)defaultSlowMotionAdjustmentsForAsset:(id)arg1;
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;
+ (struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })defaultSlowMotionTimeRangeForDuration:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;
+ (BOOL)isRecognizedFormatWithIdentifier:(id)arg1 version:(id)arg2;

- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1;
- (id)_dictionaryFromSlowMotionTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })arg1 rate:(float)arg2;
- (BOOL)_isValidSlowMotionTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })arg1 rate:(float)arg2;
- (BOOL)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; }*)arg2 rate:(float*)arg3;
- (BOOL)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; }*)arg2 rate:(float*)arg3;
- (BOOL)_parseVersionedDataForSlowMotionTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; }*)arg1 rate:(float*)arg2;
- (void)_updateDerivedPropertiesFromVersionedData;
- (struct { int x1; int x2; unsigned int x3; int x4; })convertToOriginalTimeFromScaledTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 forExport:(BOOL)arg2;
- (struct { int x1; int x2; unsigned int x3; int x4; })convertToScaledTimeFromOriginalTime:(struct { int x1; int x2; unsigned int x3; int x4; })arg1 forExport:(BOOL)arg2;
- (id)description;
- (BOOL)hasSlowMotionAdjustments;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithSlowMotionTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })arg1 rate:(float)arg2;
- (BOOL)isRecognizedFormat;
- (void)setSlowMotionRate:(float)arg1;
- (void)setSlowMotionTimeRange:(struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })arg1;
- (struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })slowMotionRampIn;
- (struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })slowMotionRampOut;
- (float)slowMotionRate;
- (struct { struct { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; } x1; struct { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; } x2; })slowMotionTimeRange;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)videoAdjustmentsFromAssetAdjustmentsIfRecognized:(id)arg1;

@end
