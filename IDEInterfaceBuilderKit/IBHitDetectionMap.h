//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHitDetectionMap : NSObject
{
    NSMutableDictionary *layeredRepresentedObjectRects;
    IBMutableOrderedSet *representedObjects;
    NSArray *indexedRepresentedObjects;
    long long width;
    long long height;
    IBNBitIntegerArray *map;
    NSArray *indexedRepresentedObjectRects;
    long long count;
}

+ (id)alwaysOnTopKey;
+ (id)alwaysOnBottomKey;
+ (id)notARepresentedObjectKey;
- (void).cxx_destruct;
- (id)representedObjectAtPoint:(struct CGPoint)arg1;
- (void)indexObjects:(id)arg1 inRect:(struct CGRect)arg2;
- (void)overlayRepresentedObjectIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)addRepresentedObjectRect:(struct CGRect)arg1 representedObject:(id)arg2 forOrderingKey:(id)arg3 onLayer:(unsigned long long)arg4;
- (id)representedObjectRectsForLayer:(unsigned long long)arg1;
- (id)init;

@end