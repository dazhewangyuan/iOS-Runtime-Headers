/* Generated by RuntimeBrowser.
 */

@protocol QLPrintingProtocol

@required

- (void)numberOfPagesWithSize:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)pdfDataForPageAtIndex:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
