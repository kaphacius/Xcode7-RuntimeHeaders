//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBPlatformToolFailure : NSObject <IBDiagnosticsHandlerConfigurator>
{
    NSError *_error;
    NSException *_exception;
    NSString *_assertionShortMessage;
    NSString *_assertionLongMessage;
}

+ (id)failureWithAssertionShortMessage:(id)arg1 longMessage:(id)arg2;
+ (id)failureWithException:(id)arg1 assertionShortMessage:(id)arg2;
+ (id)failureWithException:(id)arg1;
+ (id)failureWithError:(id)arg1;
@property(retain, nonatomic) NSString *assertionLongMessage; // @synthesize assertionLongMessage=_assertionLongMessage;
@property(retain, nonatomic) NSString *assertionShortMessage; // @synthesize assertionShortMessage=_assertionShortMessage;
@property(retain, nonatomic) NSException *exception; // @synthesize exception=_exception;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)configureDiagnosticsHandler:(id)arg1;
- (id)exceptionBacktrace;
- (id)initWithError:(id)arg1 exception:(id)arg2 assertionShortMessage:(id)arg3 assertionLongMessage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end