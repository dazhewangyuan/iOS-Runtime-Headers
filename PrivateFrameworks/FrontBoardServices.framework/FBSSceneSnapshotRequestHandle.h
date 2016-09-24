/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSnapshotRequestHandle : NSObject {
    FBSSceneSnapshotRequestAction * _action;
    BOOL  _canceled;
    FBSSceneSnapshotContext * _context;
    unsigned int  _type;
}

+ (id)handleForRequestType:(unsigned int)arg1 context:(id)arg2;

- (void)_clearAction;
- (void)cancelRequest;
- (void)dealloc;
- (id)initWithRequestType:(unsigned int)arg1 context:(id)arg2;
- (void)performRequestForScene:(id)arg1;

@end
