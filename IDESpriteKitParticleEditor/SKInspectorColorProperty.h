//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKInspectorColorProperty : IDEInspectorProperty
{
    NSColorWell *bgColorWell;
    IDEInspectorKeyPath *_valueKeyPath;
    NSColor *_defaultColor;
}

- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;

@end