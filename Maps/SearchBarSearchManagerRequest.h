//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchBarSearchManagerRequest : NSObject
{
    NSString *_searchName;
    int _searchMode;
    long long _types;
}

@property(nonatomic) long long types; // @synthesize types=_types;
@property(nonatomic) int searchMode; // @synthesize searchMode=_searchMode;
@property(copy, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
- (void).cxx_destruct;

@end