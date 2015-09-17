//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRArticleSession : NSObject
{
    _Bool _trackedByFeedView;
    NSString *_sessionID;
    NSString *_viewingSessionID;
    unsigned long long _referenceCount;
    NSString *_articleTitle;
    FRFeedCollectionViewCell *_articleCell;
}

@property(nonatomic, getter=isTrackedByFeedView) _Bool trackedByFeedView; // @synthesize trackedByFeedView=_trackedByFeedView;
@property(nonatomic) __weak FRFeedCollectionViewCell *articleCell; // @synthesize articleCell=_articleCell;
@property(copy, nonatomic) NSString *articleTitle; // @synthesize articleTitle=_articleTitle;
@property(nonatomic) unsigned long long referenceCount; // @synthesize referenceCount=_referenceCount;
@property(copy, nonatomic) NSString *viewingSessionID; // @synthesize viewingSessionID=_viewingSessionID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)debugDescription;

@end