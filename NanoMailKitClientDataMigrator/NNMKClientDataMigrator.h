//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NNMKClientDataMigrator : DataClassMigrator
{
    float _progress;
    NNMKDatabase *_database;
}

@property float progress; // @synthesize progress=_progress;
@property(retain) NNMKDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (_Bool)_needsMigration;
- (float)migrationProgress;
- (float)estimatedDuration;
- (id)dataClassName;
- (_Bool)performMigration;
- (id)init;

@end