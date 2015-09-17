//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUISimulatedBarMetrics : NSObject <NSCoding, IBUISimulatedMetrics, NSCopying, IBDocumentArchiving, IBBinaryArchiving>
{
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)simulatedBarMetricsByRemovingTintColor;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)promptedInstance;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;
- (unsigned long long)barEdge;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (double)heightForTargetRuntime:(id)arg1;
- (void)applyMetricsToBar:(id)arg1;
@property(readonly) NSString *displayName;
- (id)ibWidgetType;
- (Class)barClass;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end