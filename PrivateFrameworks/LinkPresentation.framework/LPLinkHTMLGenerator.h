/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkHTMLGenerator : NSObject {
    NSURL * _URL;
    BOOL  _allowsTapToLoad;
    BOOL  _applyCornerRadiusToLink;
    UIColor * _backgroundColor;
    LPCaptionBarPresentationProperties * _captionBar;
    LPCSSResolver * _cssResolver;
    <LPLinkHTMLGeneratorDelegate> * _delegate;
    BOOL  _everBuiltView;
    BOOL  _generateEmailCompatibleMarkup;
    LPImage * _image;
    BOOL  _includeClassNamesWhenUsingInlineStyles;
    BOOL  _isPreliminary;
    LPHTMLComponent * _linkComponent;
    BOOL  _mayReceiveAdditionalMetadata;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    LPLinkMetadata * _metadata;
    DOMDocument * _parentDocument;
    LPMetadataProvider * _pendingMetadataProvider;
    NSString * _quotedText;
    DOMElement * _rootElement;
    int  _style;
    LPTheme * _theme;
    BOOL  _useInlineStyles;
    BOOL  _useVariablesWhenUsingInlineStyles;
    BOOL  _usesComputedPresentationProperties;
    LPVideo * _video;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (setter=_setAllowsTapToLoad:, nonatomic) BOOL _allowsTapToLoad;
@property (nonatomic, readonly) BOOL _canTapToLoad;
@property (setter=_setIncludeClassNamesWhenUsingInlineStyles:, nonatomic) BOOL _includeClassNamesWhenUsingInlineStyles;
@property (setter=_setUseVariablesWhenUsingInlineStyles:, nonatomic) BOOL _useVariablesWhenUsingInlineStyles;
@property (nonatomic) BOOL applyCornerRadiusToLink;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) LPCSSResolver *cssResolver;
@property (nonatomic) <LPLinkHTMLGeneratorDelegate> *delegate;
@property (nonatomic, readonly) BOOL delegateRespondsToURLForResource;
@property (nonatomic, readonly, retain) DOMDocumentFragment *documentFragment;
@property (nonatomic) BOOL generateEmailCompatibleMarkup;
@property (nonatomic, readonly) BOOL hasPendingMetadataProvider;
@property (nonatomic, readonly) BOOL hasTallMedia;
@property (nonatomic, readonly) BOOL isPreliminary;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (nonatomic, readonly) DOMDocument *parentDocument;
@property (nonatomic, readonly) int style;
@property (nonatomic, readonly) LPTheme *theme;
@property (nonatomic, readonly) BOOL useFlexibleWidth;
@property (nonatomic) BOOL useInlineStyles;

+ (void)initialize;

- (void).cxx_destruct;
- (id)URL;
- (id)_URLForImage:(id)arg1;
- (id)_URLForResource:(id)arg1 withMIMEType:(id)arg2;
- (BOOL)_allowsTapToLoad;
- (BOOL)_canTapToLoad;
- (void)_computePresentationPropertiesFromMetadata;
- (id)_createCaptionBar;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaComponent;
- (id)_createMediaTopCaptionBar;
- (id)_createQuoteComponent;
- (void)_fetchMetadata;
- (BOOL)_includeClassNamesWhenUsingInlineStyles;
- (void)_rebuildView;
- (void)_setAllowsTapToLoad:(BOOL)arg1;
- (void)_setIncludeClassNamesWhenUsingInlineStyles:(BOOL)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2;
- (void)_setPresentationProperties:(id)arg1;
- (void)_setUseVariablesWhenUsingInlineStyles:(BOOL)arg1;
- (BOOL)_useVariablesWhenUsingInlineStyles;
- (BOOL)applyCornerRadiusToLink;
- (id)backgroundColor;
- (void)clearCurrentLayout;
- (id)cssResolver;
- (id)delegate;
- (BOOL)delegateRespondsToURLForResource;
- (id)documentFragment;
- (BOOL)generateEmailCompatibleMarkup;
- (BOOL)hasPendingMetadataProvider;
- (BOOL)hasTallMedia;
- (id)init;
- (id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3;
- (id)initWithPresentationProperties:(id)arg1 document:(id)arg2;
- (id)initWithURL:(id)arg1 document:(id)arg2;
- (void)injectCSSIfNeeded;
- (BOOL)isPreliminary;
- (id)metadata;
- (id)parentDocument;
- (void)setApplyCornerRadiusToLink:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGenerateEmailCompatibleMarkup:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUseInlineStyles:(BOOL)arg1;
- (int)style;
- (id)theme;
- (BOOL)useFlexibleWidth;
- (BOOL)useInlineStyles;

@end
