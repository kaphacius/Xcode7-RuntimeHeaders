//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3BuildSettingsGroupRowCell : DVTImageAndTextCell
{
    NSArray *_subtitles;
    double _subtitlesTopOffset;
    double _subtitlesLeadingOffset;
}

@property(nonatomic) double subtitlesLeadingOffset; // @synthesize subtitlesLeadingOffset=_subtitlesLeadingOffset;
@property(nonatomic) double subtitlesTopOffset; // @synthesize subtitlesTopOffset=_subtitlesTopOffset;
@property(copy, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
- (void).cxx_destruct;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)addTrackingAreasForView:(id)arg1 inRect:(struct CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(struct CGPoint)arg4;
- (id)subtitleTextColor;
- (struct CGRect)subtitleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)subtitleBoundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2;
- (void)drawSubtitleWithCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_enumerateSubtitlesWithCellFrame:(struct CGRect)arg1 inView:(id)arg2 applyingBlock:(CDUnknownBlockType)arg3;

@end