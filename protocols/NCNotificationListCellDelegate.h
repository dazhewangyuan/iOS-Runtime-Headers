/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationListCellDelegate <NSObject>

@required

- (UIView *)customBackgroundViewForNotificationListCell:(NCNotificationListCell *)arg1;
- (void)notificationListCell:(NCNotificationListCell *)arg1 requestsClearingNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationListCell:(void *)arg1 requestsPerformAction:(void *)arg2 forNotificationRequest:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NCNotificationListCell *, NCNotificationAction *, NCNotificationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)notificationListCell:(NCNotificationListCell *)arg1 requestsPresentingLongLookForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationListCellDidSignificantUserInteraction:(NCNotificationListCell *)arg1;
- (void)notificationListCellHideCellActions:(NCNotificationListCell *)arg1;
- (void)notificationListCellRevealCellActions:(NCNotificationListCell *)arg1;
- (BOOL)notificationListCellShouldShowActionsForNotificationRequest:(NCNotificationRequest *)arg1;
- (void)willTearDownNotificationListCell:(NCNotificationListCell *)arg1;

@end
