//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUIWindow : IBUIView <IBDocumentArchiving, NSCoding>
{
    BOOL visibleAtLaunch;
    BOOL resizesToFullScreen;
}

+ (void)registerMarshallingRecordHandlers;
+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
@property BOOL resizesToFullScreen; // @synthesize resizesToFullScreen;
@property(getter=isVisibleAtLaunch) BOOL visibleAtLaunch; // @synthesize visibleAtLaunch;
- (BOOL)shouldStatusBarMetricsAlwaysOverlayContentForLayoutPolicy:(id)arg1;
- (id)effectiveSimulatedMetrics;
- (BOOL)canPresentSimulatedMetrics;
- (struct CGRect)internalStatusBarFrame;
- (BOOL)prefersCachedImageBasedDrawing;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibInspectedSupportsOrientationMetrics;
- (BOOL)ibInspectedSupportsBottomBarMetrics;
- (BOOL)ibInspectedSupportsTopBarMetrics;
- (struct CGSize)ibPreferredSize;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)doesSizeMatchLegacyIPhoneFullScreenSize:(struct CGSize)arg1;
- (BOOL)ibIsUserSizable;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
- (id)ibWidgetType;
- (id)ibPasteboardTypes;
- (id)ibDesignableContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end