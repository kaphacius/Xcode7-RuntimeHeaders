//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SCNProgramDelegate <NSObject>

@optional
- (BOOL)programIsOpaque:(SCNProgram *)arg1;
- (void)program:(SCNProgram *)arg1 handleError:(NSError *)arg2;
- (void)program:(SCNProgram *)arg1 unbindValueForSymbol:(NSString *)arg2 atLocation:(unsigned int)arg3 programID:(unsigned int)arg4 renderer:(SCNRenderer *)arg5;
- (BOOL)program:(SCNProgram *)arg1 bindValueForSymbol:(NSString *)arg2 atLocation:(unsigned int)arg3 programID:(unsigned int)arg4 renderer:(SCNRenderer *)arg5;
@end