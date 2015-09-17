//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkRoutePreviewAlternatesOverlaySign : UIView <StarkRoutePreviewAlternatesViewDelegate, StarkRoutePreviewSign>
{
    NSArray *_alternateRouteViews;
    UIView *_topKeyline;
    UIView *_bottomKeyline;
    id <StarkRoutePreviewAlternatesOverlayDelegate> _delegate;
    id <StarkRoutePreviewOverlayDataSource> _dataSource;
}

@property(nonatomic) __weak id <StarkRoutePreviewOverlayDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <StarkRoutePreviewAlternatesOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setInitialSelection;
- (void)alternateRouteViewDidBecomeSelected:(id)arg1;
- (void)_clearSelection;
- (void)_selectRouteAtIndex:(unsigned long long)arg1;
- (void)_updateContents;
- (id)preferredFocusedView;
- (void)_updateStyling;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end