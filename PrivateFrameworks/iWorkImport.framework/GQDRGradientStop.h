/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRGradientStop : NSObject {
    GQDColor * mColor;
    double  mFraction;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)color;
- (void)dealloc;
- (float)fraction;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
