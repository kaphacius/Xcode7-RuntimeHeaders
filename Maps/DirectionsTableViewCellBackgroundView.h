//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DirectionsTableViewCellBackgroundView : UIView
{
    _Bool _forLightContent;
    _Bool _highlighted;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool forLightContent; // @synthesize forLightContent=_forLightContent;
- (id)_backgroundColorForLightContent:(_Bool)arg1 highlighted:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end