//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NCABUsageReporter : NSObject <NSSUsageBundleProtocol>
{
}

@property(readonly, nonatomic) NSDictionary *usagesInBytes;
@property(readonly, nonatomic) NSString *localizedDisplayName;
@property(readonly, nonatomic) NSString *bundleIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isPurgeable) _Bool purgeable;
@property(readonly) Class superclass;

@end