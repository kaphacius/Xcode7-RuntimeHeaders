//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRKEventsIndexAdapterTable : XRDatasetAdapterTable
{
    XRKEventsIndex *_index;
}

- (void).cxx_destruct;
- (id)openCursor;
- (BOOL)getColumnToEnclosureFieldMap:(const int **)arg1 count:(char *)arg2;
- (const struct XRSQLTableDefinition *)tableDefinition;
- (id)initWithIndex:(id)arg1;

@end