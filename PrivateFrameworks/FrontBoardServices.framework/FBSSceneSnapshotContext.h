/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSnapshotContext : NSObject <BSDescriptionProviding, BSXPCCoding> {
    BSSettings * _clientExtendedData;
    double  _expirationInterval;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSSet * _layersToExclude;
    NSString * _name;
    double  _scale;
    NSString * _sceneID;
    FBSSceneSettings * _settings;
}

@property (nonatomic, copy) BSSettings *clientExtendedData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expirationInterval;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSSet *layersToExclude;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double scale;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, copy) FBSSceneSettings *settings;
@property (readonly) Class superclass;

+ (id)contextWithSceneID:(id)arg1 settings:(id)arg2;

- (id)clientExtendedData;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (double)expirationInterval;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithSceneID:(id)arg1 settings:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)layersToExclude;
- (id)name;
- (float)scale;
- (id)sceneID;
- (void)setClientExtendedData:(id)arg1;
- (void)setExpirationInterval:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayersToExclude:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
