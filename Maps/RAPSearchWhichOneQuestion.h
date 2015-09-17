//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPSearchWhichOneQuestion : RAPQuestion
{
    RAPCommentQuestion *_commentQuestion;
    NSArray *_selectableSearches;
    id <RAPUserSearch> _selectedSearch;
}

+ (int)mapServiceAction;
+ (id)localizedTitle;
@property(retain, nonatomic) id <RAPUserSearch> selectedSearch; // @synthesize selectedSearch=_selectedSearch;
- (void).cxx_destruct;
- (void)_fillSubmittableProblem:(id)arg1;
- (id)_alternateAuxiliaryControlsRecording;
- (_Bool)isComplete;
- (_Bool)_isRecursivelyComplete;
@property(readonly, nonatomic) NSArray *selectableSearches; // @synthesize selectableSearches=_selectableSearches;
@property(readonly, nonatomic) NSString *localizedSelectSearchRequestPrompt;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion;
@property(readonly, nonatomic) _Bool shouldShowCommentQuestion;

@end