//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NRRemoteObjectClassC : NRRemoteObject
{
}

- (void)sendPropertyResponseWithTimeout:(id)arg1 withProperties:(id)arg2 withRequestIdentifier:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;
- (void)sendPropertyRequestWithTimeout:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;
- (id)_unpackProperty:(id)arg1 name:(id *)arg2;
- (id)_unpackPropertyValue:(id)arg1;
- (id)packProperties:(id)arg1 thisIsAllOfThem:(_Bool)arg2;
- (id)_getSunriseDate;
- (id)_packProperty:(id)arg1 withValue:(id)arg2;
- (id)_packPropertyValue:(id)arg1;
- (void)sendPropertyChanges:(id)arg1 isAllProperties:(_Bool)arg2 withSentBlock:(CDUnknownBlockType)arg3;
- (void)idsHandlePropertyRequest:(id)arg1;
- (id)_unpackProperties:(id)arg1;
- (void)idsHandlePropertiesChanged:(id)arg1;
- (void)registerProtobufHandlers;
- (id)initWithDelegate:(id)arg1;

@end