//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRPowerStreamDefinition : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_streamIdent;
    id <XRStreamedPowerParser> _parser;
}

@property(retain, nonatomic) NSString *streamIdent; // @synthesize streamIdent=_streamIdent;
@property(retain, nonatomic) id <XRStreamedPowerParser> parser; // @synthesize parser=_parser;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSIndexSet *columnIndices; // @dynamic columnIndices;
@property(readonly, nonatomic) unsigned long long columnsToDisplayCount; // @dynamic columnsToDisplayCount;
@property(readonly, nonatomic) unsigned long long columnsInDataStreamCount; // @dynamic columnsInDataStreamCount;
- (id)formatterForColumn:(unsigned long long)arg1;
- (id)labelForGraph:(unsigned long long)arg1;
- (id)labelForColumn:(unsigned long long)arg1;
- (id)labelForFloatValue:(double)arg1 forColumnIndex:(unsigned long long)arg2;
- (BOOL)getFloatValue:(double *)arg1 forColumnIndex:(unsigned long long)arg2 usingParserOutput:(id)arg3;
- (unsigned long long)columnForGraphableIndex:(unsigned long long)arg1;
- (unsigned long long)graphableMeasurementCount;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;

@end