//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBlockedViewController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_tryAgainInLabel;
    UILabel *_timeLabel;
    UILabel *_lockoutLabel;
    NSBundle *_stringsBundle;
    NSNumberFormatter *_minuteFormatter;
    NSTimer *_updateTimer;
    _Bool _tryAgainTextOnTop;
}

- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_updateTimeDisplayAndScheduleTimer;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end