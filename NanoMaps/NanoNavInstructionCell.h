//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoNavInstructionCell : UICollectionViewCell
{
    NanoNavInstructionView *_instruction;
}

@property(readonly, nonatomic) NanoNavInstructionView *instruction; // @synthesize instruction=_instruction;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end