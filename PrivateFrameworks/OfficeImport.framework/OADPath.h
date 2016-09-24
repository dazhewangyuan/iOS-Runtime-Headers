/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPath : NSObject {
    NSMutableArray * mElements;
    int  mFillMode;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    BOOL  mStroked;
}

- (void)addElement:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)elementAtIndex:(unsigned int)arg1;
- (unsigned int)elementCount;
- (int)fillMode;
- (id)init;
- (void)setFillMode:(int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStroked:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })size;
- (BOOL)stroked;

@end
