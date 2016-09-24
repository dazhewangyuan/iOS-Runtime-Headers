/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMHandleRegistrar : NSObject {
    id  _internal;
}

@property (nonatomic) int nameStyle;

+ (id)sharedInstance;

- (id)_accountSiblingsForHandle:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)_addressBookChanged;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (BOOL)_buildingChatSiblings;
- (id)_chatSiblingsForHandle:(id)arg1;
- (void)_clearAccountSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (void)_clearChatSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2;
- (void)_dumpOutAllIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (id)allIMHandles;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)nameStyle;
- (void)registerIMHandle:(id)arg1;
- (void)setNameStyle:(int)arg1;
- (id)siblingsForIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;

@end
