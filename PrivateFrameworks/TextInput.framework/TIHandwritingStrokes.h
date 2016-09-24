/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _continuePreviousStroke;
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { 
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__begin_; 
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { 
            struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__first_; 
        } __end_cap_; 
    }  _strokes;
}

+ (BOOL)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)endStroke;
- (id)initWithCoder:(id)arg1;
- (unsigned int)numberOfPointsInStrokeAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfStrokes;
- (struct CGPoint { double x1; double x2; })pointAtIndex:(unsigned int)arg1 inStrokeAtIndex:(unsigned int)arg2;
- (void)removeAllStrokes;
- (void)removeStrokeAtIndex:(unsigned int)arg1;
- (unsigned int)totalNumberOfPoints;

@end
