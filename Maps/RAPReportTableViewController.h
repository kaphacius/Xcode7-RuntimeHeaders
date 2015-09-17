//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportTableViewController : RAPTableViewController <RAPReportViewControllerProtocol>
{
    id _lastTablePartsUpdateSender;
    _Bool _scrollingSuppressed;
    RAPReportViewControllerDelegate *_rapDelegate;
}

- (void).cxx_destruct;
- (void)updateTablePartsIfNeeded;
- (void)setNeedsTablePartsUpdateWithSender:(id)arg1 scroll:(_Bool)arg2;
- (void)setNeedsTablePartsUpdateWithSender:(id)arg1;
- (void)_updateTableParts;
- (void)_updateTablePartsScrolling:(_Bool)arg1;
- (id)tableParts;
- (void)viewDidLoad;
- (_Bool)usesNavigationControllerPushForSegue;
- (void)_send;
- (void)invokeCompletionWithOutcome:(long long)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion;
@property(readonly, nonatomic) RAPReport *report;
@property(readonly, nonatomic) UIBarButtonItem *sendButtonItem;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end