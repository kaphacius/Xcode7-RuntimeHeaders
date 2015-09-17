//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SFReaderContext <NSObject>
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(NSString *)arg1;
- (void)setReaderLanguageTag:(NSString *)arg1;
- (void)setReaderFont:(NSString *)arg1;
- (void)setReaderUserVisibleWidth:(double)arg1;
- (WBSReaderFontManager *)fontManager;
- (NSDictionary *)configuration;
- (NSURL *)readerURL;
- (void)clearUnusedReaderResourcesSoon;
- (void)loadNewArticle;
- (void)clearAvailability;
- (void)createArticleFinder;
- (NSDictionary *)scrollPositionInformation;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (_Bool)hasMultiplePages;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (_Bool)isReaderAvailable;
@end