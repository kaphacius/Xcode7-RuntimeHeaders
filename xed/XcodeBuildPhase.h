//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XcodeBuildPhase : XcodeProjectItem
{
}

@property(readonly, copy) XcodeTarget *target;
@property(readonly, copy) NSString *name;
- (id)buildFiles;

@end