//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRKEventsIndexAdapterCursor : XRDatasetAdapterCursor
{
    XRKEventsIndex *_index;
    XRKEventsIndexCursor *_indexCursor;
    struct XRKEventRef _currentRef;
}

- (void).cxx_destruct;
- (int)pushColumn:(unsigned char)arg1 toSQLite3:(struct sqlite3_context *)arg2;
- (void)next;
- (BOOL)startCursorWithEnclosure:(id)arg1;
- (id)initWithIndex:(id)arg1;

@end