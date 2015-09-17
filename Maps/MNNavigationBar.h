//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNNavigationBar : NSObject <MainChromeTopBarContentProvider>
{
    MainChromeNavigationItemTopBarContent *_compressedContent;
    MainChromeNavigationItemTopBarContent *_regularContent;
    UIBarButtonItem *_regularRight;
    UIBarButtonItem *_compressedRight;
    _Bool _dimmed;
    _Bool _darkUI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *compressedTitleView;
@property(retain, nonatomic) UIView *regularTitleView;
- (_Bool)isUIDark;
@property(nonatomic, getter=isDimmed) _Bool dimmed;
- (void)setDarkUI:(_Bool)arg1;
- (id)topBarContentForVariant:(long long)arg1;
- (void)setShowsDimmedDisplay:(_Bool)arg1 darkUI:(_Bool)arg2 animation:(id)arg3;
- (void)dealloc;
- (id)initWithTopBarItemProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(nonatomic) MainChromeViewController *chromeViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end