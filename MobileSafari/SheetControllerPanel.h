//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SheetControllerPanel : NSObject <BrowserPanel>
{
    WBUSheetController *_sheetController;
}

@property(readonly, retain, nonatomic) WBUSheetController *sheetController; // @synthesize sheetController=_sheetController;
- (void).cxx_destruct;
- (int)panelType;
- (id)initWithSheetController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end