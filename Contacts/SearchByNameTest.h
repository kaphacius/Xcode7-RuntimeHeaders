//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchByNameTest : ContactsTest <UINavigationControllerDelegate>
{
    _Bool _animate;
    NSMutableDictionary *_extraResults;
    unsigned long long _currentDirectoryIndex;
    NSArray *_allSearchQueries;
    unsigned long long _currentQueryIndex;
    double _lastSearchBeginTime;
}

@property(nonatomic) double lastSearchBeginTime; // @synthesize lastSearchBeginTime=_lastSearchBeginTime;
@property(nonatomic) unsigned long long currentQueryIndex; // @synthesize currentQueryIndex=_currentQueryIndex;
@property(retain, nonatomic) NSArray *allSearchQueries; // @synthesize allSearchQueries=_allSearchQueries;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
@property(nonatomic) unsigned long long currentDirectoryIndex; // @synthesize currentDirectoryIndex=_currentDirectoryIndex;
@property(retain, nonatomic) NSMutableDictionary *extraResults; // @synthesize extraResults=_extraResults;
- (void).cxx_destruct;
- (void)startSearchQuery;
- (_Bool)startTestWithOptions:(id)arg1 contactNavigationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end