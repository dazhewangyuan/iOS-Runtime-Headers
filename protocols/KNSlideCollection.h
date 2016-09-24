/* Generated by RuntimeBrowser.
 */

@protocol KNSlideCollection <NSObject>

@required

- (BOOL)containsSlideNode:(KNSlideNode *)arg1;
- (KNSlideNode *)defaultSlideNodeForNewSelection;
- (KNSlideNode *)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned int)arg1;
- (unsigned int)indexOfSlideNode:(KNSlideNode *)arg1;
- (NSArray *)orderedSlideNodesInSelection:(KNSlideCollectionSelection *)arg1;

@end
