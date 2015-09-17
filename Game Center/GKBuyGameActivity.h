//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKBuyGameActivity : UIActivity
{
    GKGame *_game;
    UIImage *_icon;
    NSString *_context;
}

+ (id)buyGameActivityWithContext:(id)arg1;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)_canPerformWithSuppliedActivityItems:(id)arg1;
- (id)_activityImage;
- (id)styleIconForActivityImage:(id)arg1;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end