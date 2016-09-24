/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttendeesDetailItem : EKEventDetailItem {
    NSArray * _attendees;
    NSMutableDictionary * _attendeesCells;
    EKEventDetailAttendeesCell * _cell;
    int  _status;
}

@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (id)attendees;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (unsigned int)numberOfSubitems;
- (void)reset;
- (void)setAttendees:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
