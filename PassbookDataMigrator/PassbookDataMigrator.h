//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PassbookDataMigrator : DataClassMigrator
{
}

- (float)migrationProgress;
- (float)estimatedDuration;
- (_Bool)performMigration;
- (id)dataClassName;

@end