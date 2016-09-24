/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIKeyTestOrganizer : NSObject {
    unsigned int  chooseCount;
    unsigned int  flexAttributesCount;
    NSArray * orderedNonZeroFlexibleAttributes;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  originalKey;
    unsigned int  subchooseCount;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  testKey;
}

- (unsigned int)_attributeToBumpIndex;
- (void)_bumpTestKey;
- (BOOL)_bumpTestKeyAttributeIndex:(unsigned int)arg1;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)dealloc;
- (id)initWithRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)nextKey;

@end
