/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeRequestJob : PLDaemonJob {
    id /* block */  _completionHandler;
    NSSet * _deletes;
    NSSet * _inserts;
    NSSet * _updates;
    NSObject<OS_xpc_object> * _xpcDeletes;
    NSObject<OS_xpc_object> * _xpcInserts;
    NSObject<OS_xpc_object> * _xpcUpdates;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSSet *deletes;
@property (nonatomic, copy) NSSet *inserts;
@property (nonatomic, copy) NSSet *updates;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcDeletes;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcInserts;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcUpdates;

+ (void)_addChangeRequests:(id)arg1 toXPCDict:(id)arg2 withKey:(const char *)arg3;
+ (void)applyPhotoKitInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (int)daemonOperation;
- (id)deletes;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)inserts;
- (void)run;
- (void)runDaemonSide;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeletes:(id)arg1;
- (void)setInserts:(id)arg1;
- (void)setUpdates:(id)arg1;
- (void)setXpcDeletes:(id)arg1;
- (void)setXpcInserts:(id)arg1;
- (void)setXpcUpdates:(id)arg1;
- (id)updates;
- (id)xpcDeletes;
- (id)xpcInserts;
- (id)xpcUpdates;

@end
