//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBIDEAutolayoutArbitrationUnit : IBAutolayoutArbitrationUnit
{
}

+ (id)topMostObjectOfClass:(Class)arg1 inLineageToArbitrationUnitRootContainingObject:(id)arg2 withLayoutInfo:(id)arg3;
+ (id)allArbitrationUnitsForLayoutInfo:(id)arg1;
+ (id)arbitrationUnitsForObjects:(id)arg1 withLayoutInfo:(id)arg2;
+ (id)arbitrationUnitsAtAndBelowObjects:(id)arg1 withLayoutInfo:(id)arg2;
+ (id)_arbitrationUnitsAtAndBelowObjects:(id)arg1 stoppingAtLeaves:(BOOL)arg2 withLayoutInfo:(id)arg3;
+ (id)arbitrationUnitsAtAndBelowObject:(id)arg1 withLayoutInfo:(id)arg2;
+ (id)_arbitrationUnitsAtAndBelowObject:(id)arg1 stoppingAtLeaves:(BOOL)arg2 withLayoutInfo:(id)arg3;
+ (id)arbitrationUnitForObject:(id)arg1 withLayoutInfo:(id)arg2;
+ (void)_recursivelyBuildArbitrationUnitsAndAddToOrderedSet:(id)arg1 nextObject:(id)arg2 currentUnit:(id)arg3 withLayoutInfo:(id)arg4 stoppingAtLeaves:(BOOL)arg5;
+ (id)arbitrationUnitRootForObject:(id)arg1 withLayoutInfo:(id)arg2;
+ (BOOL)objectShouldBeArbitrationUnitRoot:(id)arg1 withLayoutInfo:(id)arg2;

@end