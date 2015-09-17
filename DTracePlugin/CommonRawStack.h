//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CommonRawStack <NSCoding, NSObject>
- (BOOL)bottomIsTruncated;
- (void)setBottomIsTruncated:(BOOL)arg1;
- (BOOL)topIsTruncated;
- (void)setTopIsTruncated:(BOOL)arg1;
- (int)pid;
- (long long)count;
- (void)enumerateFramesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 block:(void (^)(struct XRCommonFrameInfo *, char *))arg3;

@optional
- (long long)kernelFrameCount;
- (unsigned long long *)frames;
@end