/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <libobjc.A.dylib/MPUAutoupdatingTextContainer.h>
#import <libobjc.A.dylib/ABText.h>
#import <UIKit/UITextLinkInteraction.h>
#import <UIKit/UIPreviewItemDelegate.h>
#import <UIKit/UITextInputControllerDelegate.h>
#import <UIKit/UITextAutoscrolling.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKit/_UIMultilineTextContentSizing.h>
#import <UIKit/_UILayoutBaselineUpdating.h>
#import <UIKit/UITextInput.h>

@protocol UITextInputTokenizer;
@class NSTextStorage, NSTextContainer, NSLayoutManager, _UITextContainerView, UITextInputController, UITextInteractionAssistant, UITextInputTraits, UIAutoscroll, _UITextViewRestorableScrollPosition, UILabel, UIView, _UISiriStreamingManager, _UICharacterStreamingManager, NSDictionary, NSString, UIFont, NSAttributedString, MPUTextContainerContentSizeUpdater, UIColor, UIImage, UITextRange, UITextPosition;

@interface UITextView : UIScrollView <MPUAutoupdatingTextContainer, ABText, UITextLinkInteraction, UIPreviewItemDelegate, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UITextInput> {

	id _private;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSLayoutManager* _layoutManager;
	_UITextContainerView* _containerView;
	id _inputDelegate;
	id<UITextInputTokenizer> _tokenizer;
	UITextInputController* _inputController;
	UITextInteractionAssistant* _interactionAssistant;
	UITextInputTraits* _textInputTraits;
	UIAutoscroll* _autoscroll;
	struct {
		unsigned needsScrollToSelectionAfterLayout : 1;
		unsigned isInteractingWithLink : 1;
		unsigned linkInteractionIsLongPress : 1;
		unsigned linkInteractionIsPreview : 1;
		unsigned editable : 1;
		unsigned reentrancyGuard : 1;
		unsigned usesExplicitPreferredMaxLayoutWidth : 1;
		unsigned determiningPreferredMaxLayoutWidth : 1;
		unsigned inSecondConstraintsPass : 1;
		unsigned interactiveSelectionDisabled : 1;
		unsigned selectable : 1;
		unsigned shouldPresentSheetsInAWindowLayeredAboveTheKeyboard : 1;
	}  _tvFlags;
	long long _contentSizeUpdateSeqNo;
	_UITextViewRestorableScrollPosition* _scrollTarget;
	unsigned long long _scrollPositionDontRecordCount;
	_UITextViewRestorableScrollPosition* _scrollPosition;
	double _offsetFromScrollPosition;
	id _linkInteractionItem;
	unsigned long long _dataDetectorTypes;
	double _preferredMaxLayoutWidth;
	UILabel* _placeholderLabel;
	UIView* _inputAccessoryView;
	_UISiriStreamingManager* _streamingManager;
	_UICharacterStreamingManager* _characterStreamingManager;
	long long _siriAnimationStyle;
	NSDictionary* _siriParameters;
	double _firstBaselineOffsetFromTop;
	double _lastBaselineOffsetFromBottom;
	BOOL _clearsOnInsertion;
	UIView* _inputView;

}

@property (assign,setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:,nonatomic) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) MPUTextContainerContentSizeUpdater * MPU_contentSizeUpdater; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (assign,nonatomic,__weak) id<UITextViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,getter=isSelectable,nonatomic) BOOL selectable; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (retain) UIView * inputView;                                                                                                                                                     //@synthesize inputView=_inputView - In the implementation block
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) BOOL clearsOnInsertion;                                                                                                                                       //@synthesize clearsOnInsertion=_clearsOnInsertion - In the implementation block
@property (nonatomic,readonly) NSTextContainer * textContainer;                                                                                                                            //@synthesize textContainer=_textContainer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textContainerInset; 
@property (nonatomic,readonly) NSLayoutManager * layoutManager;                                                                                                                            //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) NSTextStorage * textStorage;                                                                                                                                //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,copy) NSDictionary * linkTextAttributes; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
+(id)pkui_plainNonInteractiveTextView;
+(id)_sharedHighlightView;
+(BOOL)_isCompatibilityTextView;
+(id)_bestInterpretationForDictationResult:(id)arg1 ;
-(CGSize)pkui_textSizeThatFits:(CGSize)arg1 ;
-(CGSize)pkui_frameSizeForTextSize:(CGSize)arg1 ;
-(id)dd_newOperation;
-(MPUTextContainerContentSizeUpdater *)MPU_contentSizeUpdater;
-(BOOL)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
-(void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(BOOL)arg1 ;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setAb_text:(NSString *)arg1 ;
-(NSString *)ab_text;
-(NSDictionary *)ab_textAttributes;
-(void)_cnui_applyContactStyle;
-(BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(CGPoint)arg2 ;
-(id)_dataForPreviewItemController:(id)arg1 atPosition:(CGPoint)arg2 type:(long long*)arg3 ;
-(id)_presentationRectsForPreviewItemController:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(id)_interactableItemAtPoint:(CGPoint)arg1 ;
-(id)_presentationRectsForLinkAtRange:(NSRange)arg1 withMargin:(double)arg2 ;
-(void)_highlightLinkAtPoint:(CGPoint)arg1 ;
-(void)_resetLinkInteraction;
-(CGRect)_presentationRectForLinkAtRange:(NSRange)arg1 ;
-(void)_finishHandlingInteraction:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(Class)_printFormatterClass;
-(void)drawRect:(CGRect)arg1 forViewPrintFormatter:(id)arg2 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)isEditable;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)lineHeight;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(double)_baselineOffsetFromBottom;
-(double)_firstBaselineOffsetFromTop;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(NSAttributedString *)attributedText;
-(UIFont *)font;
-(void)_updateContentSize;
-(BOOL)isEditing;
-(NSLayoutManager *)layoutManager;
-(id)_containerView;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(NSTextStorage *)textStorage;
-(id)interactionAssistant;
-(id)selectionView;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(UIColor *)textColor;
-(void)cancelAutoscroll;
-(UIView *)textInputView;
-(NSRange)selectedRange;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(id)_textInputTraits;
-(void)takeTraitsFrom:(id)arg1 ;
-(long long)textAlignment;
-(NSDictionary *)typingAttributes;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)addTextAlternativesDisplayStyleToRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(UITextRange *)selectedTextRange;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textInputDidChange:(id)arg1 ;
-(void)textInputDidChangeSelection:(id)arg1 ;
-(CGRect)visibleRect;
-(UIEdgeInsets)textContainerInset;
-(NSTextContainer *)textContainer;
-(NSDictionary *)linkTextAttributes;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(long long)selectionAffinity;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)updateConstraints;
-(BOOL)_ownsInputAccessoryView;
-(BOOL)canResignFirstResponder;
-(UIView *)inputAccessoryView;
-(BOOL)_restoreFirstResponder;
-(UIView *)inputView;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(unsigned long long)dataDetectorTypes;
-(id)webView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)selectAll:(id)arg1 ;
-(CGRect)visibleTextRect;
-(void)setClearsOnInsertion:(BOOL)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_lookup:(CGPoint)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 font:(id)arg2 ;
-(void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(BOOL)clearsOnInsertion;
-(void)disableClearsOnInsertion;
-(void)updateSelection;
-(id)selectedText;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(unsigned long long)marginTop;
-(void)setMarginTop:(unsigned long long)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)setInputView:(UIView *)arg1 ;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(double)_preferredMaxLayoutWidth;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(id)_layoutDebuggingTitle;
-(void)_resetUsesExplicitPreferredMaxLayoutWidth;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(BOOL)_isDisplayingLookupViewController;
-(void)_keyboardDidShow:(id)arg1 ;
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_isInteractiveTextSelectionDisabled;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(void)_setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)_setInteractiveTextSelectionDisabled:(BOOL)arg1 ;
-(BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
-(void)_updateBaselineInformationDependentOnBounds;
-(void)_streamingManagerDidCommitFinalResults;
-(void)_observedTextViewDidChange:(id)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(void)_updateContainerTileAndSizingFlags;
-(void)_textContainerSizeDidChange:(id)arg1 ;
-(void)_commonInitWithTextContainer:(id)arg1 isDecoding:(BOOL)arg2 isEditable:(BOOL)arg3 isSelectable:(BOOL)arg4 ;
-(void)setUsesTiledViews:(BOOL)arg1 ;
-(BOOL)isSelectable;
-(BOOL)_shouldStartDataDetectors;
-(void)_startDataDetectors;
-(void)_updatePlaceholderVisibility;
-(unsigned long long)_totalNumberOfTextViewsInLayoutManager;
-(id)_restorableScrollPosition;
-(NSRange)_visibleRangeWithLayout:(BOOL)arg1 ;
-(CGPoint)_contentOffsetForScrollToVisible:(NSRange)arg1 ;
-(CGSize)_containerSizeForBoundsSize:(CGSize)arg1 allowingOverflow:(BOOL)arg2 ;
-(void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(BOOL)arg1 ;
-(CGRect)visibleRectIgnoringKeyboard;
-(void)_updateTextContainerSizeAndSizeToFit;
-(void)_resyncContainerFrameForNonAutolayout;
-(void)_scrollToSelectionIfNeeded;
-(void)_layoutPlaceholder;
-(BOOL)_shouldScrollEnclosingScrollView;
-(void)_scrollSelectionToVisibleInContainingScrollView;
-(CGRect)_rectForScrollToVisible:(NSRange)arg1 ;
-(void)_setContentOffsetWithoutRecordingScrollPosition:(CGPoint)arg1 ;
-(BOOL)usesTiledViews;
-(void)_setFrameOrBounds:(CGRect)arg1 fromOldRect:(CGRect)arg2 settingAction:(/*^block*/id)arg3 ;
-(void)_performLayoutCalculation:(/*^block*/id)arg1 inSize:(CGSize)arg2 ;
-(double)_currentPreferredMaxLayoutWidth;
-(CGPoint)_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1 ;
-(CGPoint)_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1 ;
-(void)_baselineOffsetDidChange;
-(void)_scrollSelectionToVisibleInContainingScrollView:(BOOL)arg1 ;
-(void)_resetDataDetectorsResults;
-(id)extractWordArrayFromTokensArray:(id)arg1 ;
-(void)_didRecognizeSpeechStrings:(id)arg1 ;
-(void)_restoreScrollPosition:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLinkTextAttributes:(NSDictionary *)arg1 ;
-(void)_setWhitelistedTypingAttributes:(id)arg1 ;
-(id)_whitelistedTypingAttributes;
-(void)_selectionMayChange:(id)arg1 ;
-(void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2 ;
-(unsigned long long)_effectiveDataDetectorTypes;
-(BOOL)tiledViewsDrawAsynchronously;
-(void)setTiledViewsDrawAsynchronously:(BOOL)arg1 ;
-(BOOL)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
-(void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(BOOL)arg1 ;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(id)attributedPlaceholder;
-(void)_enableSiriAnimationDictationStyle;
-(void)_enableSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2 ;
-(void)_didRecognizeSpeechTokens:(id)arg1 ;
-(void)_didFinishSpeechRecognition;
-(BOOL)_getOpenQuoteAnchor:(CGPoint*)arg1 ;
-(BOOL)_getCloseQuoteAnchor:(CGPoint*)arg1 ;
-(id)_restorableScrollPositionForStateRestoration;
-(BOOL)_mightHaveSelection;
-(void)_cancelDataDetectors;
@end

