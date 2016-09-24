/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleListHeadlinesOperation : FCOperation {
    NSArray * _articleListIDs;
    <FCContentContext> * _context;
    id /* block */  _headlinesCompletionHandler;
    NSDictionary * _resultHeadlinesByArticleListID;
}

@property (nonatomic, copy) NSArray *articleListIDs;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ headlinesCompletionHandler;
@property (nonatomic, retain) NSDictionary *resultHeadlinesByArticleListID;

- (void).cxx_destruct;
- (id)articleListIDs;
- (id)context;
- (id /* block */)headlinesCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultHeadlinesByArticleListID;
- (void)setArticleListIDs:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setResultHeadlinesByArticleListID:(id)arg1;
- (BOOL)validateOperation;

@end
