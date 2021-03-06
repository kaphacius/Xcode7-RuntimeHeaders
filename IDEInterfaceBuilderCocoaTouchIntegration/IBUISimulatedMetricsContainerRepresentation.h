//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUISimulatedMetricsContainerRepresentation : NSObject <NSCopying, IBBinaryArchiving>
{
    NSValue *_simulatedScreenSize;
    IBUISimulatedBarMetrics *_simulatedTopBarMetrics;
    IBUISimulatedBarMetrics *_simulatedBottomBarMetrics;
    NSNumber *_statusBarStyle;
}

@property(retain, nonatomic) NSNumber *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) IBUISimulatedBarMetrics *simulatedBottomBarMetrics; // @synthesize simulatedBottomBarMetrics=_simulatedBottomBarMetrics;
@property(retain, nonatomic) IBUISimulatedBarMetrics *simulatedTopBarMetrics; // @synthesize simulatedTopBarMetrics=_simulatedTopBarMetrics;
@property(retain, nonatomic) NSValue *simulatedScreenSize; // @synthesize simulatedScreenSize=_simulatedScreenSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end