//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTFeedDataBatchLayoutOperation : NSObject
{
    _Bool _isCancelled;
    FRTFeedLayoutStorage *_layoutStorage;
    FRTPipeline *_pipeline;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <FCFeedHeadlineSource> _headlineSource;
    FRFeldsparContext *_feldsparContext;
}

@property(retain, nonatomic) FRFeldsparContext *feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) id <FCFeedHeadlineSource> headlineSource; // @synthesize headlineSource=_headlineSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
@property(retain, nonatomic) FRTPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) FRTFeedLayoutStorage *layoutStorage; // @synthesize layoutStorage=_layoutStorage;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void).cxx_destruct;
- (id)articleTileInfosForHeadlines:(id)arg1 batchID:(id)arg2;
- (CDUnknownBlockType)_runTransactionWithStorage:(CDUnknownBlockType)arg1 setupError:(id *)arg2;
- (id)vendPipelineForFeedSettings:(id)arg1;
- (_Bool)_layOutBatch:(id)arg1 error:(id *)arg2;
- (id)layOutBatch:(id)arg1 error:(id *)arg2;
- (id)initWithFeedLayoutStorage:(id)arg1 headlineSource:(id)arg2 feldsparContext:(id)arg3 serialQueue:(id)arg4;
- (id)init;

@end