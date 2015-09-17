//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPBadRouteSuggestionsQuestion : RAPQuestion
{
    NSSet *_selectedRouteSuggestions;
    RAPCommentQuestion *_commentQuestion;
}

+ (_Bool)_canDisplayForContext:(id)arg1;
+ (id)localizedTitle;
@property(copy, nonatomic) NSSet *selectedRouteSuggestions; // @synthesize selectedRouteSuggestions=_selectedRouteSuggestions;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedSelectableRoutesPrompt;
- (void)_fillSubmittableProblem:(id)arg1;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
@property(readonly, nonatomic) _Bool shouldShowCommentQuestion;
- (_Bool)isComplete;
- (_Bool)_isRecursivelyComplete;
- (_Bool)_routeSuggestionsCanBeSubmitted;
@property _Bool markAllRouteSuggestionsIncorrect;
- (_Bool)_areAllSuggestionsSelectableInSet:(id)arg1;
@property(readonly, nonatomic) NSArray *selectableRouteSuggestions;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

@end