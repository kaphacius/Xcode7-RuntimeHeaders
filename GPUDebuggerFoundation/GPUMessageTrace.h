//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUMessageTrace : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _graphicsAPI;
    NSString *_productType;
    NSString *_version;
    struct GPUMessageTraceActivity _frameCapture;
    struct GPUMessageTraceActivity _shaderProfiler;
    BOOL _appResumed;
    BOOL _replayedExportedCapture;
    unsigned int _numShaderEdits;
    struct GPUMessageTraceActivity _navigationUpdate;
    unsigned int _numNavUpdates;
    double _navUpdateMax;
    double _navUpdateAverage;
    NSError *_firstErrorInSession;
}

+ (id)sharedTrace;
- (void).cxx_destruct;
- (void)_resetUsageStatistics;
- (void)reportUsageStatistics;
- (void)_updateFirstErrorInSession:(id)arg1;
- (void)recordError:(id)arg1;
- (void)recordNavigationUpdateEnd;
- (void)recordNavigationUpdateStart;
- (void)recordShaderEdit:(BOOL)arg1;
- (void)recordReplayedExportedCapture;
- (void)recordAppResumed;
- (void)recordShaderProfilerCompleted:(id)arg1;
- (void)recordShaderProfilerStarted;
- (void)recordCaptureCompleted:(id)arg1;
- (void)recordCaptureStarted;
- (void)recordGraphicsAPIUsage:(unsigned int)arg1 andDeviceInfo:(id)arg2;
- (id)init;

@end