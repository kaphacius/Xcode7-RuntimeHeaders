//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBToolApplication : NSApplication
{
    NSMutableArray *hardErrors;
    NSMutableArray *softErrors;
    NSMutableDictionary *pluginsLoadedForThisSession;
}

- (id)overridingPluginIdentifierPathsForPluginController:(id)arg1;
- (id)defaultPluginsForPluginController:(id)arg1;
- (BOOL)shouldPersistPluginsForPluginController:(id)arg1;
- (id)persistentDomainNameForPluginController:(id)arg1;
- (BOOL)honorsPropertyLocking;
- (BOOL)presentsInterface;
- (void)addSoftError:(id)arg1;
- (void)addHardError:(id)arg1;
- (void)addPluginLoadedForThisSession:(id)arg1 withPath:(id)arg2;
- (void)clearPluginsLoadedForThisSession;
- (id)pluginsLoadedForThisSession;
- (void)clearAllErrors;
- (void)clearSoftErrors;
- (void)clearHardErrors;
- (id)allErrors;
- (id)hardErrors;
- (id)softErrors;
- (BOOL)presentError:(id)arg1;
- (void)dealloc;
- (id)init;

@end