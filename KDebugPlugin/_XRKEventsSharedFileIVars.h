//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _XRKEventsSharedFileIVars : NSObject
{
    NSRecursiveLock *lock;
    NSURL *intermediatesURL;
    NSFileHandle *writeableFileHandle;
    int version;
    BOOL loadingError;
}

- (void).cxx_destruct;
- (id)init;

@end