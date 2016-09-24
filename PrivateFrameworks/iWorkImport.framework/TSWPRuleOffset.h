/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRuleOffset : NSObject <NSCopying> {
    double  _dX;
    double  _dY;
}

@property (nonatomic, readonly) double dX;
@property (nonatomic, readonly) double dY;

+ (id)ruleOffset;
+ (id)ruleOffsetWithDX:(float)arg1 dY:(float)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dX;
- (float)dY;
- (id)description;
- (id)init;
- (id)initWithArchive:(const struct Point { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; double x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithDX:(float)arg1 dY:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointValue;
- (void)saveToArchive:(struct Point { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; double x6; }*)arg1 archiver:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeValue;

@end
