//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCTouchGesture : NSObject <NSSecureCoding>
{
    NSMutableArray *_touchPaths;
    _Bool _immutable;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
@property _Bool immutable; // @synthesize immutable=_immutable;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
@property(readonly) double maximumOffset;
- (void)makeImmutable;
- (void)addTouchPath:(id)arg1;
@property(readonly) NSArray *touchPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end