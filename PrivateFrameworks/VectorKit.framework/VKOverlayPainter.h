/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayPainter : NSObject {
    unsigned char  _applicationState;
    double  _brightness;
    VKOverlayContainerModel * _containerModel;
    <VKOverlay> * _overlay;
}

@property (nonatomic) unsigned char applicationState;
@property (nonatomic) VKOverlayContainerModel *containerModel;
@property (nonatomic, readonly) <VKOverlay> *overlay;

- (unsigned char)applicationState;
- (id)containerModel;
- (void)dealloc;
- (void)flush;
- (void)gglLayoutWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; double x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 overlayMaskCommandBuffer:(/* Warning: unhandled struct encoding: '{CommandBuffer=^^?*C^{RenderQueue}^{ClearItem}{vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}^^{RenderItem}{__compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}^{BufferLoadItem}{__compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}}}{deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >={__split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}{__compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}}}I{__compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >=L}}{deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> >={__split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}^^{PendingQuery}^^{PendingQuery}{__compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}}}I{__compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> >=L}}@}' */ struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; }*)arg2 traveledStrokeCommandBuffer:(/* Warning: unhandled struct encoding: '{CommandBuffer=^^?*C^{RenderQueue}^{ClearItem}{vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}^^{RenderItem}{__compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}^{BufferLoadItem}{__compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}}}{deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >={__split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}{__compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}}}I{__compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >=L}}{deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> >={__split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}^^{PendingQuery}^^{PendingQuery}{__compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}}}I{__compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> >=L}}@}' */ struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; }*)arg3 strokeCommandBuffer:(/* Warning: unhandled struct encoding: '{CommandBuffer=^^?*C^{RenderQueue}^{ClearItem}{vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}^^{RenderItem}{__compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}^{BufferLoadItem}{__compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}}}{deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >={__split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}{__compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}}}I{__compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >=L}}{deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> >={__split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}^^{PendingQuery}^^{PendingQuery}{__compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}}}I{__compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> >=L}}@}' */ struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; }*)arg4 traveledFillCommandBuffer:(/* Warning: unhandled struct encoding: '{CommandBuffer=^^?*C^{RenderQueue}^{ClearItem}{vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}^^{RenderItem}{__compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}^{BufferLoadItem}{__compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}}}{deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >={__split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}{__compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}}}I{__compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >=L}}{deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> >={__split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}^^{PendingQuery}^^{PendingQuery}{__compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}}}I{__compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> >=L}}@}' */ struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; }*)arg5 fillCommandBuffer:(/* Warning: unhandled struct encoding: '{CommandBuffer=^^?*C^{RenderQueue}^{ClearItem}{vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}^^{RenderItem}{__compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> >=^^{RenderItem}}}{vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}^{Texture2DLoadItem}{__compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> >=^{Texture2DLoadItem}}}{vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}^{BufferLoadItem}{__compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> >=^{BufferLoadItem}}}{deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >={__split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}^^{fast_shared_ptr<ggl::QueryItem>}{__compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> >=^^{fast_shared_ptr<ggl::QueryItem>}}}I{__compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > >=L}}{deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> >={__split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}^^{PendingQuery}^^{PendingQuery}{__compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> >=^^{PendingQuery}}}I{__compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> >=L}}@}' */ struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; }*)arg6 tiles:(id)arg7;
- (id)initWithOverlay:(id)arg1;
- (void)layoutWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; double x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (id)overlay;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setContainerModel:(id)arg1;
- (void)stylesheetDidChange;

@end
