/* Generated by RuntimeBrowser.
 */

@protocol UIWebFindOnPageHighlighter <NSObject>

@required

- (<UIWebFindOnPageHighlighterDelegate> *)delegate;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
- (unsigned int)highlightedMatchIndex;
- (unsigned int)numberOfMatches;
- (NSString *)searchText;
- (void)setDelegate:(id <UIWebFindOnPageHighlighterDelegate>)arg1;
- (void)setSearchText:(NSString *)arg1 matchLimit:(unsigned int)arg2;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textRects:(NSArray *)arg2 contentViews:(NSArray *)arg3 wobble:(BOOL)arg4;

@end
