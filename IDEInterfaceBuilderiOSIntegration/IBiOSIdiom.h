//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBiOSIdiom : IBCocoaTouchIdiom
{
}

- (double)masterWidthForScreenWidth:(double)arg1;
- (id)simDeviceTypeForToolDescription:(id)arg1 error:(id *)arg2;
- (void)populateAdditionalSimDeviceTypeSearchPaths:(id)arg1;
- (id)designablesAgentApplicationName;
- (id)designablesAgentName;
- (id)cocoaTouchApplicationName;
- (id)screenMetricsWithArchiveIdentifier:(id)arg1;
- (id)allScreenMetricsForArchiving;
- (Class)storyboardVerifierClass;
- (Class)xibVerifierClass;
- (id)platform;
- (id)pluginName;

@end