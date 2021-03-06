//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface UsageApp : NSObject
{
    _Bool _systemApp;
    float _staticSize;
    float _dynamicSize;
    float _specialSize;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
}

@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(nonatomic) float specialSize; // @synthesize specialSize=_specialSize;
@property(nonatomic) float dynamicSize; // @synthesize dynamicSize=_dynamicSize;
@property(nonatomic) float staticSize; // @synthesize staticSize=_staticSize;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) float totalSize;
@property(readonly, nonatomic) float dataSize;

@end