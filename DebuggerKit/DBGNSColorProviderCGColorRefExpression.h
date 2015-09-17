//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGNSColorProviderCGColorRefExpression : NSObject
{
    DBGDataValue *_dataValue;
    BOOL _wasCancelled;
    NSString *_colorSpaceName;
    NSMutableArray *_colorComponents;
    NSString *_cgColorExpression;
    BOOL _hasColorBeenRetrieved;
    struct CGColor *_color;
}

@property(readonly) NSArray *colorComponents; // @synthesize colorComponents=_colorComponents;
@property(readonly) NSString *colorSpaceName; // @synthesize colorSpaceName=_colorSpaceName;
@property(readonly) struct CGColor *color; // @synthesize color=_color;
@property(readonly) BOOL hasColorBeenRetrieved; // @synthesize hasColorBeenRetrieved=_hasColorBeenRetrieved;
- (void).cxx_destruct;
- (void)_fetchColorComponentAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchValueFromCGFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_releaseDataValue:(id)arg1;
- (void)_fetchColorSpaceName:(CDUnknownBlockType)arg1;
- (void)_fetchColorComponentsAndUpdateView;
- (void)_startRetrieval;
- (void)_updateColorForLoadedComponentsAndColorSpace;
- (void)_complete;
- (void)_retrievalFailedOrWasCancelled;
- (void)cancelLoading;
- (id)initWithDataValue:(id)arg1 cgColorExpression:(id)arg2;

@end