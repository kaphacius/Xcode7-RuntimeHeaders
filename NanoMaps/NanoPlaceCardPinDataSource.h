//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoPlaceCardPinDataSource : _MKNanoPlaceCardSectionData
{
}

- (void)notifyDelegateForActionAtRow:(unsigned int)arg1;
- (id)cellForRow:(unsigned int)arg1 inTableView:(id)arg2;
- (id)title;
- (int)numberOfRows;

// Remaining properties
@property(nonatomic) __weak id <NanoPlaceCardDroppedPinDataDelegate> delegate; // @dynamic delegate;

@end