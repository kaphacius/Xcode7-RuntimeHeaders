//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRVMFaultEvent : XRKEvent
{
    unsigned long long _faultAddress;
    unsigned int _typeArg;
    unsigned int _retValue;
    unsigned long long _cpuTime;
    unsigned long long _waitTime;
}

+ (int)categoryIDForEventCode:(CDUnion_f44b072f)arg1 faultType:(unsigned int)arg2;
+ (int)categoryIDForDescription:(id)arg1;
+ (id)descriptionForCategoryID:(int)arg1;
+ (id)descriptionForEventCode:(CDUnion_f44b072f)arg1 faultType:(unsigned int)arg2;
+ (void)configureDescriptor:(id)arg1 forStorageManager:(id)arg2;
- (id)rawEventCodeDescription;
- (id)eventTypeDescription;
- (id)addressDescription;
- (int)categoryID;
- (unsigned long long)waitTime;
- (unsigned long long)cpuTime;
- (unsigned long long)duration;
- (unsigned long long)address;

@end