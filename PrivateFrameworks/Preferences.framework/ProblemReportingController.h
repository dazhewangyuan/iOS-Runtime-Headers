/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface ProblemReportingController : PSListController {
    PrefsUILinkLabel * _aboutDiagnosticsLinkLabel;
    NSArray * _appActivitySpecifiers;
    PSSpecifier * _diagnosticDataGroupSpecifier;
    PSSpecifier * _filesystemMetadataSnapshotSpecifier;
    NSArray * _healthDataSpecifiers;
    PSSpecifier * _spinnerSpecifier;
    NSArray * _wheelchairDataSpecifiers;
}

@property (readonly) NSArray *appActivitySpecifiers;
@property (readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property (readonly) NSArray *healthDataSpecifiers;
@property (readonly) PSSpecifier *spinnerSpecifier;
@property (readonly) NSArray *wheelchairDataSpecifiers;

+ (BOOL)isProblemReportingEnabled;

- (void).cxx_destruct;
- (id)appActivitySpecifiers;
- (void)checkDiagnosticsSessionAvailability;
- (void)dismissAboutSheet:(id)arg1;
- (id)filesystemMetadataSnapshotSpecifier;
- (id)healthDataSpecifiers;
- (void)launchDiagnosticsSession:(id)arg1;
- (void)setProblemReportingEnabled:(BOOL)arg1;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldEnableProblemReportingForCheckedSpecifier;
- (id)shouldShareAppActivityWithAppDevelopers;
- (id)shouldShareHealthDataForSpecifier:(id)arg1;
- (id)shouldShareWheelchairDataForSpecifier:(id)arg1;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutDiagnosticsSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2;
- (void)showAboutWheelchairDataSheet;
- (void)snapshot:(id)arg1;
- (id)specifiers;
- (id)spinnerSpecifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)wheelchairDataSpecifiers;

@end
