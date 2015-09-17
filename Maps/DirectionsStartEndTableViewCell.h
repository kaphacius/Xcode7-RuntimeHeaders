//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DirectionsStartEndTableViewCell : UITableViewCell
{
    UILabel *_overviewLabel;
    UIImageView *_pinView;
    _Bool _isDimmedStep;
    _Bool _isNightMode;
    _Bool _isLightContent;
    long long _startEndPinType;
}

+ (id)reuseIdentifier;
@property(nonatomic) long long startEndPinType; // @synthesize startEndPinType=_startEndPinType;
@property(nonatomic) _Bool isLightContent; // @synthesize isLightContent=_isLightContent;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
- (void).cxx_destruct;
- (void)setBackgroundView:(id)arg1;
- (id)_imageForType;
- (void)_updateStyleValuesFromTheme;
- (void)setIsDimmedStep:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGRect)_stepRect;
- (void)setDirectionsText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end