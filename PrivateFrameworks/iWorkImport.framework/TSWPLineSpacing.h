/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLineSpacing : NSObject <NSCopying> {
    double  _amount;
    double  _baselineRule;
    int  _mode;
}

+ (id)lineSpacing;

- (float)amount;
- (float)baselineRule;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct LineSpacingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; double x6; double x7; }*)arg1 unarchiver:(id)arg2;
- (id)initWithMode:(int)arg1 amount:(float)arg2;
- (id)initWithMode:(int)arg1 amount:(float)arg2 baselineRule:(float)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)mode;
- (void)saveToArchive:(struct LineSpacingArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; double x6; double x7; }*)arg1 archiver:(id)arg2;

@end
