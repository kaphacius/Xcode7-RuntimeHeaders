//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface QuickLookDocumentWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_filePathAccessedOnDispatchQueue;
    _Bool _hasFinishedWriting;
    QuickLookDocument *_quickLookDocument;
}

@property(readonly, nonatomic) _Bool hasFinishedWriting; // @synthesize hasFinishedWriting=_hasFinishedWriting;
@property(readonly, nonatomic) QuickLookDocument *quickLookDocument; // @synthesize quickLookDocument=_quickLookDocument;
- (void).cxx_destruct;
- (void)writeDataAndClose:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFileName:(id)arg1 uti:(id)arg2;
@property(copy, nonatomic) NSString *filePathAccessedOnDispatchQueue;

@end