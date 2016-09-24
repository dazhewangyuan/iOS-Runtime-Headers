/* Generated by RuntimeBrowser.
 */

@protocol WKActionSheetAssistantDelegate <NSObject>

@required

- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(WKActionSheetAssistant *)arg1 decideActionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(int)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shareElementWithURL:(NSURL *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (BOOL)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (const struct InteractionInformationAtPosition { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_13_1_1; } x13; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_14_1_1; } x14; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_15_1_1; } x15; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_16_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_16_1_2; } x16; struct RefPtr<WebKit::ShareableBitmap> { struct ShareableBitmap {} *x_17_1_1; } x17; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_18_1_1; } x18; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_19_1_1; } x19; struct TextIndicatorData { struct FloatRect { struct FloatPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct FloatSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_20_1_1; struct FloatRect { struct FloatPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct FloatSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_20_1_2; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_20_1_3; double x_20_1_4; struct RefPtr<WebCore::Image> { struct Image {} *x_5_2_1; } x_20_1_5; struct RefPtr<WebCore::Image> { struct Image {} *x_6_2_1; } x_20_1_6; int x_20_1_7; unsigned char x_20_1_8; } x20; }*)positionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@optional

- (BOOL)actionSheetAssistant:(WKActionSheetAssistant *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 willStartInteractionWithElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistantDidStopInteraction:(WKActionSheetAssistant *)arg1;
- (NSDictionary *)dataDetectionContextForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (NSString *)selectedTextForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (void)updatePositionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@end
