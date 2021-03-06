//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHBulletinClientFactory : CUISBulletinClientFactory <CUISSiriContextProvider>
{
    BBBulletin *_bulletin;
    NSObject *_attachment;
}

- (void).cxx_destruct;
- (void)_requestCoreDuetUngateContent:(_Bool)arg1;
- (id)customInfo;
- (id)userActivity;
- (id)createSiriContext;
- (void)messageBack:(id)arg1;
- (void)returnFaceTimeAudioCall:(id)arg1;
- (void)returnFaceTimeCall:(id)arg1;
- (void)returnCall:(id)arg1;
- (id)actionMenuPresentation;
- (id)primaryPagePresentation;
- (id)_voiceMailMeta:(id)arg1;
- (_Bool)_isVisualVoicemail:(id)arg1;
- (void)dealloc;
- (id)initWithBulletins:(id)arg1 attachment:(id)arg2;
- (id)initWithBulletins:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end