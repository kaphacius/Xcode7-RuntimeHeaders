//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLTwoPhaseHexLayout : CSLHexLayout
{
    CSLHexLayout *_startLayout;
    CSLHexLayout *_endLayout;
    _Bool _startContentOffsetInvarient;
    _Bool _endContentOffsetInvarient;
    float _transitionPercentage;
}

@property(nonatomic) float transitionPercentage; // @synthesize transitionPercentage=_transitionPercentage;
@property(nonatomic, getter=isEndContentOffsetInvarient) _Bool endContentOffsetInvarient; // @synthesize endContentOffsetInvarient=_endContentOffsetInvarient;
@property(nonatomic, getter=isStartContentOffsetInvarient) _Bool startContentOffsetInvarient; // @synthesize startContentOffsetInvarient=_startContentOffsetInvarient;
- (void).cxx_destruct;
- (struct Hex)hexAtPoint:(struct CGPoint)arg1;
- (CDStruct_727cf631)layoutAttributesForItemAtHex:(struct Hex)arg1;
- (void)updateWithBounds:(struct CGRect)arg1;
- (void)setTargetHex:(struct Hex)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)description;
- (id)init;
- (id)initWithStartLayout:(id)arg1 endLayout:(id)arg2;

@end