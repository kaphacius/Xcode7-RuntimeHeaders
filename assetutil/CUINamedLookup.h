//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CUINamedLookup : NSObject
{
    NSString *_name;
    CUIRenditionKey *_key;
    NSString *_signature;
    unsigned long long _storageRef;
    unsigned int _odContent:1;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)setRepresentsOnDemandContent:(BOOL)arg1;
@property(readonly, nonatomic) BOOL representsOnDemandContent;
- (id)renditionKey;
- (id)renditionName;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_cacheRenditionProperties;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end