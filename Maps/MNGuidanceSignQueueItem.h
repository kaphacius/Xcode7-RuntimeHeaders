//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNGuidanceSignQueueItem : NSObject
{
    MNGuidanceSignView *_primarySignView;
    MNGuidanceSecondarySignView *_secondarySignView;
}

@property(retain, nonatomic) MNGuidanceSecondarySignView *secondarySignView; // @synthesize secondarySignView=_secondarySignView;
@property(retain, nonatomic) MNGuidanceSignView *primarySignView; // @synthesize primarySignView=_primarySignView;
- (void).cxx_destruct;

@end