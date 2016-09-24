/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate> {
    EKCalendarItemAlarmEditItem * _alarmEditItem;
    EKEventAttendeesEditItem * _attendeesEditItem;
    EKEventAutocompleteResultsEditItem * _autocompleteEditItem;
    EKUIAutocompletePETTracker * _autocompletePETTracker;
    BOOL  _autocompleteResultsVisible;
    NSString * _autocompleteSearchString;
    NSTimer * _autocompleteTimer;
    UIColor * _backgroundColor;
    EKCalendarItemCalendarEditItem * _calendarEditItem;
    EKEventDateEditItem * _dateItem;
    BOOL  _focusTitleOnAppearance;
    BOOL  _isTransitioning;
    EKCalendarItemLocationInlineEditItem * _locationInlineEditItem;
    <EKUIAutocompletePendingSearchProtocol> * _pendingSearch;
    EKUIAutocompleteSearchResult * _selectedAutocompleteResult;
    unsigned int  _selectedAutocompleteResultIndex;
    BOOL  _shouldAutocomplete;
    BOOL  _showAttachments;
    EKCalendarItemTitleInlineEditItem * _titleInlineEditItem;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL showAttachments;
@property (readonly) Class superclass;

+ (void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(BOOL)arg4;
+ (id)_copyAlarmsForAutocompleteFromResult:(id)arg1;
+ (id)_copyAttendeesForAutocompleteFromResult:(id)arg1;
+ (void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2;
+ (id)_now;

- (void).cxx_destruct;
- (void)_beginAutocompleteSearch:(id)arg1;
- (id)_calendarItemIndexSet;
- (BOOL)_canDetachSingleOccurrence;
- (void)_cancelPendingAutocompleteAndCleanup;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (void)_hideAndCancelAutocompleteResults;
- (id)_nameForDeleteButton;
- (id)_orderedEditItems;
- (void)_revertEvent;
- (void)_scheduleAutocompleteSearchWithString:(id)arg1;
- (void)_scheduleAutocompleteTimerIfNeeded;
- (void)_setAutocompleteResultsVisible:(BOOL)arg1;
- (void)_setEventTitleForTestingAutocomplete:(id)arg1;
- (void)_showAutocompleteResults;
- (void)_updateTitleEditItemSeparatorVisibility;
- (id)_viewForSheet;
- (void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(id)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(id)arg1;
- (id)backgroundColor;
- (id)defaultAlertTitle;
- (id)defaultTitleForCalendarItem;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (unsigned int)entityType;
- (id)event;
- (void)focusAndSelectTitle;
- (void)loadView;
- (id)notificationNamesForLocaleChange;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredTitle;
- (void)prepareEditItems;
- (void)refreshInvitees;
- (void)refreshLocation;
- (void)refreshStartAndEndDates;
- (BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setShowAttachments:(BOOL)arg1;
- (void)setupDeleteButton;
- (BOOL)shouldAutorotate;
- (BOOL)showAttachments;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
