//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSVSViewControllerTranscriptItem : NSVSTranscriptItem
{
    UIViewController *_viewController;
    _Bool _viewDidLoad;
    _Bool _hideTopKeyline;
    id <NSVSViewControllerTranscriptItemDelegate> _delegate;
}

+ (id)transcriptItemWithViewController:(id)arg1 cellClass:(Class)arg2;
@property(nonatomic) _Bool hideTopKeyline; // @synthesize hideTopKeyline=_hideTopKeyline;
@property(readonly, nonatomic) _Bool viewDidLoad; // @synthesize viewDidLoad=_viewDidLoad;
@property(nonatomic) __weak id <NSVSViewControllerTranscriptItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize)sizeThatFitsScreenSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)setViewController:(id)arg1;
- (void)viewDidLoadViewController:(id)arg1 error:(id)arg2;
- (id)initWithCellClass:(Class)arg1;

@end