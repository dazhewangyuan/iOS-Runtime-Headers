/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataValue : NSObject {
    struct CHDDataPoint { 
        unsigned int index; 
        struct EDValue { 
            int type; 
            union { 
                bool boolean; 
                double number; 
                EDString *string; 
                unsigned int stringIndex; 
                int error; 
            } ; 
        } value; 
        unsigned int contentFormatId; 
    }  mDataPoint;
}

+ (id)dataValue;
+ (id)dataValueWithIndex:(int)arg1 value:(struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; id x_2_1_3; int x_2_1_4; } x2; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)contentFormatId;
- (id)contentFormatWithResources:(id)arg1;
- (struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; id x_2_2_3; int x_2_2_4; } x_2_1_2; } x2; unsigned int x3; }*)dataPoint;
- (id)description;
- (int)index;
- (id)init;
- (id)initWithIndex:(int)arg1 value:(struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; id x_2_1_3; int x_2_1_4; } x2; }*)arg2;
- (void)setContentFormatId:(unsigned int)arg1;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;
- (void)setDataPoint:(struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; id x_2_2_3; int x_2_2_4; } x_2_1_2; } x2; unsigned int x3; }*)arg1;
- (void)setIndex:(int)arg1;
- (void)setValue:(struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; id x_2_1_3; int x_2_1_4; } x2; }*)arg1;
- (struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; id x_2_1_3; int x_2_1_4; } x2; }*)value;

@end
