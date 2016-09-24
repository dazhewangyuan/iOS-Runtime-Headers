/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolygonTile : VKVectorTile {
    double  _alpha;
    VKAnimation * _animation;
    VKAnimation * _animationForPitch;
    NSMutableArray * _coastlineGroups;
    double  _maxLayeringHeight;
    double  _minLayeringHeight;
    NSMutableArray * _polygonGroups;
    double  _scale;
    struct unordered_map<unsigned int, md::PolygonRouteAttributes, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, md::PolygonRouteAttributes> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::hash<unsigned int>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::equal_to<unsigned int>, true> > { 
                double __first_; 
            } __p3_; 
        } __table_; 
    }  _transitNodesRouteAttributesMap;
    struct unordered_map<unsigned int, VKPolygonGroup *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, VKPolygonGroup *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, std::__1::hash<unsigned int>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, VKPolygonGroup *>, std::__1::equal_to<unsigned int>, true> > { 
                double __first_; 
            } __p3_; 
        } __table_; 
    }  _transitPolygonGroupMap;
}

@property (nonatomic) double alpha;
@property (nonatomic, retain) VKAnimation *animation;
@property (nonatomic, retain) VKAnimation *animationForPitch;
@property (nonatomic, readonly) NSArray *coastlineGroups;
@property (nonatomic, readonly) double maxLayeringHeight;
@property (nonatomic, readonly) double minLayeringHeight;
@property (nonatomic, readonly) NSArray *polygonGroups;
@property (nonatomic) double scale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)alpha;
- (id)animation;
- (id)animationForPitch;
- (void)buildCoastlinesWithStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)buildMeshesWithDevice:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg1 triangulator:(id)arg2 prepareExtrusion:(BOOL)arg3;
- (id)coastlineGroups;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 prepareExtrusion:(BOOL)arg3 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(float)arg6 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg7;
- (float)maxLayeringHeight;
- (float)minLayeringHeight;
- (id)polygonGroups;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setAnimation:(id)arg1;
- (void)setAnimationForPitch:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setTransitNodesRouteAttributes:(const struct unordered_map<unsigned int, md::PolygonRouteAttributes, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, md::PolygonRouteAttributes> > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, md::PolygonRouteAttributes>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;

@end
