//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDAxisLabel : NSObject
{
    NSString *_text;
    id _location;
    UIColor *_labelColor;
    UIFont *_labelFont;
    CAFilter *_compositingFilter;
}

@property(retain, nonatomic) CAFilter *compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) id location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;

@end