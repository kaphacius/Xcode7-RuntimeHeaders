//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDesignTimeArrayMarshaller : IBDesignTimeValueMarshaller
{
    IBDesignTimeValueMarshaller *itemMarshaller;
}

+ (id)arrayMarshallerWithItemMarshaller:(id)arg1 globalContext:(id)arg2;
- (void).cxx_destruct;
- (id)invertingMarshallerInitializationState;
- (id)marshallIntermediateValue:(id)arg1 globalContext:(id)arg2;
- (id)marshallDesignTimeValue:(id)arg1 globalContext:(id)arg2;
- (id)initWithLocalContext:(id)arg1 globalContext:(id)arg2;
- (BOOL)marshallsNilValues;

@end