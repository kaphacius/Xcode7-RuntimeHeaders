//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MIFilesystemScanner : NSObject
{
    id <MIFilesystemScannerDelegate> _delegate;
    unsigned int _options;
}

@property(retain) id <MIFilesystemScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)performScanWithError:(id *)arg1;
- (id)init;
- (id)initWithScanOptions:(unsigned int)arg1;
- (_Bool)_scanBundleContainersWithError:(id *)arg1;
- (_Bool)_scanBundleContainerType:(int)arg1 withError:(id *)arg2;
- (_Bool)_scanFrameworksLocationsWithError:(id *)arg1;
- (_Bool)_scanFrameworkDirectory:(id)arg1 withError:(id *)arg2;
- (_Bool)_scanAppsDirectory:(id)arg1 withError:(id *)arg2;

@end