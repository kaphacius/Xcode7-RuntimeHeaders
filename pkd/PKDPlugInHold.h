//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PKDPlugInHold : NSObject
{
    NSUUID *_uuid;
    NSSet *_blocked;
    PKDXpcClient *_client;
    NSDate *_created;
}

@property(retain) NSDate *created; // @synthesize created=_created;
@property __weak PKDXpcClient *client; // @synthesize client=_client;
@property(retain) NSSet *blocked; // @synthesize blocked=_blocked;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPlugIns:(id)arg1 forClient:(id)arg2;

@end