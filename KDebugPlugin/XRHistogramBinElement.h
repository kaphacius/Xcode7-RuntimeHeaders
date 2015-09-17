//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRHistogramBinElement : XRImmutableElement <NSCoding>
{
    NSString *_name;
    NSColor *_color;
    NSNumber *_min;
    NSNumber *_max;
}

@property(readonly, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(readonly, nonatomic) NSNumber *min; // @synthesize min=_min;
@property(readonly, nonatomic) NSColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)elementWithMax:(id)arg1;
- (id)elementWithMin:(id)arg1;
- (id)elementWithColor:(id)arg1;
- (id)elementWithName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 color:(id)arg2 min:(id)arg3 max:(id)arg4;

@end