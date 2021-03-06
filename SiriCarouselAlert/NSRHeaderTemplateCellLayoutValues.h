//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRHeaderTemplateCellLayoutValues : NSObject <NSRCachedLayoutValues>
{
    float _height;
    float _titleLabelBaselineOriginY;
    float _subtitleLabelBaselineOriginY;
    struct CGSize _titleLabelFitSize;
    struct CGSize _subtitleLabelFitSize;
}

@property(nonatomic) float subtitleLabelBaselineOriginY; // @synthesize subtitleLabelBaselineOriginY=_subtitleLabelBaselineOriginY;
@property(nonatomic) float titleLabelBaselineOriginY; // @synthesize titleLabelBaselineOriginY=_titleLabelBaselineOriginY;
@property(nonatomic) struct CGSize subtitleLabelFitSize; // @synthesize subtitleLabelFitSize=_subtitleLabelFitSize;
@property(nonatomic) struct CGSize titleLabelFitSize; // @synthesize titleLabelFitSize=_titleLabelFitSize;
@property(nonatomic) float height; // @synthesize height=_height;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end