//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRKEventsCategory : XRAbstractAggregator
{
    unsigned int _categoryIdentifier;
    unsigned int _categorySerialNumber;
    XRThread *_thread;
}

@property unsigned int serialNumber; // @synthesize serialNumber=_categorySerialNumber;
@property(readonly) unsigned int categoryID; // @synthesize categoryID=_categoryIdentifier;
- (void).cxx_destruct;
- (id)baseQuery;
- (id)initWithCategoryIdentifier:(unsigned int)arg1 thread:(id)arg2 run:(id)arg3;

@end