//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDocument (IBPepperDocumentIntegration)
- (BOOL)isObjectInDynamicNotificationInterface:(id)arg1;
- (BOOL)isObjectInStaticNotificationInterface:(id)arg1;
- (BOOL)isObjectInAnyNotificationInterface:(id)arg1;
- (BOOL)isObjectInGlanceInterface:(id)arg1;
- (id)interfaceControllerForObject:(id)arg1;
- (void)unarchivePepperDataWithDocumentUnarchiver:(id)arg1;
- (void)archivePepperDataWithDocumentArchiver:(id)arg1;
- (long long)lastSavedPepperPluginVersion;
@end