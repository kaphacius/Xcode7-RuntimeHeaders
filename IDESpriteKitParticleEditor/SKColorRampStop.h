//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKColorRampStop : NSObject <NSCopying>
{
    double _location;
    NSColor *_color;
}

+ (id)stopWithColor:(id)arg1 location:(double)arg2;
@property(copy) NSColor *color; // @synthesize color=_color;
@property double location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;

@end