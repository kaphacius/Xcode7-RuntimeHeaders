//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLClientManagerUsageSyncMessage : NSObject
{
    NSString *_messageType;
    NSDictionary *_dataPayload;
    int _priority;
    NSDictionary *_idsOptions;
}

@property(retain, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSDictionary *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (_Bool)isMessageOfType:(id)arg1;
- (void)dealloc;

@end