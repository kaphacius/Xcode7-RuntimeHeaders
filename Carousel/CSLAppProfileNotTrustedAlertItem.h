//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLAppProfileNotTrustedAlertItem : CSLGenericAlertItem
{
    _Bool _launchApp;
    IOSSHLApplication *_application;
}

@property(nonatomic) _Bool launchApp; // @synthesize launchApp=_launchApp;
@property(readonly, nonatomic) IOSSHLApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)configureAlert;
- (id)initWithApplication:(id)arg1;

@end