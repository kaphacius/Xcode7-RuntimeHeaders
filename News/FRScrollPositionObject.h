//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRScrollPositionObject : NSObject <NSCoding>
{
    _Bool _wantsRestoreToScrollIdentifier;
    NSString *_sourceIdentifier;
    struct CGPoint _scrollOffset;
    struct CGSize _windowSize;
}

@property(nonatomic) _Bool wantsRestoreToScrollIdentifier; // @synthesize wantsRestoreToScrollIdentifier=_wantsRestoreToScrollIdentifier;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) struct CGPoint scrollOffset; // @synthesize scrollOffset=_scrollOffset;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end