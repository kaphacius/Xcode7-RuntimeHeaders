//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDMedicalIDViewController : UIViewController <HKMedicalIDViewControllerDelegate, UINavigationControllerDelegate>
{
    HKHealthStore *_healthStore;
    _HKMedicalIDData *_medicalIDData;
    _Bool _medicalIDIsNew;
    _MedicalIDIntroductionView *_introView;
    NSUserActivity *_userActivity;
}

- (void).cxx_destruct;
- (id)_createMedicalIDDataFromMeCardAndHealthKit;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)_showMedicalIDView;
- (void)_showMedicalIDEditor;
- (void)_showMedicalIDIntroView;
- (void)_createMedicalIDTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end