/* Generated by RuntimeBrowser.
 */

@protocol QLScrubViewDataSource

@required

- (int)numberOfPagesInScrubView:(QLScrubView *)arg1;
- (struct CGSize { double x1; double x2; })scrubView:(QLScrubView *)arg1 pageSizeAtIndex:(unsigned int)arg2;
- (QLThumbnailOperation *)scrubView:(QLScrubView *)arg1 thumbnailOperationForPageAtIndex:(unsigned int)arg2;

@end
