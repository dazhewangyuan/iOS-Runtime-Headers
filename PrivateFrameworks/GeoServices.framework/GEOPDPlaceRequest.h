/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEOPDClientMetadata * _clientMetadata;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    struct { 
        unsigned int requestType : 1; 
        unsigned int needLatency : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    }  _has;
    BOOL  _needLatency;
    GEOPDPlaceRequestParameters * _placeRequestParameters;
    int  _requestType;
    NSMutableArray * _requestedComponents;
    NSMutableArray * _spokenLanguages;
    BOOL  _suppressResultsRequiringAttribution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, readonly) BOOL hasAnalyticMetadata;
@property (nonatomic, readonly) BOOL hasClientMetadata;
@property (nonatomic, readonly) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasNeedLatency;
@property (nonatomic, readonly) BOOL hasPlaceRequestParameters;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic) BOOL needLatency;
@property (nonatomic, retain) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic) int requestType;
@property (nonatomic, retain) NSMutableArray *requestedComponents;
@property (nonatomic, retain) NSMutableArray *spokenLanguages;
@property (nonatomic) BOOL suppressResultsRequiringAttribution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;

- (int)StringAsRequestType:(id)arg1;
- (id)_initWithTraits:(id)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (id)analyticMetadata;
- (void)clearDisplayLanguages;
- (void)clearRequestedComponents;
- (void)clearSpokenLanguages;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned int)arg1;
- (id)displayLanguages;
- (unsigned int)displayLanguagesCount;
- (id)displayRegion;
- (int)geoUserPreferredTransportType;
- (BOOL)hasAnalyticMetadata;
- (BOOL)hasClientMetadata;
- (BOOL)hasDisplayRegion;
- (BOOL)hasNeedLatency;
- (BOOL)hasPlaceRequestParameters;
- (BOOL)hasRequestType;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (unsigned int)hash;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;
- (id)initForCategoryListWithTraits:(id)arg1;
- (id)initForNearestTransitStationWithLine:(unsigned int)arg1 coordinate:(struct { double x1; double x2; })arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithComponents:(id)arg1 muid:(unsigned int)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(BOOL)arg2 includeETA:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5;
- (id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 includeETA:(BOOL)arg7 traits:(id)arg8;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned int)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeETA:(BOOL)arg3 includeEntryPoints:(BOOL)arg4;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (BOOL)isCanonicalLocationSearchRequest;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForwardGeocoderRequest;
- (BOOL)isMerchantRequest;
- (void)mergeFrom:(id)arg1;
- (BOOL)needLatency;
- (id)placeRequestParameters;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedComponentAtIndex:(unsigned int)arg1;
- (id)requestedComponents;
- (unsigned int)requestedComponentsCount;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setHasNeedLatency:(BOOL)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setNeedLatency:(BOOL)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setRequestedComponents:(id)arg1;
- (void)setSpokenLanguages:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (BOOL)shouldConsiderCaching;
- (id)spokenLanguageAtIndex:(unsigned int)arg1;
- (id)spokenLanguages;
- (unsigned int)spokenLanguagesCount;
- (BOOL)suppressResultsRequiringAttribution;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
