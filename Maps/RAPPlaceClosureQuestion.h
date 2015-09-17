//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPPlaceClosureQuestion : RAPQuestion
{
    id <RAPPlace> _reportedPlace;
    RAPCommentQuestion *_commentQuestion;
    NSArray *_selectableIssues;
    id <RAPPlaceClosureIssue> _selectedIssue;
}

+ (int)mapServiceAction;
+ (id)localizedTransitTitle;
+ (id)localizedTitle;
@property(retain, nonatomic) id <RAPPlaceClosureIssue> selectedIssue; // @synthesize selectedIssue=_selectedIssue;
- (void).cxx_destruct;
- (void)_fillSubmittableProblem:(id)arg1;
- (_Bool)isComplete;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
@property(readonly, nonatomic) NSArray *selectableIssues; // @synthesize selectableIssues=_selectableIssues;
@property(readonly, nonatomic) NSString *localizedSelectableIssueLabel;

@end