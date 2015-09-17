//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IOSSHLSceneBackgroundedStatusAssertion : NSObject
{
    NSSet *_scenes;
    NSObject<OS_dispatch_queue> *_synchronizingQueue;
    BSAction *_invalidationAction;
    CDUnknownBlockType _synchronousInvalidationBlock;
}

@property(readonly, copy, nonatomic) NSSet *scenes; // @synthesize scenes=_scenes;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithScenes:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end