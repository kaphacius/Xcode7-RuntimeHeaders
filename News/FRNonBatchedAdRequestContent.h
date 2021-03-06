//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRNonBatchedAdRequestContent : FRAdRequestContext
{
    NSString *_adOpportunityID;
    NSString *_previousAdOpportunityID;
    FRADBatch *_previousBatch;
    unsigned long long _numberOfScreenfulsFromTop;
}

@property(nonatomic) unsigned long long numberOfScreenfulsFromTop; // @synthesize numberOfScreenfulsFromTop=_numberOfScreenfulsFromTop;
@property(retain, nonatomic) FRADBatch *previousBatch; // @synthesize previousBatch=_previousBatch;
@property(copy, nonatomic) NSString *previousAdOpportunityID; // @synthesize previousAdOpportunityID=_previousAdOpportunityID;
@property(copy, nonatomic) NSString *adOpportunityID; // @synthesize adOpportunityID=_adOpportunityID;
- (void).cxx_destruct;

@end