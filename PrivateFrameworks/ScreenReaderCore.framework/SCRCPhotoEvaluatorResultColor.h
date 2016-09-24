/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult {
    double  _blueLevel;
    double  _greenLevel;
    double  _redLevel;
}

@property (nonatomic, readonly) double blueLevel;
@property (nonatomic, readonly) double greenLevel;
@property (nonatomic, readonly) double redLevel;

- (float)blueLevel;
- (float)greenLevel;
- (id)humanReadableResult;
- (id)initWithRedLevel:(float)arg1 blueLevel:(float)arg2 greenLevel:(float)arg3;
- (float)redLevel;

@end
