//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDocumentationPlaygroundSectionViewController : IDEViewController <IDEPlaygroundSectionViewController>
{
    IDEDocumentationPlaygroundWebViewController *_webViewController;
    IDEPlaygroundEditor *_playgroundEditor;
    IDEDocumentationPlaygroundSection *_playgroundSection;
}

+ (void)initialize;
@property(retain) IDEDocumentationPlaygroundSection *playgroundSection; // @synthesize playgroundSection=_playgroundSection;
@property(readonly) IDEPlaygroundEditor *playgroundEditor; // @synthesize playgroundEditor=_playgroundEditor;
- (void).cxx_destruct;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithDocumentationPlaygroundSection:(id)arg1 editor:(id)arg2;

// Remaining properties
@property(readonly) NSArray *currentSelectedDocumentLocations;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end