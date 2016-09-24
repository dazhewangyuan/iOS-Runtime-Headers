/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKComponent : NSObject <NSCoding, NSCopying> {
    NSString * _componentName;
    GKComponentSystem * _componentSystem;
    GKEntity * _entity;
    int  _usesPerComponentUpdateCount;
}

@property (nonatomic) NSString *componentName;
@property (nonatomic) GKComponentSystem *componentSystem;
@property (nonatomic, readonly) GKEntity *entity;
@property (nonatomic) BOOL usesPerComponentUpdate;

- (void).cxx_destruct;
- (id)componentName;
- (id)componentSystem;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didAddToEntity;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentSystem:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setUsesPerComponentUpdate:(BOOL)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (BOOL)usesPerComponentUpdate;
- (void)willRemoveFromEntity;

@end
