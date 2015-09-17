//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADRemoteNotificationToken : NSObject <ADRemoteUIServicesCancelable>
{
    _Bool _canceled;
    struct __CFUserNotification *_notification;
    CDUnknownBlockType _completion;
}

+ (id)allTokens;
+ (id)existingTokenForNotification:(struct __CFUserNotification *)arg1;
+ (id)tokenForNotificationDescription:(id)arg1 flags:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)notificationsToTokens;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)handleResponse:(unsigned long long)arg1;
- (void)modalRequest;
- (void)asyncRequest;
- (void)cancelRequest;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end