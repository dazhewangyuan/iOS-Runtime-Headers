/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUContactAutoFillPropertyValues : NSObject {
    NSString * _property;
    unsigned int  _selectedIndex;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) NSString *property;
@property (nonatomic) unsigned int selectedIndex;
@property (nonatomic, readonly) WBUContactAutoFillValue *selectedValue;
@property (nonatomic, readonly, copy) NSArray *values;

- (void).cxx_destruct;
- (id)initWithValues:(id)arg1 property:(id)arg2;
- (id)property;
- (unsigned int)selectedIndex;
- (id)selectedValue;
- (void)setSelectedIndex:(unsigned int)arg1;
- (id)values;

@end
