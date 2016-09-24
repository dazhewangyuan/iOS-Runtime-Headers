/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVFeature : PBCodable <NSCopying> {
    unsigned int  _businessID;
    unsigned int  _centerlineCount;
    unsigned int  _centerlineStart;
    GEOVCharacteristics * _characteristics;
    double  _endLaneWidth;
    double  _endOffset;
    double  _endRoadOffset;
    unsigned int  _entryPointMask;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _extrusionHeights;
    int  _formOfWay;
    struct { 
        unsigned int businessID : 1; 
        unsigned int uID : 1; 
        unsigned int centerlineCount : 1; 
        unsigned int centerlineStart : 1; 
        unsigned int endLaneWidth : 1; 
        unsigned int endOffset : 1; 
        unsigned int endRoadOffset : 1; 
        unsigned int entryPointMask : 1; 
        unsigned int formOfWay : 1; 
        unsigned int minzoomRank : 1; 
        unsigned int placeType : 1; 
        unsigned int roadClass : 1; 
        unsigned int sectionCount : 1; 
        unsigned int sectionStart : 1; 
        unsigned int speedLimit : 1; 
        unsigned int startLaneWidth : 1; 
        unsigned int startOffset : 1; 
        unsigned int startRoadOffset : 1; 
        unsigned int styleGroup : 1; 
        unsigned int travelDirection : 1; 
        unsigned int type : 1; 
        unsigned int polyIsConvex : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _labelOffsets;
    double  _minzoomRank;
    NSData * _oBSOLETECenterlines;
    NSData * _oBSOLETEShieldLabelPositions;
    NSData * _oBSOLETEVertexLabelPositions;
    int  _placeType;
    NSData * _pointLabelPosition;
    BOOL  _polyIsConvex;
    int  _roadClass;
    int  _sectionCount;
    int  _sectionStart;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _shieldLabelOffsets;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _shieldLabelTypes;
    int  _speedLimit;
    double  _startLaneWidth;
    double  _startOffset;
    double  _startRoadOffset;
    NSMutableArray * _styleAttributes;
    unsigned int  _styleGroup;
    int  _travelDirection;
    int  _type;
    int  _uID;
}

@property (nonatomic) unsigned int businessID;
@property (nonatomic) unsigned int centerlineCount;
@property (nonatomic) unsigned int centerlineStart;
@property (nonatomic, retain) GEOVCharacteristics *characteristics;
@property (nonatomic) double endLaneWidth;
@property (nonatomic) double endOffset;
@property (nonatomic) double endRoadOffset;
@property (nonatomic) unsigned int entryPointMask;
@property (nonatomic, readonly) int*extrusionHeights;
@property (nonatomic, readonly) unsigned int extrusionHeightsCount;
@property (nonatomic) int formOfWay;
@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) BOOL hasCenterlineCount;
@property (nonatomic) BOOL hasCenterlineStart;
@property (nonatomic, readonly) BOOL hasCharacteristics;
@property (nonatomic) BOOL hasEndLaneWidth;
@property (nonatomic) BOOL hasEndOffset;
@property (nonatomic) BOOL hasEndRoadOffset;
@property (nonatomic) BOOL hasEntryPointMask;
@property (nonatomic) BOOL hasFormOfWay;
@property (nonatomic) BOOL hasMinzoomRank;
@property (nonatomic, readonly) BOOL hasOBSOLETECenterlines;
@property (nonatomic, readonly) BOOL hasOBSOLETEShieldLabelPositions;
@property (nonatomic, readonly) BOOL hasOBSOLETEVertexLabelPositions;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic, readonly) BOOL hasPointLabelPosition;
@property (nonatomic) BOOL hasPolyIsConvex;
@property (nonatomic) BOOL hasRoadClass;
@property (nonatomic) BOOL hasSectionCount;
@property (nonatomic) BOOL hasSectionStart;
@property (nonatomic) BOOL hasSpeedLimit;
@property (nonatomic) BOOL hasStartLaneWidth;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) BOOL hasStartRoadOffset;
@property (nonatomic) BOOL hasStyleGroup;
@property (nonatomic) BOOL hasTravelDirection;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUID;
@property (nonatomic, readonly) int*labelOffsets;
@property (nonatomic, readonly) unsigned int labelOffsetsCount;
@property (nonatomic) double minzoomRank;
@property (nonatomic, retain) NSData *oBSOLETECenterlines;
@property (nonatomic, retain) NSData *oBSOLETEShieldLabelPositions;
@property (nonatomic, retain) NSData *oBSOLETEVertexLabelPositions;
@property (nonatomic) int placeType;
@property (nonatomic, retain) NSData *pointLabelPosition;
@property (nonatomic) BOOL polyIsConvex;
@property (nonatomic) int roadClass;
@property (nonatomic) int sectionCount;
@property (nonatomic) int sectionStart;
@property (nonatomic, readonly) int*shieldLabelOffsets;
@property (nonatomic, readonly) unsigned int shieldLabelOffsetsCount;
@property (nonatomic, readonly) int*shieldLabelTypes;
@property (nonatomic, readonly) unsigned int shieldLabelTypesCount;
@property (nonatomic) int speedLimit;
@property (nonatomic) double startLaneWidth;
@property (nonatomic) double startOffset;
@property (nonatomic) double startRoadOffset;
@property (nonatomic, retain) NSMutableArray *styleAttributes;
@property (nonatomic) unsigned int styleGroup;
@property (nonatomic) int travelDirection;
@property (nonatomic) int type;
@property (nonatomic) int uID;

- (void)addExtrusionHeight:(int)arg1;
- (void)addLabelOffset:(int)arg1;
- (void)addShieldLabelOffset:(int)arg1;
- (void)addShieldLabelType:(int)arg1;
- (void)addStyleAttributes:(id)arg1;
- (unsigned int)businessID;
- (unsigned int)centerlineCount;
- (unsigned int)centerlineStart;
- (id)characteristics;
- (void)clearExtrusionHeights;
- (void)clearLabelOffsets;
- (void)clearShieldLabelOffsets;
- (void)clearShieldLabelTypes;
- (void)clearStyleAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float)endLaneWidth;
- (float)endOffset;
- (float)endRoadOffset;
- (unsigned int)entryPointMask;
- (int)extrusionHeightAtIndex:(unsigned int)arg1;
- (int*)extrusionHeights;
- (unsigned int)extrusionHeightsCount;
- (int)formOfWay;
- (BOOL)hasBusinessID;
- (BOOL)hasCenterlineCount;
- (BOOL)hasCenterlineStart;
- (BOOL)hasCharacteristics;
- (BOOL)hasEndLaneWidth;
- (BOOL)hasEndOffset;
- (BOOL)hasEndRoadOffset;
- (BOOL)hasEntryPointMask;
- (BOOL)hasFormOfWay;
- (BOOL)hasMinzoomRank;
- (BOOL)hasOBSOLETECenterlines;
- (BOOL)hasOBSOLETEShieldLabelPositions;
- (BOOL)hasOBSOLETEVertexLabelPositions;
- (BOOL)hasPlaceType;
- (BOOL)hasPointLabelPosition;
- (BOOL)hasPolyIsConvex;
- (BOOL)hasRoadClass;
- (BOOL)hasSectionCount;
- (BOOL)hasSectionStart;
- (BOOL)hasSpeedLimit;
- (BOOL)hasStartLaneWidth;
- (BOOL)hasStartOffset;
- (BOOL)hasStartRoadOffset;
- (BOOL)hasStyleGroup;
- (BOOL)hasTravelDirection;
- (BOOL)hasType;
- (BOOL)hasUID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)labelOffsetAtIndex:(unsigned int)arg1;
- (int*)labelOffsets;
- (unsigned int)labelOffsetsCount;
- (float)minzoomRank;
- (id)oBSOLETECenterlines;
- (id)oBSOLETEShieldLabelPositions;
- (id)oBSOLETEVertexLabelPositions;
- (int)placeType;
- (id)pointLabelPosition;
- (BOOL)polyIsConvex;
- (BOOL)readFrom:(id)arg1;
- (int)roadClass;
- (int)sectionCount;
- (int)sectionStart;
- (void)setBusinessID:(unsigned int)arg1;
- (void)setCenterlineCount:(unsigned int)arg1;
- (void)setCenterlineStart:(unsigned int)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setEndLaneWidth:(float)arg1;
- (void)setEndOffset:(float)arg1;
- (void)setEndRoadOffset:(float)arg1;
- (void)setEntryPointMask:(unsigned int)arg1;
- (void)setExtrusionHeights:(int*)arg1 count:(unsigned int)arg2;
- (void)setFormOfWay:(int)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasCenterlineCount:(BOOL)arg1;
- (void)setHasCenterlineStart:(BOOL)arg1;
- (void)setHasEndLaneWidth:(BOOL)arg1;
- (void)setHasEndOffset:(BOOL)arg1;
- (void)setHasEndRoadOffset:(BOOL)arg1;
- (void)setHasEntryPointMask:(BOOL)arg1;
- (void)setHasFormOfWay:(BOOL)arg1;
- (void)setHasMinzoomRank:(BOOL)arg1;
- (void)setHasPlaceType:(BOOL)arg1;
- (void)setHasPolyIsConvex:(BOOL)arg1;
- (void)setHasRoadClass:(BOOL)arg1;
- (void)setHasSectionCount:(BOOL)arg1;
- (void)setHasSectionStart:(BOOL)arg1;
- (void)setHasSpeedLimit:(BOOL)arg1;
- (void)setHasStartLaneWidth:(BOOL)arg1;
- (void)setHasStartOffset:(BOOL)arg1;
- (void)setHasStartRoadOffset:(BOOL)arg1;
- (void)setHasStyleGroup:(BOOL)arg1;
- (void)setHasTravelDirection:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHasUID:(BOOL)arg1;
- (void)setLabelOffsets:(int*)arg1 count:(unsigned int)arg2;
- (void)setMinzoomRank:(float)arg1;
- (void)setOBSOLETECenterlines:(id)arg1;
- (void)setOBSOLETEShieldLabelPositions:(id)arg1;
- (void)setOBSOLETEVertexLabelPositions:(id)arg1;
- (void)setPlaceType:(int)arg1;
- (void)setPointLabelPosition:(id)arg1;
- (void)setPolyIsConvex:(BOOL)arg1;
- (void)setRoadClass:(int)arg1;
- (void)setSectionCount:(int)arg1;
- (void)setSectionStart:(int)arg1;
- (void)setShieldLabelOffsets:(int*)arg1 count:(unsigned int)arg2;
- (void)setShieldLabelTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setSpeedLimit:(int)arg1;
- (void)setStartLaneWidth:(float)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setStartRoadOffset:(float)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setStyleGroup:(unsigned int)arg1;
- (void)setTravelDirection:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUID:(int)arg1;
- (int)shieldLabelOffsetAtIndex:(unsigned int)arg1;
- (int*)shieldLabelOffsets;
- (unsigned int)shieldLabelOffsetsCount;
- (int)shieldLabelTypeAtIndex:(unsigned int)arg1;
- (int*)shieldLabelTypes;
- (unsigned int)shieldLabelTypesCount;
- (int)speedLimit;
- (float)startLaneWidth;
- (float)startOffset;
- (float)startRoadOffset;
- (id)styleAttributes;
- (id)styleAttributesAtIndex:(unsigned int)arg1;
- (unsigned int)styleAttributesCount;
- (unsigned int)styleGroup;
- (int)travelDirection;
- (int)type;
- (int)uID;
- (void)writeTo:(id)arg1;

@end
