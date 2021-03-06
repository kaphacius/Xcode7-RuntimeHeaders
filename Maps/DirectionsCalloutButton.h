//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DirectionsCalloutButton : CalloutTabButton <MKQuickRouteConfigurableView>
{
    double _expectedTravelTime;
    unsigned long long _transportType;
    double _earliestTransitTypeChange;
    CDUnknownBlockType _performWhenSizedBlock;
    SearchResult *_searchResult;
    CDUnknownBlockType _etaCompletionBlock;
}

@property(copy) CDUnknownBlockType etaCompletionBlock; // @synthesize etaCompletionBlock=_etaCompletionBlock;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) double expectedTravelTime; // @synthesize expectedTravelTime=_expectedTravelTime;
- (void).cxx_destruct;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(_Bool)arg4;
- (id)stringFormatter;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_performWhenSized:(CDUnknownBlockType)arg1;
- (void)setExpectedTravelTime:(double)arg1 animated:(_Bool)arg2;
- (double)topToImageViewTopDistance;
- (void)_updateImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end