//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUDebuggerLog : IDEActivityLogSection <DVTSimpleSerialization>
{
    NSString *text;
}

+ (id)defaultLogSectionDomainType;
+ (id)assetBundle;
@property(retain) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)navigableItem_documentType;
- (void)addLogItem:(id)arg1;
- (void)_generateProgramLogContent:(id)arg1;
- (void)_generateLibraryLogContent:(id)arg1;
- (id)_libraryLogText;
- (id)_timestampFromInfoLog:(id)arg1;
- (id)initLogWithTitle:(id)arg1 serializationPath:(id)arg2;

@end