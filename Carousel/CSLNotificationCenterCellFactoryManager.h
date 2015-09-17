//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLNotificationCenterCellFactoryManager : NSObject <CUISNotificationCenterCellFactoryDelegate>
{
    NSArray *_containers;
    NSMutableDictionary *_factoriesBySectionID;
    id <CUISNotificationCenterCellFactory> _defaultFactory;
    NSString *_bundleRootPath;
}

- (void).cxx_destruct;
- (id)_factoryForBulletin:(id)arg1;
- (void)_loadFactories;
- (void)_insertFactoryContainer:(id)arg1 intoSectionIDDictionary:(id)arg2;
- (void)_removeFactoryContainer:(id)arg1 fromSectionIDDictionary:(id)arg2;
- (id)_factoryContainerContainingCellFactory:(id)arg1;
- (void)_updateFactoryContainer:(id)arg1 inSectionIDDictionary:(id)arg2;
- (void)cellFactory:(id)arg1 requestDismissBulletin:(id)arg2;
- (void)cellFactory:(id)arg1 didUpdateSupportedSectionIDs:(id)arg2;
- (_Bool)performActionForBulletin:(id)arg1;
- (_Bool)willReconfigureCellWhenModifyingBulletin:(id)arg1 withBulletin:(id)arg2;
- (id)reuseIdentifierForBulletin:(id)arg1;
- (unsigned int)iconShapeForBulletin:(id)arg1;
- (float)heightForCellDisplayingBulletin:(id)arg1;
- (void)configureCell:(id)arg1 withBulletin:(id)arg2 appName:(id)arg3 icon:(id)arg4 iconStyle:(unsigned int)arg5;
- (id)newCellForBulletin:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end