//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SiteIconDownloadRequest : NSObject
{
    _Bool _fetchForFavoritesIcon;
    _Bool _paused;
    NSURLConnection *_URLConnection;
    NSMutableData *_iconData;
    unsigned int _bookmarkID;
    NSString *_bookmarkUUID;
    NSString *_bookmarkAddress;
    id <SiteIconDownloadRequestDelegate> _delegate;
    NSURL *_mainResourceURL;
    NSMutableArray *_iconURLs;
    NSString *_userAgentString;
}

+ (id)iconURLListForWebClipLinkTags:(id)arg1 pageURL:(id)arg2;
+ (id)iconURLListForWebClipIcons:(id)arg1 faviconURLs:(id)arg2 pageURL:(id)arg3;
@property(retain, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
@property(retain, nonatomic) NSMutableArray *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(retain, nonatomic) NSURL *mainResourceURL; // @synthesize mainResourceURL=_mainResourceURL;
@property(nonatomic) __weak id <SiteIconDownloadRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *bookmarkAddress; // @synthesize bookmarkAddress=_bookmarkAddress;
@property(readonly, nonatomic) unsigned int bookmarkID; // @synthesize bookmarkID=_bookmarkID;
@property(readonly, nonatomic) NSString *bookmarkUUID; // @synthesize bookmarkUUID=_bookmarkUUID;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)_processIconDataAndNotifyDelegate;
- (id)_bestImageWithData:(id)arg1 forWidth:(double)arg2;
- (void)_cancelConnectionAndFetchNextIcon;
- (void)fetchNextIcon;
- (void)setBookmarkFetchedIconData;
- (void)start;
- (void)cancel;
- (void)_fetchMainResource;
- (id)initWithBookmark:(id)arg1 singleResourceURL:(id)arg2;
- (id)initWithBookmark:(id)arg1 iconURLs:(id)arg2;
- (id)initWithBookmark:(id)arg1;

@end