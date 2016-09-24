/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityTracklistItemView : MusicEntityAbstractLockupView <MPUTextDrawingCacheInvalidationObserver, MusicEntityContentDescriptorViewConfiguring> {
    BOOL  _alwaysApplyLeadingTextColumnWidth;
    UIButton * _contextualActionsButton;
    <MusicEntityTracklistItemViewDelegate> * _delegate;
    struct { 
        unsigned int didSelectContextualActionsButton : 1; 
        unsigned int didSelectPlayButton : 1; 
        unsigned int shouldLayoutAsEditing : 1; 
    }  _delegateRespondsToSelector;
    MusicDownloadProgressButton * _downloadProgressButton;
    UIImageView * _explicitBadgeImageView;
    MPUNowPlayingIndicatorView * _indicatorView;
    double  _leadingTextColumnWidth;
    UIImageView * _mediaTypeImageView;
    MusicPopularityIndicatorView * _popularityIndicatorView;
    NSMapTable * _textDescriptorToTextDrawingView;
    NSMutableArray * _textDrawingViewReusePool;
    UIImageView * _trailingAccessoryImageView;
    double  _trailingTextColumnWidth;
}

@property (nonatomic) BOOL alwaysApplyLeadingTextColumnWidth;
@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (nonatomic, readonly) UIButton *contextualActionsButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityTracklistItemViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned int hash;
@property (nonatomic) double leadingTextColumnWidth;
@property (readonly) Class superclass;
@property (nonatomic) double trailingTextColumnWidth;

+ (float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (id)_allTextDescriptorsInTracklistItemContentDescriptor:(id)arg1;
- (id)_backgroundColorForTracklistItemSubviews;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)_contentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_contextualActionsButtonTapped:(id)arg1;
- (void)_entityDisabledDidChange;
- (void)_recycleTextDrawingViewForTextDescriptor:(id)arg1;
- (void)_recycleTextViewsForTextDescriptors:(id)arg1;
- (BOOL)_shouldEnableArtworkViewUserInteraction;
- (BOOL)_shouldLayoutAsEditing;
- (BOOL)_shouldShowPlayButton;
- (id)_viewForTextDescriptor:(id)arg1;
- (BOOL)alwaysApplyLeadingTextColumnWidth;
- (id)contentDescriptor;
- (id)contextualActionsButton;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)leadingTextColumnWidth;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setAlwaysApplyLeadingTextColumnWidth:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeadingTextColumnWidth:(float)arg1;
- (void)setTrailingTextColumnWidth:(float)arg1;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (float)trailingTextColumnWidth;

@end
