//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DividedMonthDayTransitionView : MonthDayTransitionView
{
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)animateToDayWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToMonthWithCompletion:(CDUnknownBlockType)arg1;

@end