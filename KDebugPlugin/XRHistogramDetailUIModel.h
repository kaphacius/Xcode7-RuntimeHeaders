//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRHistogramDetailUIModel : XRDatasetBackedUIModel
{
    int _xAxisUnits;
    int _eventProperty;
    int _groupBy;
    NSString *_title;
    NSNumber *_eventCode;
    NSArray *_stateElements;
    NSArray *_binElements;
    NSArray *_binValues;
}

@property(retain, nonatomic) NSArray *binValues; // @synthesize binValues=_binValues;
@property(retain, nonatomic) NSArray *binElements; // @synthesize binElements=_binElements;
@property(retain, nonatomic) NSArray *stateElements; // @synthesize stateElements=_stateElements;
@property(nonatomic) int groupBy; // @synthesize groupBy=_groupBy;
@property(nonatomic) int eventProperty; // @synthesize eventProperty=_eventProperty;
@property(nonatomic) int xAxisUnits; // @synthesize xAxisUnits=_xAxisUnits;
@property(retain, nonatomic) NSNumber *eventCode; // @synthesize eventCode=_eventCode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)binValuesReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)binValuesRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)binValuesRemoveLastObject;
- (void)binValuesRemoveAllObjects;
- (void)binValuesInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)binValuesAddObject:(id)arg1;
- (void)binElementsReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)binElementsRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)binElementsRemoveLastObject;
- (void)binElementsRemoveAllObjects;
- (void)binElementsInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)binElementsAddObject:(id)arg1;
- (void)stateElementsReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)stateElementsRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)stateElementsRemoveLastObject;
- (void)stateElementsRemoveAllObjects;
- (void)stateElementsInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)stateElementsAddObject:(id)arg1;

@end