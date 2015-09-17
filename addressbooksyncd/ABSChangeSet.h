//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ABSChangeSet : NSObject
{
    NSMutableArray *_added;
    NSMutableArray *_modified;
    NSMutableArray *_deleted;
}

@property(retain, nonatomic) NSMutableArray *deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSMutableArray *modified; // @synthesize modified=_modified;
@property(retain, nonatomic) NSMutableArray *added; // @synthesize added=_added;
- (void).cxx_destruct;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (void)addChanges:(id)arg1;
- (id)CPSafeDescription;
- (id)description;
- (id)init;

@end