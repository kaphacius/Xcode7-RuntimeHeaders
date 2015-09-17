//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundDocumentSection : NSObject <DVTInvalidation>
{
    NSString *_identifier;
    IDEPlaygroundDocument *_playgroundDocument;
}

+ (id)contentPathsToPreserveOnSave;
+ (void)initialize;
@property(readonly) IDEPlaygroundDocument *playgroundDocument; // @synthesize playgroundDocument=_playgroundDocument;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)resetPlaygroundSection;
- (id)content;
- (id)viewControllerForDisplayingPlaygroundSectionInEditor:(id)arg1;
- (id)initWithIdentifier:(id)arg1 inPlaygroundDocument:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end