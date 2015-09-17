//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NEKCalendarWrapper : NSObject <SYObject>
{
    _Bool _isDefaultTaskCalendar;
    _Bool _isDefaultEventCalendar;
    NEKStoreID *_storeIdentifier;
    NSString *_calendarIdentifier;
    NSString *_oldCalendarIdentifier;
    NEKCalendarAttributes *_attributes;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isDefaultEventCalendar; // @synthesize isDefaultEventCalendar=_isDefaultEventCalendar;
@property(nonatomic) _Bool isDefaultTaskCalendar; // @synthesize isDefaultTaskCalendar=_isDefaultTaskCalendar;
@property(readonly, nonatomic) NEKCalendarAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *oldCalendarIdentifier; // @synthesize oldCalendarIdentifier=_oldCalendarIdentifier;
@property(retain, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, nonatomic) NEKStoreID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)syncId;
- (id)initWithStoreIdentifier:(id)arg1 attributes:(id)arg2 calendarIdentifier:(id)arg3;
- (id)initWithCalendarRef:(void *)arg1;
- (id)initWithCalendarRef:(void *)arg1 useAttributes:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end