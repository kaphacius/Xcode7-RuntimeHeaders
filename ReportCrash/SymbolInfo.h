//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SymbolInfo : NSObject
{
    unsigned char _uuid[16];
    unsigned long long _start;
    unsigned long long _size;
}

@property unsigned long long size; // @synthesize size=_size;
@property unsigned long long start; // @synthesize start=_start;
- (id)get_uuid;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char [16])arg3;

@end