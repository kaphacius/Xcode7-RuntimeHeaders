//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSMutableDictionary *)properties;
- (NSMutableDictionary *)dictionary;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)init;
@end