//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKChallengeSuggestionHeaderView : GKHeaderWithUnderlineView
{
    GKLabel *_explanatoryLabel;
    GKPlayer *_friend;
}

+ (id)phoneMetrics;
+ (id)padMetrics;
@property(retain, nonatomic) GKPlayer *friend; // @synthesize friend=_friend;
@property(retain, nonatomic) GKLabel *explanatoryLabel; // @synthesize explanatoryLabel=_explanatoryLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end