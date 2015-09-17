//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DiffItem : NSObject
{
    long long lineNumber;
    long long numLines;
    long long numAddLines;
    int operation;
    int mergeState;
    int initialMergeState;
    BOOL conflict;
    struct CGRect displayRectLeft;
    struct CGRect displayRectRight;
    struct CGRect displayRectMerge;
    long long mergeStartDelta;
    long long mergeEndDelta;
    NSMutableArray *boldList1;
    NSMutableArray *boldList2;
    NSAttributedString *leftStream;
    NSAttributedString *riteStream;
}

- (void)setMergeEndDelta:(long long)arg1;
- (void)setMergeStartDelta:(long long)arg1;
- (long long)mergeEndDelta;
- (long long)mergeStartDelta;
- (BOOL)displayable:(id)arg1;
- (void)setRiteStream:(id)arg1;
- (void)setLeftStream:(id)arg1;
- (void)dealloc;
- (id)boldsRite;
- (id)boldsLeft;
- (void)initMiniDiffsWithLeftString:(id)arg1 rightString:(id)arg2;
- (double)verticalSpan:(long long)arg1;
- (double)endCoordinate:(long long)arg1;
- (double)startCoordinate:(long long)arg1;
- (void)setMergeState:(int)arg1;
- (BOOL)conflictInMergeChoice;
- (int)initialMergeState;
- (int)mergeState;
- (struct CGRect *)mergeRect;
- (struct CGRect *)riteRect;
- (struct CGRect *)leftRect;
- (struct CGRect)rectForSide:(long long)arg1;
- (int)operation;
- (id)mergeStream;
- (long long)numMergeLines;
- (long long)maxLines;
- (long long)numAddLines;
- (long long)numLines;
- (long long)lineNumberTrue;
- (long long)lineNumber;
- (long long)leftDelta;
- (long long)rightDelta;
- (id)initWithDiffDescriptor:(id)arg1 initialMergeState:(int)arg2 conflict:(BOOL)arg3;
- (id)initWithDiffDescriptor:(id)arg1;
- (id)description;

@end