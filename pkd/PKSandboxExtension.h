//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PKSandboxExtension : NSObject
{
    NSString *_token;
    long long _handle;
}

@property long long handle; // @synthesize handle=_handle;
@property(retain) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)expel;
- (void)consume;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;

@end