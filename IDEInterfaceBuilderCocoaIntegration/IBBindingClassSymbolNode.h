//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBBindingClassSymbolNode : NSObject
{
    NSString *className;
    IBBindingClassSymbolNode *parentNode;
    NSString *parentKey;
}

@property(retain) IBBindingClassSymbolNode *parentNode; // @synthesize parentNode;
@property(copy) NSString *parentKey; // @synthesize parentKey;
@property(copy) NSString *className; // @synthesize className;
- (void).cxx_destruct;
- (id)initWithClassName:(id)arg1 parentNode:(id)arg2 parentKey:(id)arg3;

@end