/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataItemInternal : NSObject {
    NSString * commonKey;
    NSString * dataType;
    NSDate * discoveryTimestamp;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  duration;
    NSString * extendedLanguageTag;
    NSDictionary * extras;
    NSString * identifier;
    long  itemIndex;
    <NSObject><NSCopying> * key;
    NSString * keySpace;
    NSString * languageCode;
    NSLocale * locale;
    struct OpaqueFigMetadataReader { } * reader;
    NSDate * startDate;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  time;
    <NSObject><NSCopying> * value;
}

@end
