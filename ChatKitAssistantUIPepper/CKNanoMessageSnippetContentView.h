//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CKNanoMessageSnippetContentView : UIView
{
    CKTextBalloonView *_balloonImageView;
    NSString *_messageBody;
    int _balloonType;
}

@property(nonatomic) int balloonType; // @synthesize balloonType=_balloonType;
@property(retain, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end