/* Generated by RuntimeBrowser.
 */

@protocol UIWebSelectionBlock <NSObject>

@required

- (DOMNode *)asDomNode;
- (DOMRange *)asDomRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (BOOL)canShrinkDirectlyToTextOnly;
- (BOOL)containsBlock:(id <UIWebSelectionBlock>)arg1;
- (BOOL)containsRange:(DOMRange *)arg1;
- (DOMDocument *)enclosingDocument;
- (BOOL)isSameBlock:(id <UIWebSelectionBlock>)arg1;
- (<UIWebSelectionBlock> *)largerParent;
- (<UIWebSelectionBlock> *)parentBlock;
- (DOMRange *)rangeOfContents;
- (BOOL)rendersAsBlock;
- (BOOL)selectable;
- (BOOL)strictlyContainsBlock:(id <UIWebSelectionBlock>)arg1;
- (WebFrame *)webFrame;

@end
