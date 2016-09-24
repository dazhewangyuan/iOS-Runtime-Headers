/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch> {
    double  _attributeMatchPercent;
    double  _distance;
    TSDMagicMoveMatchObject * _incomingObject;
    int  _matchCost;
    int  _matchType;
    NSString * _name;
    TSDMagicMoveMatchObject * _outgoingObject;
    TSDTextureContext * _textureContext;
    double  _zOrderDistance;
}

@property (nonatomic) double attributeMatchPercent;
@property (nonatomic) double distance;
@property (nonatomic, readonly) id incomingMatchObject;
@property (nonatomic, readonly) TSDMagicMoveMatchObject *incomingObject;
@property (nonatomic, readonly) BOOL isTextMatch;
@property (nonatomic, readonly) int matchCost;
@property (nonatomic) int matchType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) id outgoingMatchObject;
@property (nonatomic, readonly) TSDMagicMoveMatchObject *outgoingObject;
@property (nonatomic, retain) TSDTextureContext *textureContext;
@property (nonatomic) double zOrderDistance;

+ (id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(int)arg3 attributeMatchPercent:(float)arg4 textureContext:(id)arg5;

- (float)attributeMatchPercent;
- (int)compareToMatch:(id)arg1;
- (BOOL)conflictsWithMatch:(id)arg1;
- (void)dealloc;
- (id)description;
- (float)distance;
- (id)incomingMatchObject;
- (id)incomingObject;
- (BOOL)isTextMatch;
- (int)matchCost;
- (int)matchType;
- (id)name;
- (id)outgoingMatchObject;
- (id)outgoingObject;
- (void)p_updateMagicMoveCost;
- (void)setAttributeMatchPercent:(float)arg1;
- (void)setDistance:(float)arg1;
- (void)setMatchType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setTextureContext:(id)arg1;
- (void)setZOrderDistance:(float)arg1;
- (id)textureContext;
- (float)zOrderDistance;

@end
