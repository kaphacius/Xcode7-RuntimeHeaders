//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRAnalyticsPayloadItem : NSObject
{
    NSDictionary *_sessionDictionary;
    NSArray *_eventDictionaries;
}

@property(copy, nonatomic) NSArray *eventDictionaries; // @synthesize eventDictionaries=_eventDictionaries;
@property(copy, nonatomic) NSDictionary *sessionDictionary; // @synthesize sessionDictionary=_sessionDictionary;
- (void).cxx_destruct;
- (id)initWithSessionDictionary:(id)arg1 eventDictionaries:(id)arg2;

@end