//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedCollectionView : UICollectionView
{
    FRFeedCollectionViewCellRenderedImageCache *_renderedCellImageCache;
    UIRefreshControl *_refreshControl;
}

@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void).cxx_destruct;
- (void)_reloadDataZoomFade:(id)arg1 usingWork:(CDUnknownBlockType)arg2 andThenAdjustingScrollPosition:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_reloadDataForTopBounce:(id)arg1 usingWork:(CDUnknownBlockType)arg2 andThenAdjustingScrollPosition:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadDataUsingAnimation:(id)arg1 afterDoingWork:(CDUnknownBlockType)arg2 andThenAdjustingScrollPosition:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) FRFeedCollectionViewCellRenderedImageCache *renderedCellImageCache; // @synthesize renderedCellImageCache=_renderedCellImageCache;
- (void)dealloc;

@end