//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBulletinSystemStateAdapter : NSObject
{
    BBSystemStateProvider *_provider;
}

+ (id)sharedInstance;
@property(retain, nonatomic) BBSystemStateProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)lockScreenStateDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end