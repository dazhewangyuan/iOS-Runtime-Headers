/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonChatItem : CKChatItem

@property (nonatomic, readonly) unsigned int balloonCorners;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (nonatomic, readonly) BOOL balloonShape;
@property (nonatomic, readonly) Class balloonViewClass;
@property (nonatomic, readonly) BOOL failed;
@property (getter=isFromMe, nonatomic, readonly) BOOL fromMe;
@property (nonatomic, readonly) Class impactBalloonViewClass;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) BOOL tailShape;
@property (nonatomic, readonly) NSDate *time;

- (unsigned int)balloonCorners;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; })balloonDescriptor;
- (BOOL)balloonOrientation;
- (BOOL)balloonShape;
- (Class)balloonViewClass;
- (Class)cellClass;
- (id)cellIdentifier;
- (void)configureBalloonView:(id)arg1;
- (id)contact;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)description;
- (BOOL)displayDuringSend;
- (BOOL)failed;
- (Class)impactBalloonViewClass;
- (BOOL)isEditable;
- (BOOL)isFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (BOOL)needsAdjustedTextAlignmentInsets;
- (BOOL)needsPreservedAspectRatio;
- (id)sender;
- (BOOL)tailShape;
- (id)time;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptTextAlignmentInsets;
- (BOOL)wantsDrawerLayout;

@end
