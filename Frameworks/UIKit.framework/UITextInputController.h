/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputController : NSObject <UIResponderStandardEditActions, UITextInput, UITextInputAdditions, UITextInput_Internal> {
    BOOL  _allowsEditingTextAttributes;
    BOOL  _continuousSpellCheckingEnabled;
    _UITextServiceSession * _definitionSession;
    <UITextInputControllerDelegate> * _delegate;
    _UIDictationAttachment * _dictationPlaceholder;
    NSDictionary * _emptyStringAttributes;
    NSArray * _extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> * _firstTextView;
    <UITextInputDelegate> * _inputDelegate;
    NSLayoutManager * _layoutManager;
    _UITextServiceSession * _learnSession;
    _UITextServiceSession * _lookupSession;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _markedTextRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _markedTextSelection;
    NSHashTable * _observedScrollViews;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _previousSelectedRange;
    _UITextKitTextRange * _selectedTextRange;
    _UITextServiceSession * _shareSession;
    UITextChecker * _textChecker;
    UITextInputTraits * _textInputTraits;
    struct { 
        unsigned int delegateRespondsToTextInputShouldBeginEditing : 1; 
        unsigned int delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText : 1; 
        unsigned int delegateRespondsToTextInputDidChange : 1; 
        unsigned int delegateRespondsToTextInputDidChangeSelection : 1; 
        unsigned int delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange : 1; 
        unsigned int delegateRespondsToTextInputEditorDidChangeSelection : 1; 
        unsigned int delegateRespondsToTextInputPrepareAttributedTextForInsertion : 1; 
        unsigned int textOrSelectionChangeOriginatesWithKeyboard : 1; 
        unsigned int showingTextStyleOptions : 1; 
        unsigned int undoRedoInProgress : 1; 
        unsigned int textOrSelectionChangeOriginatesWithMarkedText : 1; 
        unsigned int nextSelectionChangeMustUpdate : 1; 
        unsigned int hasTextAlternatives : 1; 
        unsigned int suppressDelegateChangeNotifications : 1; 
    }  _tiFlags;
    _UITextInputControllerTokenizer * _tokenizer;
    NSDictionary * _typingAttributes;
    _UITextUndoManager * _undoManager;
    _UITextUndoOperationTyping * _undoOperationForCoalescing;
    NSSet * _whitelistedTypingAttributes;
}

@property (getter=_proxyTextInput, nonatomic, readonly) UIResponder<UITextInput> *__content;
@property (nonatomic, readonly) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (getter=_whitelistedTypingAttributes, setter=_setWhitelistedTypingAttributes:, nonatomic, copy) NSSet *_whitelistedTypingAttributes;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (getter=_caretRect, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRect;
@property (nonatomic) BOOL continuousSpellCheckingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextInputControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic, readonly) BOOL editable;
@property (getter=isEditing, nonatomic, readonly) BOOL editing;
@property (getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:, nonatomic, copy) NSDictionary *emptyStringAttributes;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, readonly) BOOL hasText;
@property (readonly) unsigned int hash;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } previousSelectedRange;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) int selectionAffinity;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;

+ (BOOL)_pasteboardHasStrings;

- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_addToTypingAttributes:(id)arg1 value:(id)arg2;
- (id)_attributesForReplacementInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_canHandleResponderAction:(SEL)arg1;
- (void)_cancelDictationIfNecessaryForChangeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRectForOffset:(unsigned int)arg1;
- (unsigned long)_characterAfterCaretSelection;
- (unsigned long)_characterBeforeCaretSelection;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned long)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (id)_characterPositionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_clearSelectionUI;
- (void)_commonInitWithLayoutManager:(id)arg1;
- (void)_coordinateSelectionChange:(id /* block */)arg1;
- (void)_copySelectionToClipboard;
- (void)_define:(id)arg1;
- (BOOL)_delegateShouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_detachFromLayoutManager;
- (id)_emptyStringAttributes;
- (void)_ensureSelectionValid;
- (void)_ensureSelectionVisible;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_filteredAttributedTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_firstTextView;
- (id)_fixupTypingAttributeForAttributes:(id)arg1;
- (id)_fontForCaretSelection;
- (void)_forceUnmarkTextDueToEditing;
- (id)_fullRange;
- (id)_fullText;
- (BOOL)_hasDictationPlaceholder;
- (BOOL)_hasMarkedText;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (void)_insertAttributedText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 resultLength:(unsigned int*)arg4;
- (void)_insertText:(id)arg1 fromKeyboard:(BOOL)arg2;
- (void)_invalidateEmptyStringAttributes;
- (void)_invalidateTypingAttributes;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShareViewController;
- (BOOL)_isDisplayingShortcutViewController;
- (BOOL)_isEmptySelection;
- (BOOL)_isSecureTextEntry;
- (id)_keyInput;
- (id)_layoutManager;
- (BOOL)_mightHaveSelection;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_newPhraseBoundaryGestureRecognizer;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_nsrangeForTextRange:(id)arg1;
- (int)_opposingDirectionFromDirection:(int)arg1;
- (id)_parentScrollView;
- (void)_performWhileSuppressingDelegateNotifications:(id /* block */)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionAtStartOfWords:(unsigned int)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeForBackwardsDelete;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(int)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(int)arg1 andPosition:(id)arg2;
- (id)_rectsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_removeDefinitionController;
- (void)_removeShareController;
- (void)_removeShortcutController;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_resetShowingTextStyle:(id)arg1;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (id)_selectedAttributedText;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectedNSRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectedRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectedRangeWithinMarkedText;
- (id)_selectedText;
- (int)_selectionAffinity;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_selectionDidScroll:(id)arg1;
- (void)_selectionGeometryChanged;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (void)_sendDelegateWillChangeNotificationsForText:(BOOL)arg1 selection:(BOOL)arg2;
- (id)_senderForDelegateNotifications;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setEmptyStringAttributes:(id)arg1;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_setInternalGestureRecognizers;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setSelectedRangeToEndIfNecessary;
- (void)_setSelectedTextRange:(id)arg1;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_setUndoRedoInProgress:(BOOL)arg1;
- (void)_setWhitelistedTypingAttributes:(id)arg1;
- (void)_setupTextContainerView:(id)arg1;
- (void)_share:(id)arg1;
- (BOOL)_shouldConsiderTextViewForGeometry:(id)arg1;
- (BOOL)_shouldHandleResponderAction:(SEL)arg1;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_teardownTextContainerView:(id)arg1;
- (id)_textColorForCaretSelection;
- (void)_textContainerDidChangeView:(id)arg1;
- (id)_textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_toggleFontTrait:(int)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_undoManagerWillUndo:(id)arg1;
- (BOOL)_undoRedoInProgress;
- (void)_unmarkText;
- (void)_updateFirstTextView;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (BOOL)_usesAsynchronousProtocol;
- (unsigned int)_validCaretPositionFromCharacterIndex:(unsigned int)arg1 downstream:(BOOL)arg2;
- (id)_whitelistedTypingAttributes;
- (id)_wordContainingCaretSelection;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)allowsEditingTextAttributes;
- (int)atomStyle;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)changeWillBeUndone:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)checkSpellingForWordInRange:(id)arg1;
- (void)clearText;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (void)coalesceInTextView:(id)arg1 affectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (BOOL)continuousSpellCheckingEnabled;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (id)delegate;
- (void)delegateWillChangeAttributedText:(id)arg1;
- (void)deleteBackward;
- (void)didEndEditing;
- (BOOL)drawsAsAtom;
- (id)endOfDocument;
- (void)endSelectionChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasText;
- (void)increaseSize:(id)arg1;
- (id)initWithLayoutManager:(id)arg1;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isCoalescing;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (id)layoutManager;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })markedRange;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })nsRangeForTextRange:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)preheatTextChecker;
- (struct _NSRange { unsigned int x1; unsigned int x2; })previousSelectedRange;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 replacementText:(id)arg4;
- (void)removeAlternativesForCurrentWord;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)removeSpellingMarkersForCurrentWord;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (void)removeTextStylingFromString:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (id)selectedTextRange;
- (int)selectionAffinity;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setPreviousSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)stopCoalescing;
- (id)textChecker;
- (id)textInRange:(id)arg1;
- (id)textInputSuggestionDelegate;
- (id)textRangeForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (id)typingAttributes;
- (void)undoDidChangeText;
- (id)undoManager;
- (void)undoWillChangeText;
- (void)unmarkText;
- (void)updateSelection;

@end
