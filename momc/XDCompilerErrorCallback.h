//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDCompilerErrorCallback : XDGenericErrorCallback
{
}

- (void)createWarningForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createErrorForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)_emitBuildLogOutputForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 isError:(BOOL)arg4 documentURL:(id)arg5;

@end