//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRSymModSetting : NSObject
{
    BOOL _update;
    NSString *_name;
    NSMutableArray *_children;
    NSMutableArray *_hiddenChildren;
    NSString *_currentSetting;
    NSString *_desiredSetting;
}

@property(retain, nonatomic) NSString *desiredSetting; // @synthesize desiredSetting=_desiredSetting;
@property(retain, nonatomic) NSString *currentSetting; // @synthesize currentSetting=_currentSetting;
@property(retain, nonatomic) NSMutableArray *hiddenChildren; // @synthesize hiddenChildren=_hiddenChildren;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(nonatomic) BOOL update; // @synthesize update=_update;

@end