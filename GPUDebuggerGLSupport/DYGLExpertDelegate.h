//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DYGLExpertDelegate
- (DYCaptureArchive *)modifiedCaptureArchive;
- (DYCaptureArchive *)captureArchive;
- (void)reportFatalError:(NSError *)arg1;
- (void)playWithExperiments:(NSArray *)arg1;
- (void)endPhase:(DYGLExpertPhase *)arg1;
- (void)beginPhase:(DYGLExpertPhase *)arg1;
- (void)endPhaseBlock;
- (void)beginPhaseBlockWithNumPhases:(unsigned int)arg1 andTotalWeight:(unsigned int)arg2;
@end