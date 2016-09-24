/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDocumentRootICloudObserver : NSObject {
    id /* block */  _block;
    int  _identifer;
    int  _identifier;
    NSOperationQueue * _operationQueue;
    BOOL  _suspendedCollaboration;
}

@property (nonatomic, readonly) int identifer;
@property (nonatomic, readonly) BOOL suspendedCollaboration;

- (void)dealloc;
- (int)identifer;
- (id)initWithSuspendedCollaboration:(BOOL)arg1 block:(id /* block */)arg2;
- (void)invokeWithDocumentRoot:(id)arg1;
- (BOOL)suspendedCollaboration;

@end
