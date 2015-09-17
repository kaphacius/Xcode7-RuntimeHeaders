//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNNavigationAudioSession : NSObject
{
    int _sessionType;
    NSString *_language;
    MNNavigationAudioFeedbackCollector *_audioFeedbackCollector;
    id <MNNavigationAudioSessionDelegate> _delegate;
}

+ (id)sessionOfType:(int)arg1 language:(id)arg2;
@property(nonatomic) __weak id <MNNavigationAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
- (void).cxx_destruct;
- (_Bool)_headphonesAreInUse;
- (_Bool)vibrateForPrompt:(long long)arg1;
- (void)endAnnounce;
- (void)prepareToAnnounce;
@property(readonly, nonatomic) MNNavigationAudioFeedbackCollector *audioFeedbackCollector;
- (void)endSession;
- (void)beginSession;
- (void)stop;
- (void)speak:(id)arg1 shortPromptType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)speak:(id)arg1 shortPromptType:(long long)arg2 ignorePromptStyle:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)speak:(id)arg1 shortPromptType:(long long)arg2 ignorePromptStyle:(_Bool)arg3;
- (void)speak:(id)arg1 shortPromptType:(long long)arg2;
- (_Bool)_beepIfNecessaryWithShortPromptType:(long long)arg1;
- (void)speakInitialAnnouncement:(id)arg1;
- (_Bool)_isVoiceGuidanceEnabled;

@end