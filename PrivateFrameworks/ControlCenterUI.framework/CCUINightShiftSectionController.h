/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUINightShiftSectionController : CCUIControlCenterSectionViewController {
    CBBlueLightClient * _blueLightReductionClient;
    struct { 
        BOOL active; 
        BOOL enabled; 
        BOOL sunSchedulePermitted; 
        int mode; 
        struct { 
            struct { 
                int hour; 
                int minute; 
            } fromTime; 
            struct { 
                int hour; 
                int minute; 
            } toTime; 
        } schedule; 
        unsigned long disableFlags; 
    }  _currentStatus;
}

+ (id)_defaultFontTight;
+ (id)_displayName;
+ (id)_identifier;
+ (Class)viewClass;

- (void).cxx_destruct;
- (id)_aggdKey;
- (id)_alertControllerForDisablingAccessibilityScreenFilter:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
- (void)_buttonTapped:(id)arg1;
- (id)_formatCardinalityForTransitionTime:(struct { int x1; int x2; })arg1 forLocale:(id)arg2;
- (void)_getBlueLightStatus:(id /* block */)arg1;
- (void)_setNightShiftEnabled:(BOOL)arg1;
- (id)_statusUpdateForBlueLightStatus:(struct { BOOL x1; BOOL x2; BOOL x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long x6; })arg1;
- (id)_statusUpdateForBlueLightStatus:(struct { BOOL x1; BOOL x2; BOOL x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long x6; })arg1 forLocale:(id)arg2;
- (id)_statusUpdateFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(struct { int x1; int x2; })arg2;
- (id)_statusUpdateFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(struct { int x1; int x2; })arg2 forLocale:(id)arg3;
- (id)_timeFormatterForLocale:(id)arg1;
- (id)_timeStringForBlueLightTransitionTime:(struct { int x1; int x2; })arg1;
- (id)_timeStringForBlueLightTransitionTime:(struct { int x1; int x2; })arg1 forLocale:(id)arg2;
- (BOOL)_toggleState;
- (void)_updateLayoutForSizeCategoryChange;
- (void)_updateState;
- (BOOL)_uses24HourTimeForLocale:(id)arg1;
- (BOOL)enabled;
- (id)sectionIdentifier;
- (id)statusUpdate;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
