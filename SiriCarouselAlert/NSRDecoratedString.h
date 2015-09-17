//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRDecoratedString : NSObject
{
    NSArray *_deemphasizedRegions;
    NSArray *_highlightedRegions;
    NSArray *_tintedRegions;
    NSArray *_superscriptedRegions;
    NSArray *_subscriptedRegions;
    NSArray *_smallCapsRegions;
    NSArray *_timeColonRegions;
    _Bool _hyphenated;
    float _forcedLeading;
    NSString *_string;
}

+ (id)decoratedStringWithString:(id)arg1 deemphasizedRegions:(id)arg2 highlightedRegions:(id)arg3 tintedRegions:(id)arg4 superscriptedRegions:(id)arg5 subscriptedRegions:(id)arg6 smallCapsRegions:(id)arg7 timeColonRegions:(id)arg8;
+ (id)decoratedStringWithString:(id)arg1;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)setForcedLeading:(float)arg1;
- (float)forcedLeading;
- (void)setHyphenated:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setDeemphasized:(_Bool)arg1;
- (_Bool)hasSuperscript;
- (_Bool)isDeemphasized;
- (struct CGRect)_boundingRectWithSize:(struct CGSize)arg1 textStyle:(int)arg2 singleLine:(_Bool)arg3;
- (struct CGRect)singleLineBoundingRectWithMaximumSize:(struct CGSize)arg1 textStyle:(int)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 textStyle:(int)arg2;
- (id)attributedStringWithFont:(id)arg1 textColor:(id)arg2 textAlignment:(int)arg3;
- (id)attributedStringWithTextStyle:(int)arg1 textColor:(id)arg2 textAlignment:(int)arg3;
- (id)_attributedStringWithFont:(id)arg1 highlightedFont:(id)arg2 smallCapsFont:(id)arg3 timeColonFont:(id)arg4 textColor:(id)arg5 textAlignment:(int)arg6;
- (id)attributedStringWithFont:(id)arg1 highlightedFont:(id)arg2 smallCapsFont:(id)arg3 timeColonFont:(id)arg4;
- (id)initWithString:(id)arg1 deemphasizedRegions:(id)arg2 highlightedRegions:(id)arg3 tintedRegions:(id)arg4 superscriptedRegions:(id)arg5 subscriptedRegions:(id)arg6 smallCapsRegions:(id)arg7 timeColonRegions:(id)arg8;
- (id)initWithString:(id)arg1;

@end