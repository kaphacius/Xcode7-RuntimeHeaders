//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _GKCollectionViewWrapperAdaptorView : UIView
{
    UICollectionView *_sizingCollectionView;
}

@property(nonatomic) UICollectionView *sizingCollectionView; // @synthesize sizingCollectionView=_sizingCollectionView;
- (void)setBounds:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end