//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NCALSizeDelegatingView : UIView
{
    id <NCALSizeDelegatingViewSizingDelegate> _sizingDelegate;
}

@property(nonatomic) __weak id <NCALSizeDelegatingViewSizingDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end