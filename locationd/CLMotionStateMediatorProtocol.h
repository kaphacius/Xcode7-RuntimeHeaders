//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CLMotionStateMediatorProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetDoSync:(void (^)(struct CLMotionStateMediator *))arg1;
- (void)doAsync:(void (^)(struct CLMotionStateMediator *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLMotionStateMediator *))arg1;
@end