/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectContainer : TSPObject {
    NSArray * _childObjects;
    unsigned char  _packageIdentifier;
}

+ (int)objectIdentifierForPackageIdentifier:(unsigned char)arg1;

- (void).cxx_destruct;
- (unsigned int)delayedArchivingPriority;
- (void)didFinishUnarchiving;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (id)packageLocator;
- (void)prepareForComponentWriteWithDelayedObjects:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)shouldDelayArchiving;
- (int)tsp_identifier;

@end
