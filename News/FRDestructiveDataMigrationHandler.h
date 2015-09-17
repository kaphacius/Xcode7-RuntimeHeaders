//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRDestructiveDataMigrationHandler : NSObject
{
    id <FCDestructivePrivateDataActionProvider> _privateDataActionProvider;
    NSString *_defaultsDomain;
    NSArray *_stickyDefaultsKeys;
}

@property(copy, nonatomic) NSArray *stickyDefaultsKeys; // @synthesize stickyDefaultsKeys=_stickyDefaultsKeys;
@property(copy, nonatomic) NSString *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
@property(retain, nonatomic) id <FCDestructivePrivateDataActionProvider> privateDataActionProvider; // @synthesize privateDataActionProvider=_privateDataActionProvider;
- (void).cxx_destruct;
- (void)handleMigration;
- (id)initWithPrivateDataActionProvider:(id)arg1 defaultsDomain:(id)arg2 stickyDefaultsKeys:(id)arg3;
- (id)init;

@end