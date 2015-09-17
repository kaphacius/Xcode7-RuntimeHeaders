//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTBatch : NSObject
{
    double _batchHeight;
    FRTBatchContext *_batchContext;
    double _yOrigin;
    NSMutableArray *_preparedHeadlineCellContexts;
}

@property(retain, nonatomic) NSMutableArray *preparedHeadlineCellContexts; // @synthesize preparedHeadlineCellContexts=_preparedHeadlineCellContexts;
@property(nonatomic) double yOrigin; // @synthesize yOrigin=_yOrigin;
@property(copy, nonatomic) FRTBatchContext *batchContext; // @synthesize batchContext=_batchContext;
@property(nonatomic) double batchHeight; // @synthesize batchHeight=_batchHeight;
- (void).cxx_destruct;
- (void)addNonHeadlineCellsAtFront:(id)arg1;
- (void)addNonHeadlineCells:(id)arg1;
- (void)addPreparedHeadlineCellContexts:(id)arg1;
- (void)addPreparedHeadlineCellContext:(id)arg1;
@property(readonly, nonatomic) long long headlineCellContextCount;
- (id)preparedHeadlineCellContextAtIndex:(unsigned long long)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end