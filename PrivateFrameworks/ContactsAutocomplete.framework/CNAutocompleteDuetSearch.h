/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteDuetSearch : NSObject <CNAutocompleteSearch> {
    CNContactStore * _contactStore;
    _CDPeopleSuggester * _peopleSuggester;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) _CDPeopleSuggester *peopleSuggester;
@property (readonly) Class superclass;

+ (void)configureContext:(id)arg1 withFetchRequest:(id)arg2;
+ (void)configureSettings:(id)arg1 withFetchRequest:(id)arg2;
+ (id)constrainMechanismsForSearchType:(unsigned int)arg1;
+ (unsigned int)predictedResultLimit;

- (void).cxx_destruct;
- (int)addressTypeForCDContact:(id)arg1;
- (id)autocompleteResultsFromSuggesterResults:(id)arg1 factory:(id)arg2;
- (id)contactStore;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithPeopleSuggester:(id)arg1;
- (id)initWithPeopleSuggester:(id)arg1 contactStore:(id)arg2;
- (id)peopleSuggester;
- (id)resultValueForCDContact:(id)arg1;
- (id)suggesterContextForFetchRequest:(id)arg1;
- (id)suggesterSettingsForFetchRequest:(id)arg1;

@end
