//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProductsUtilityPane : IDEViewController
{
    BOOL _hidden;
    BOOL _hideBottomBorder;
    DVTBorderedView *_borderedView;
    id <IDEProductsInspectable> _inspectable;
}

@property BOOL hideBottomBorder; // @synthesize hideBottomBorder=_hideBottomBorder;
@property(readonly) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly) id <IDEProductsInspectable> inspectable; // @synthesize inspectable=_inspectable;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithInspectable:(id)arg1;
- (id)initUsingDefaultNib;

@end