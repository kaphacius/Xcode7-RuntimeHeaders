//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XcodeInsertionPoint : SBObject
{
}

- (void)scmUpdateToRevision:(id)arg1;
- (void)scmRefresh;
- (void)scmCompareWith:(id)arg1 withRevision:(id)arg2;
- (void)scmCommitWithMessage:(id)arg1;
- (void)scmClearStickyTags;
- (id)upgrade;
- (id)launch;
- (id)debug;
- (void)removeFrom:(id)arg1;
- (void)addTo:(id)arg1;
- (id)cleanRemovingPrecompiledHeaders:(BOOL)arg1 transcript:(BOOL)arg2 using:(id)arg3;
- (id)buildStaticAnalysis:(BOOL)arg1 transcript:(BOOL)arg2 using:(id)arg3;
- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(copy) NSString *contents;

@end