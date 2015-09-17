//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEiPhoneMultiImageView : NSView <DVTInvalidation>
{
    id <IDEiPhoneMultiImageViewDelegate> _delegate;
    double _imageRowHeight;
    NSMutableArray *_cachedImages;
}

+ (void)initialize;
@property double imageRowHeight; // @synthesize imageRowHeight=_imageRowHeight;
@property(retain) id <IDEiPhoneMultiImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)mouseUp:(id)arg1;
- (void)reloadImages;
- (void)drawRect:(struct CGRect)arg1;
- (void)iterateThroughImagesWithBlock:(CDUnknownBlockType)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end