//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol ASRuntimeFixProtocol <NSObject>
- (NSSet *)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(_Bool)arg1;
- (int)fixBasicAccountIfNeeded:(BasicAccount *)arg1 loggingMessage:(NSString *)arg2;
@end