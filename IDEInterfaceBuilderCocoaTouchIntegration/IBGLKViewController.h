//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBGLKViewController : IBUIViewController <IBDocumentArchiving, NSCoding>
{
    long long preferredFramesPerSecond;
    BOOL pauseOnWillResignActive;
    BOOL resumeOnDidBecomeActive;
}

+ (id)ibViewPasteboardType;
+ (Class)ibViewClass;
@property(nonatomic) BOOL resumeOnDidBecomeActive; // @synthesize resumeOnDidBecomeActive;
@property(nonatomic) BOOL pauseOnWillResignActive; // @synthesize pauseOnWillResignActive;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond;
@property(retain) IBGLKView *glkView;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibEstablishViewOutletsInDocument:(id)arg1;
- (id)ibExplanatoryTextForEditor;
- (id)ibImageForOwnedScene;
- (id)ibTypeNameForDefaultLabel;
- (id)ibTitleForEditor;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end