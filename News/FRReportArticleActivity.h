//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRReportArticleActivity : UIActivity
{
    id <FRReportActivityDelegate> _delegate;
    id <FCHeadlineProviding> _headline;
}

@property(nonatomic) __weak id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(nonatomic) __weak id <FRReportActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithHeadline:(id)arg1;

@end