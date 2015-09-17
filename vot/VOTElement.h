//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VOTElement : NSObject <NSCopying, VOTElementAspect>
{
    id <UIElementProtocol> _uiElement;
    VOTElement *_elementForGesturedTextInput;
    int _lastOrbSoundLevel;
    _Bool shouldSkipValidateElement;
    VOTElementUniqueIdentification *_uniqueIdentification;
    long long _aspectMask;
}

+ (id)_elementWithAXUIElementRef:(struct __AXUIElement *)arg1;
+ (id)_elementWithAXUIElementRef:(struct __AXUIElement *)arg1 cache:(struct __CFDictionary *)arg2 identification:(id)arg3;
+ (id)elementWithUIElement:(id)arg1;
+ (void)resetSystemAppElement;
+ (id)springBoardApplication;
+ (id)systemAppApplication;
+ (void)setSystemAppApplication:(id)arg1;
+ (id)systemWideElement;
+ (void)initialize;
@property(nonatomic) long long aspectMask; // @synthesize aspectMask=_aspectMask;
@property(nonatomic) _Bool shouldSkipValidateElement; // @synthesize shouldSkipValidateElement;
@property(readonly, nonatomic) VOTElementSnapshot *snapshot;
- (long long)differenceAspectMask:(id)arg1;
- (id)activeKeyboard;
- (_Bool)isInternationalKeyboardKey;
- (void)updateTouchForceSounds:(double)arg1;
- (void)postFingerLiftAtPoint:(struct CGPoint)arg1 withContextId:(unsigned int)arg2;
- (void)postFingerDragAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 withContextId:(unsigned int)arg3;
- (void)postFingerTouchAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 withContextId:(unsigned int)arg3;
- (void)performSimpleTapAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 withContextId:(unsigned int)arg3 withDelay:(float)arg4;
- (void)performSimpleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)supportsDirectionOrbManipulation;
- (void)notifyAnnouncementFinished:(id)arg1;
- (void)sendUserEventOccurred;
- (void)sendTouchCancelledEvent;
- (void)sendBrightnessEvent:(id)arg1;
- (void)repostEvent:(id)arg1;
- (_Bool)dispatchKeyboardEvent:(id)arg1;
- (void)setEventCaptureMode:(int)arg1;
- (void)setRotationCapabilityEnabled:(_Bool)arg1;
- (void)setAccelemoterDisabled:(_Bool)arg1;
- (void)setDeviceOrientation:(int)arg1;
- (id)isolatedWindow;
- (id)elementCommunityIdentifier;
- (_Bool)shouldSpeakMathEquationTrait;
- (id)staticTextString;
- (_Bool)pressTVRemoteMenuButton;
- (_Bool)pressTVRemoteSelectButton;
- (_Bool)pressTVRemoteRightButton;
- (_Bool)pressTVRemoteLeftButton;
- (_Bool)pressTVRemoteDownButton;
- (_Bool)pressTVRemoteUpButton;
- (_Bool)isApplication;
- (CDStruct_4bcfbbae)nonPersistentUniqueId;
- (_Bool)webSearchResultsActive;
@property(readonly, nonatomic) VOTElementUniqueIdentification *uniqueIdentification; // @synthesize uniqueIdentification=_uniqueIdentification;
- (_Bool)shouldStartReadAllOnFocus;
@property(readonly, nonatomic) NSString *toggleStatusLabel;
@property(readonly, copy) NSString *description;
- (_Bool)isElementFirstElement:(_Bool)arg1 orLastElement:(_Bool)arg2 withTraits:(unsigned long long)arg3;
- (id)lastElementInStatusBar;
- (struct CGPath *)convertPath:(struct CGPath *)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContextId:(unsigned int)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromContextId:(unsigned int)arg2;
- (_Bool)avoidAnnouncingDirectTouchArea;
- (id)firstElementInStatusBar;
- (void)restoreUserPreferencesChangedByHandwriting;
- (void)showControlCenter:(_Bool)arg1;
- (void)showBulletinBoard:(_Bool)arg1;
- (int)currentCallState;
- (_Bool)isSystemWideGestureInProgress;
- (_Bool)isSiriTalkingOrListening;
- (id)currentSoftwareKeyboardLayout;
- (id)currentSoftwareKeyboardLanguage;
- (id)currentHardwareKeyboardLayout;
- (_Bool)isDictationListening;
- (_Bool)isVoiceControlRunning;
- (struct CGPoint)centerPointOfScreen;
- (_Bool)isQuietModeEnabled;
- (void)launchAppWithDisplayID:(id)arg1;
- (id)appSwitcherApps;
- (id)launchableApps;
- (_Bool)isSystemBatteryLow;
- (_Bool)isSystemLocked;
- (_Bool)isSystemSleeping;
- (int)applicationOrientation;
- (_Bool)usingHardwareKeyboard;
- (_Bool)isSoftwareKeyboardActive;
- (_Bool)isSoftwareKeyboardMimic;
- (_Bool)softwareKeyboardSupportsGestureKeyboard;
- (_Bool)startStopToggle;
- (struct _NSRange)indexPathAsRange;
- (struct _NSRange)columnRange;
- (struct _NSRange)rowRange;
- (void)jumpToTableIndex:(id)arg1;
- (id)elementAtRow:(long long)arg1 andColumn:(long long)arg2;
- (id)typingCandidateElements;
- (_Bool)isIBooks;
- (_Bool)isMaps;
- (_Bool)isAssistiveTouch;
- (_Bool)isGoogleChrome;
- (_Bool)isSafari;
- (_Bool)isMobilePhone;
- (_Bool)isSetupBuddy;
- (_Bool)isSystemWideApp;
- (_Bool)isPineBoard;
- (_Bool)isSpringBoard;
- (_Bool)isInFolder;
- (_Bool)isInAppSwitcher;
- (id)bundleIdentifier;
- (id)accessibleAncestor;
- (id)accessibleDescendants;
- (id)explorerElements;
- (id)titleElements;
- (void)updateTitleElements;
- (_Bool)elementActsAsTitleElement:(id)arg1;
- (void)addTitleElementToCache:(id)arg1;
- (id)headerElements;
- (id)summaryElement;
- (id)textMarkerArrayOfText:(id)arg1;
- (id)stringForTextMarkers:(id)arg1;
- (id)elementForTextMarker:(id)arg1;
- (struct CGRect)textMarkerFrame:(id)arg1;
- (id)textLineStartMarker:(id)arg1;
- (void)setSelectionToTextMarker:(id)arg1;
- (_Bool)textOperationsAvailable;
- (id)textMarkersForRange:(struct _NSRange)arg1;
- (_Bool)isTourGuideRunning;
- (_Bool)isCameraIrisOpen;
- (_Bool)shouldAnnounceFontInfo;
- (struct _NSRange)rangeForTextMarker:(id)arg1;
- (id)textLineEndMarker:(id)arg1;
- (id)pageTextMarkerRange;
- (id)textPreviousMarker:(id)arg1;
- (id)textNextMarker:(id)arg1;
- (id)textMarkersForPoints:(id)arg1;
- (id)textMarkerForPoint:(struct CGPoint)arg1;
- (id)url;
- (id)webAreaURL;
- (id)textMarkerRange;
- (struct _NSRange)textMarkerSelectionRange;
- (id)textMarkerRangeForSelection;
- (struct CGRect)boundsForRange:(struct _NSRange)arg1;
- (void)replaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (void)deleteCharacterAtCursor;
- (void)decreaseWebSelection:(int)arg1;
- (void)increaseWebSelection:(int)arg1;
- (id)_selectionStringForSegment:(int)arg1;
- (id)objectForRange:(struct _NSRange)arg1 withParameterizedAttribute:(int)arg2;
- (id)attributedValueForRange:(struct _NSRange)arg1;
- (id)valueForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeForLineNumberAndColumn:(id)arg1;
- (id)lineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (void)setCurrentWordContextForBook:(id)arg1;
- (long long)lineNumberForPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForRange:(struct _NSRange)arg1;
- (_Bool)supportsFrameForRange;
- (struct CGRect)frameForLineNumber:(long long)arg1;
- (id)stringForLineNumber:(long long)arg1;
- (struct _NSRange)rangeForLineNumber:(long long)arg1;
- (_Bool)supportsRangeForLineNumber;
- (id)pageContent;
- (void)updatePageContent;
- (_Bool)isReadingContent;
- (_Bool)includeDuringContentReading;
- (_Bool)shouldSpeakScrollStatusOnEntry;
- (struct _NSRange)lineRangeForPosition:(unsigned long long)arg1;
- (long long)lineEndPosition;
- (long long)lineStartPosition;
- (void)setVoiceOverFocused:(_Bool)arg1;
- (void)handwritingActivateKeyboardReturnKey;
- (void)updateGesturedTextInputAttributes;
- (id)gesturedTextInputAttributes;
- (id)elementForGesturedTextInput;
- (void)clearElementForGesturedTextInput;
- (void)insertTextAtCurrentPosition:(id)arg1;
- (void)insertText:(id)arg1 atPosition:(long long)arg2;
- (void)setSelectedTextRange:(struct _NSRange)arg1 refreshBraille:(_Bool)arg2;
- (void)setFirstResponder:(id)arg1;
- (struct _NSRange)selectedTextRange;
- (id)customRotorItemsForIndex:(long long)arg1;
- (_Bool)performCustomActionWithIdentifier:(id)arg1;
- (_Bool)setNativeFocus;
- (id)customRotorActions;
- (id)cachedCustomRotorActions;
- (_Bool)retainsCustomRotorActionSetting;
- (_Bool)allowCustomActionHintSpeakOverride;
- (id)customRotorTitles;
- (id)tableViewCellWithRowIndexPath:(struct _NSRange)arg1;
- (_Bool)elementOnSameLine:(id)arg1;
- (id)firstElementInApplicationForFocus;
- (id)firstElementInApplication;
- (id)firstResponderElementForFocus;
- (id)nativeFocusPreferredElement;
- (id)nativeFocusElement;
- (id)firstResponderElement;
- (id)firstVisibleElementInList;
- (_Bool)readingContentCausesPageTurn;
- (_Bool)showsDualPages;
- (id)scrollStatus;
- (void)scrollRectToVisible:(struct CGRect)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scrollToPoint:(struct CGPoint)arg1;
- (_Bool)scrollPreviousPage;
- (_Bool)scrollNextPage;
- (void)scrollLeftPage;
- (void)scrollRightPage;
- (void)scrollDownPage;
- (void)scrollUpPage;
- (id)remoteParent;
- (double)absoluteValue;
- (double)maxValue;
- (double)minValue;
- (_Bool)_attemptPerformActivateActionWithElement:(id)arg1;
- (void)performSimpleTap:(_Bool)arg1;
- (void)performSimpleTap;
- (void)performDoubleTap;
- (_Bool)allowsAutoAlternativeCharacterActivation;
- (void)performTapAtPoint:(struct CGPoint)arg1 withForce:(double)arg2;
- (_Bool)verifyElementExists:(struct CGPoint *)arg1;
- (_Bool)supportsSecondaryActivate;
- (_Bool)supportsActivate;
- (void)findSearchResult:(_Bool)arg1 withSearchText:(id)arg2;
- (_Bool)performEscape;
- (struct CGPoint)elementFrameLocation:(int)arg1;
- (void)performTextOperation:(id)arg1;
- (id)textOperations;
- (id)textOperationsOperator;
- (void)increaseTrackingDetail;
- (void)decreaseTrackingDetail;
- (void)zoomOutAtLocation:(struct CGPoint)arg1;
- (_Bool)roadContainsTrackingPoint:(struct CGPoint)arg1;
- (id)upcomingRoadsAtPoint:(struct CGPoint)arg1 withDirection:(float)arg2;
- (float)distanceToEndOfRoad:(struct CGPoint)arg1 withDirection:(float)arg2;
- (float)distanceToOtherRoad:(struct CGPoint)arg1 withDirection:(float)arg2 otherRoad:(id)arg3;
- (_Bool)lastHitTestNearBorder;
- (id)mapDetailedInformationAtPoint:(struct CGPoint)arg1;
- (int)mapFeatureType;
- (id)photoDescription;
- (void)zoomInAtLocation:(struct CGPoint)arg1;
- (void)decrementAction;
- (void)setGesturePracticeInfo:(id)arg1;
- (void)incrementAction;
- (void)scrollToElementWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long traits;
- (_Bool)doesHaveTraitsForGesturedTextInput;
- (_Bool)onlyHasTraits:(unsigned long long)arg1;
- (_Bool)doesHaveAllTraits:(unsigned long long)arg1;
- (_Bool)doesHaveTraits:(unsigned long long)arg1;
- (_Bool)ignoresChildrenForNativeFocus;
- (_Bool)isEditableTextArea;
- (id)textInputElement;
- (_Bool)suppressCustomActionHint;
- (id)roleDescription;
- (long long)blockquoteLevel;
- (id)elementsInDirection:(long long)arg1 withCount:(unsigned long long)arg2;
- (id)lastContainedElement;
- (id)firstContainedElement;
- (id)previousElement;
- (id)nextElement;
- (id)application;
- (void)updateEquivalenceTag;
- (void)updateLanguage;
- (void)updateTraits;
- (void)updateValue;
- (void)updateRoleDescription;
- (void)updateVisiblePoint;
- (void)updateCenterPoint;
- (void)updateLabel;
- (void)updatePaths;
- (void)updateFrame;
- (void)updateCache;
- (id)dataDetectorURL:(struct CGPoint)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)instructions;
- (_Bool)isPressed;
- (_Bool)supportsPressedState;
- (id)ancestryForTraits:(unsigned long long)arg1;
- (id)previousContainer;
- (id)nextContainer;
- (id)flowToElements;
- (void)updateFlowToElements;
- (id)linkedElement;
- (id)touchContainer;
- (struct __AXUIElement *)touchContainerAXElement;
- (id)elementsForAttribute:(int)arg1;
- (id)elementsForAttribute:(int)arg1 withParameter:(id)arg2;
- (id)_elementForAttribute:(int)arg1 shouldUpdateCache:(_Bool)arg2;
- (id)elementForAttribute:(int)arg1;
- (id)opaqueElementInDirection:(int)arg1 startElement:(id)arg2 searchTraits:(unsigned long long)arg3;
- (float)activationDelay;
- (id)focusedApplications;
- (id)elementForParameterizedAttribute:(int)arg1 parameter:(id)arg2;
- (_Bool)isAccessibleElement;
- (_Bool)isHeader;
- (_Bool)isTouchContainer;
- (id)hint;
@property(readonly, nonatomic) NSString *label;
@property(nonatomic) _Bool isFirstItemInLandmark; // @dynamic isFirstItemInLandmark;
@property(nonatomic) _Bool isFirstItemInTable; // @dynamic isFirstItemInTable;
@property(nonatomic) _Bool isFirstItemInList; // @dynamic isFirstItemInList;
@property(copy, nonatomic) NSString *userDefinedLabel; // @dynamic userDefinedLabel;
- (id)elementStoredUserLabel;
- (_Bool)savePhotoLabeliCloud:(id)arg1;
@property(copy, nonatomic) NSString *definedLabel; // @dynamic definedLabel;
- (id)urlLabel;
- (id)equivalenceTag;
- (id)identifier;
- (id)originalLabel;
@property(readonly, nonatomic) NSString *value;
- (struct CGRect)gesturePracticeRegion;
- (_Bool)isAwayAlertItemNew;
- (_Bool)isAwayAlertItem;
- (id)visibleOpaqueElements;
- (_Bool)isAccessibilityOpaqueElementProvider;
- (id)opaqueParent;
- (double)delayBeforeUpdatingOnActivation;
- (_Bool)elementVisibilityAffectsLayout;
- (_Bool)overridesVoiceOverInstructions;
- (_Bool)keyboardKeyAllowsTouchTyping;
- (_Bool)dismissAlternativeKeyboardPicker;
- (_Bool)isInTableCell;
- (_Bool)isComboBox;
- (struct CGRect)textCursorFrame;
- (id)invalidStatus;
- (_Bool)isRequired;
- (unsigned int)windowContextId;
- (struct CGPath *)path;
- (struct CGRect)frame;
- (_Bool)isRemoteElement;
- (id)supportedLanguageIfNecessary;
- (struct CGPoint)visiblePoint;
- (struct CGPoint)centerPoint;
- (_Bool)isRTL;
- (void)updateRTL;
- (id)language;
@property(readonly, nonatomic) AXUIElement *uiElement;
- (_Bool)isValidForApplication:(id)arg1;
- (_Bool)isAlive;
- (_Bool)isValid;
- (int)pid;
- (void)dealloc;
- (id)copyWithCache;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPosition:(struct CGPoint)arg1;
- (id)initWithPosition:(struct CGPoint)arg1 startWithElement:(id)arg2;
- (id)_initWithUIElement:(id)arg1 identification:(id)arg2;
- (id)initWithUIElement:(id)arg1;
- (id)initWithAXElement:(struct __AXUIElement *)arg1;
- (id)initApplicationWithPosition:(struct CGPoint)arg1;
- (id)regionDescription;
- (void)_applyRoleDescription:(id)arg1;
- (void)_configureAsSingleLinkElementWithRequest:(id)arg1 linkTraitTitle:(id)arg2 hint:(id)arg3;
- (void)_applyTextEditingInformation:(id)arg1 request:(id)arg2;
- (void)addTextualInformationToRequest:(id)arg1 options:(int)arg2 lastSeenLineAndColumn:(id)arg3;
- (void)addTextualInformationToRequest:(id)arg1 options:(int)arg2;
- (void)_applySelectedTrait:(id)arg1;
- (id)_languageRangesForText:(id)arg1;
- (void)_applyLanguageTokens:(id)arg1 attributedString:(id)arg2;
- (void)addTextualInformationToBrailleLine:(id)arg1 forPosition:(unsigned long long)arg2 rotorSelection:(id)arg3 shouldPreferRotorSelection:(_Bool)arg4 lineRange:(struct _NSRange *)arg5 descriptionRange:(struct _NSRange *)arg6;
- (id)_copyMathTextualInformationWithBrailleLineRange:(struct _NSRange *)arg1 brailleDescriptionRange:(struct _NSRange *)arg2 position:(unsigned long long)arg3 rotorSelection:(id)arg4 shouldPreferRotorSelection:(_Bool)arg5;
- (struct _NSRange)_brailleLineRangeForDescription:(id)arg1 position:(unsigned long long)arg2;
- (void)_applyInvalidStatus:(id)arg1;
- (void)_applyTraitsToRequest:(id)arg1 options:(int)arg2;
- (void)_applyValueToRequest:(id)arg1 options:(int)arg2 lastSeenLineAndColumn:(id)arg3 language:(id)arg4;
- (void)applyHeaderElementsToRequest:(id)arg1;
- (void)_applyLabelToRequest:(id)arg1 includeBlockQuote:(_Bool)arg2 language:(id)arg3;
- (id)_removeBadDeveloperDecisions:(id)arg1;
- (void)_applyAttributesFromText:(id)arg1 toRequest:(id)arg2 withLanguage:(id)arg3;
- (id)_processTextForPunctation:(id)arg1 replaceCommas:(_Bool)arg2;
- (id)arrayOfTraitsAsStrings;
- (id)arrayOfTraitsAsStringsWithTraitOrder:(id)arg1;
- (id)mathSummary;
- (void)expandMathEquation;
- (_Bool)canExpandMathEquation;
- (id)mathBrailleDescription;
- (_Bool)canNavigateMathSegments;
- (id)mathSegmentsWithGranularityLevel:(unsigned long long)arg1;
- (unsigned long long)_minimumSegmentDepth;
- (unsigned long long)_minimumSegmentDepthForExpression:(id)arg1 withMaximumDepth:(unsigned long long)arg2;
- (id)mathEquationDescription;
- (id)_mathAXStringFromAttributedString:(id)arg1;
- (id)_mathExpression;
- (id)_rawMathEquation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end