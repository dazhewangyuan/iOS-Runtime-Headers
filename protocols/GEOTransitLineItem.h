/* Generated by RuntimeBrowser.
 */

@protocol GEOTransitLineItem <GEOTransitLine>

@required

- (<GEOTransitAttribution> *)attribution;
- (<GEOEncyclopedicInfo> *)encyclopedicInfo;
- (BOOL)hasEncyclopedicInfo;
- (BOOL)hasIncidentComponent;
- (NSArray *)incidents;
- (BOOL)isIncidentsTTLExpired;
- (NSArray *)labelItems;
- (GEOMapRegion *)mapRegion;

@end
