//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSelfCompressingDataWrapper : NSObject
{
    NSData *originalData;
    NSData *compressedData;
}

@property(retain) NSData *compressedData; // @synthesize compressedData;
@property(retain) NSData *originalData; // @synthesize originalData;
- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1 shouldCompress:(BOOL)arg2;

@end