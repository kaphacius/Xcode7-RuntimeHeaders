//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRToolbarCompressionAnimator : NSObject
{
    double _compression;
    double _targetCompression;
    double _lastCompression;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double lastCompression; // @synthesize lastCompression=_lastCompression;
@property(nonatomic) double targetCompression; // @synthesize targetCompression=_targetCompression;
@property(nonatomic) double compression; // @synthesize compression=_compression;
- (void).cxx_destruct;
- (void)_tick:(double)arg1;
- (void)_handleDisplayLink:(id)arg1;
- (void)_targetCompressionChanged;
- (void)applyDeltaToCompression:(double)arg1;
- (void)expandToolbarAnimated:(_Bool)arg1;
- (void)compressToolbarAnimated:(_Bool)arg1;
- (void)dealloc;

@end