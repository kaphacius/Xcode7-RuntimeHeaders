//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CUISEcoModeConfirmationAlertManager <NSObject>
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType handler;
@property(nonatomic) unsigned int style;
- (void)present;
@end