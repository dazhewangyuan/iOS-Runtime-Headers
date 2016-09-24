/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElementGroup : NSArray <AXGroupable> {
    AXElement * _elementCommunity;
    NSArray * _elementStore;
    <AXElementGroupGenerator> * _generator;
    NSHashTable * _groupObservers;
    int  _groupTraits;
    NSString * _label;
    AXElementGroup * _parentGroup;
    BOOL  _rootGroup;
    int  _userDefinedScanningBehaviorTraits;
}

@property (nonatomic, readonly) BOOL allowsChangingExistingGroupingOfContents;
@property (nonatomic, readonly) BOOL allowsVisualGroupingOfChildren;
@property (nonatomic, readonly) BOOL canBeGroupedWithOtherGroupables;
@property (nonatomic, readonly) BOOL canBeReplacedByChildren;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXElement *elementCommunity;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) <AXElementGroupGenerator> *generator;
@property (nonatomic, retain) NSHashTable *groupObservers;
@property (nonatomic) int groupTraits;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned int numberOfElements;
@property (nonatomic) AXElementGroup *parentGroup;
@property (getter=isRootGroup, nonatomic) BOOL rootGroup;
@property (nonatomic, readonly) BOOL shouldBeUngrouped;
@property (readonly) Class superclass;
@property (nonatomic) int userDefinedScanningBehaviorTraits;

+ (id)groupWithElements:(id)arg1;
+ (id)groupWithElements:(id)arg1 label:(id)arg2;
+ (id)groupWithGenerator:(id)arg1;

- (void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3;
- (id)_debugBriefDescription;
- (id)_debugDescriptionForScanningBehaviorTraits;
- (id)_debugDescriptionForTraits;
- (id)_debugFullDescriptionWithIndent:(id)arg1;
- (void)_generateGroupsIfNeeded;
- (id)_leafAXElementWithPosition:(int)arg1;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1;
- (id)_siblingOfChild:(id)arg1 inDirection:(BOOL)arg2 didWrap:(BOOL*)arg3;
- (void)_transferStateToGroup:(id)arg1;
- (BOOL)allowsChangingExistingGroupingOfContents;
- (BOOL)allowsVisualGroupingOfChildren;
- (id)ancestorPassingTest:(id /* block */)arg1;
- (id)bottomMostLeafAXElement;
- (BOOL)canBeGroupedWithOtherGroupables;
- (BOOL)canBeReplacedByChildren;
- (id)childrenPassingTest:(id /* block */)arg1;
- (BOOL)containsNativeFocusElement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)debugDescription;
- (id)debugFullDescription;
- (id)descendantWithNativeFocus;
- (id)descendantsPassingTest:(id /* block */)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)elementCommunity;
- (void)enumerateLeafDescendantsUsingBlock:(id /* block */)arg1;
- (id)firstChild;
- (id)firstChildMatchingItem:(id)arg1;
- (id)firstChildPassingTest:(id /* block */)arg1;
- (id)firstDescendantMatchingItem:(id)arg1;
- (id)firstDescendantPassingTest:(id /* block */)arg1;
- (id)firstLeafDescendant;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)generator;
- (id)groupByAppendingGroupable:(id)arg1;
- (id)groupByPrependingGroupable:(id)arg1;
- (id)groupByRemovingGroupable:(id)arg1;
- (id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2;
- (id)groupObservers;
- (int)groupTraits;
- (id)highestAncestorGroup;
- (id)initWithElements:(id)arg1 label:(id)arg2;
- (id)initWithGenerator:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isKeyboardContainer;
- (BOOL)isKeyboardRow;
- (BOOL)isRootGroup;
- (id)keyboardContainer;
- (id)keyboardContainerRows;
- (id)keyboardRow;
- (id)label;
- (id)lastChild;
- (id)leftMostLeafAXElement;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2;
- (unsigned int)numberOfElements;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)parentGroup;
- (id)previousSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2;
- (void)registerGroupObserver:(id)arg1;
- (id)rightMostLeafAXElement;
- (void)setElementCommunity:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setGroupObservers:(id)arg1;
- (void)setGroupTraits:(int)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setRootGroup:(BOOL)arg1;
- (void)setUserDefinedScanningBehaviorTraits:(int)arg1;
- (BOOL)shouldBeUngrouped;
- (id)topMostLeafAXElement;
- (void)unregisterAllGroupObservers;
- (void)unregisterGroupObserver:(id)arg1;
- (int)userDefinedScanningBehaviorTraits;

@end
