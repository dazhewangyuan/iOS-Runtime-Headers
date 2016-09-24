/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryIdentificationEntryData : CXCallDirectoryEntryData {
    NSMutableData * _labelData;
    NSMutableDictionary * _labelToLabelDataOffset;
    NSMutableData * _phoneNumberData;
}

@property (nonatomic, retain) NSMutableData *labelData;
@property (nonatomic, retain) NSMutableDictionary *labelToLabelDataOffset;
@property (nonatomic, retain) NSMutableData *phoneNumberData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)appendPhoneNumber:(int)arg1 label:(id)arg2;
- (unsigned int)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)labelData;
- (id)labelToLabelDataOffset;
- (int)phoneNumberAtIndex:(unsigned int)arg1;
- (id)phoneNumberData;
- (void)setLabelData:(id)arg1;
- (void)setLabelToLabelDataOffset:(id)arg1;
- (void)setPhoneNumberData:(id)arg1;
- (const char *)utf8LabelAtIndex:(unsigned int)arg1 length:(out unsigned short*)arg2;

@end
