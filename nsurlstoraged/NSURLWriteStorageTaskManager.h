//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSURLWriteStorageTaskManager : NSURLStorageTaskManager
{
    long long __numOfOperationsExecuted;
}

@property long long _numOfOperationsExecuted; // @synthesize _numOfOperationsExecuted=__numOfOperationsExecuted;
- (id)initWithPersistentPath:(id)arg1 maxSize:(long long)arg2 sandboxExtension:(id)arg3 clientPid:(int)arg4 withIdentity:(id)arg5;

@end