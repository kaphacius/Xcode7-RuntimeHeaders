//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSVSSiriView : UIView <UITextViewDelegate>
{
    NSVSDialogView *_streamingTextView;
    NSVSDialogView *_helpDialogView;
    SUICFlamesView *_flamesView;
    UIView *_flamesGestureRecognizerView;
    UIView *_flamesSnapshotView;
    UIView *_dimOverlayView;
    UIView *_transcriptSnapshotView;
    UIView *_unavailableContainerView;
    NSRLabel *_unavailableTitle;
    NSRLabel *_unavailableSubtitle;
    int _enqueuedState;
    _Bool _hasEnqueuedState;
    UIView *_transcriptView;
    int _connectionState;
    id <NSVSSiriViewDelegate> _delegate;
    id <SUICFlamesViewDelegate> _flamesViewDelegate;
}

@property(nonatomic) __weak id <SUICFlamesViewDelegate> flamesViewDelegate; // @synthesize flamesViewDelegate=_flamesViewDelegate;
@property(nonatomic) __weak id <NSVSSiriViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) UIView *transcriptView; // @synthesize transcriptView=_transcriptView;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)_updateLayoutAttributesForPreferredContentSizeCategory;
- (void)_handleFlamesViewTapped:(id)arg1;
- (void)_resetFlamesView;
- (void)_createFlamesViewIfNeeded;
- (void)_dimOverlayViewTapped;
- (void)removeHelpDialog;
- (_Bool)hasStreamingResults;
- (void)resetStreamingResults;
- (void)requestDidEndAnimated:(_Bool)arg1;
- (void)resetTranscriptAnimated:(_Bool)arg1;
- (void)updateStreamingDialog:(id)arg1;
- (void)_addDimViewForRequest;
- (void)prepareForRequestWithStateOptions:(unsigned int)arg1;
- (void)showHelpDialog;
- (void)freezeFlamesView;
- (void)showSiriState:(int)arg1;
- (void)backlightDidTurnOn;
- (void)willDeactivate;
- (void)willActivate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end