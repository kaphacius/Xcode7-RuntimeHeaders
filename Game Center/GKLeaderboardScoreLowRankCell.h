//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKLeaderboardScoreLowRankCell : GKLeaderboardScoreCell
{
    GKContiguousContainerView *_textContainerView;
}

@property(nonatomic) GKContiguousContainerView *textContainerView; // @synthesize textContainerView=_textContainerView;
- (struct CGRect)alignmentRectForText;
- (void)establishConstraints;

@end