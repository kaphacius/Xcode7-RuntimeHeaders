//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYGLAnalyzerHeuristic_FrameStatistics : DYGLAnalyzerHeuristic
{
    int numPointsRenderedCurrFrame;
    int numLinesRenderedCurrFrame;
    int numTrianglesRenderedCurrFrame;
    int numDrawCallsCurrFrame;
    int numEnablesCurrFrame;
    int numDisablesCurrFrame;
    int numGLCallsCurrFrame;
    int numPlatformCallsCurrFrame;
    int numTexUploadedCurrFrame;
    int texMemUploadedCurrFrame;
    int numGetCallsCurrFrame;
    int numReadPixelCallsCurrFrame;
    int numGLFinishCallsCurrFrame;
    int numGLFlushCallsCurrFrame;
    int numBuffersUploadedCurrFrame;
    long long bufferMemUploadedCurrFrame;
    int numSmallBatchDrawsCurrFrame;
    int numMSAAResolvesCurrFrame;
    int presentedRenderbufferWidth;
    int presentedRenderbufferHeight;
    int numGLErrorCurrFrame;
    int numUpdateCallsCurrFrame;
    int minDrawBatchPrimitives;
    int avgDrawBatchPrimitives;
    int maxDrawBatchPrimitives;
    int minTextureSize;
    int avgTextureSize;
    int maxTextureSize;
    int numberOfShaderChanges;
    int numberOpaqueTriangles;
    int numberBlendedTriangles;
    NSMutableIndexSet *smallBatchDrawCallFunctionIndices;
    NSMutableIndexSet *stateQueryFunctionIndices;
    int lightEnableFunctionIndices[8];
    DYAnalyzerFinding *currFinding;
}

+ (id)identifier;
- (void).cxx_destruct;
- (void)reportGLError:(unsigned int)arg1 withFunction:(const struct Function *)arg2;
- (void)reportDrawCallWithIncompletePrimitives:(const struct Function *)arg1;
- (void)reportDrawCallWithZeroPrimitives:(const struct Function *)arg1;
- (void)reportHeavyLightUsage:(const struct Function *)arg1;
- (void)reportExcessiveSmallBatchUsage:(const struct Function *)arg1;
- (void)reportExcessiveStateQueryUsage:(const struct Function *)arg1;
- (void)outputStreamStatistics;
- (void)resetStreamStatistics;
- (void)endBlock:(int)arg1;
- (void)startBlock:(int)arg1;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;
- (id)init;

@end