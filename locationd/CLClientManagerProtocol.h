//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CLClientManagerProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetDoSync:(void (^)(struct CLClientManager *))arg1;
- (void)doAsync:(void (^)(struct CLClientManager *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLClientManager *))arg1;
- (void)setClients:(CLNotifierData *)arg1 significantLocationVisitTo:(_Bool)arg2;
- (void)setClients:(CLNotifierData *)arg1 significantLocationChangeTo:(_Bool)arg2;
- (void)setClients:(CLNotifierData *)arg1 regionOfType:(int)arg2 to:(_Bool)arg3;
@end