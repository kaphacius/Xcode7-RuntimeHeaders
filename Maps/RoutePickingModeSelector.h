//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RoutePickingModeSelector : UISegmentedControl
{
    _Bool _useImageInSegments;
    CDUnknownBlockType _blockOnSelectedVariantChanged;
    NSSet *_selectableVariants;
    long long _selectedVariant;
    NSArray *_orderedVariants;
    NSArray *_orderedItems;
    double _lastLayoutWidth;
}

@property(nonatomic) double lastLayoutWidth; // @synthesize lastLayoutWidth=_lastLayoutWidth;
@property(nonatomic) _Bool useImageInSegments; // @synthesize useImageInSegments=_useImageInSegments;
@property(retain, nonatomic) NSArray *orderedItems; // @synthesize orderedItems=_orderedItems;
@property(retain, nonatomic) NSArray *orderedVariants; // @synthesize orderedVariants=_orderedVariants;
@property(nonatomic) long long selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(copy, nonatomic) NSSet *selectableVariants; // @synthesize selectableVariants=_selectableVariants;
@property(copy, nonatomic) CDUnknownBlockType blockOnSelectedVariantChanged; // @synthesize blockOnSelectedVariantChanged=_blockOnSelectedVariantChanged;
- (void).cxx_destruct;
- (void)reselectSegmentForSelectedVariant;
- (void)resetItems;
- (void)updateSegmentsIfNeededToFitWidth:(double)arg1;
- (_Bool)_shouldShowVariant:(long long)arg1;
- (void)_modeSelectorValueChanged;
- (id)init;

@end