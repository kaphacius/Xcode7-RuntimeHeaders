//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchAddressBookOperation : NSOperation
{
    void *_addressBook;
    NSString *_searchQuery;
    id <SearchAddressBookOperationDelegate> delegate;
}

@property(nonatomic) __weak id <SearchAddressBookOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)main;
- (void)dealloc;
- (id)initWithSearchQuery:(id)arg1 addressBook:(void *)arg2;

@end