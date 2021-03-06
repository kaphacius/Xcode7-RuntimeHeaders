//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSStringToNumberWithSubstitutionTransformer : NSValueTransformer
{
    NSDictionary *_swaps;
    NSString *_offString;
    NSString *_onString;
    long long _minVal;
    long long _maxVal;
    BOOL _active;
    BOOL _asBytes;
    id _targetNotRetained;
    id _controlNotRetained;
    NSString *_keyPath;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)transformerWithSubstitutions:(id)arg1 min:(id)arg2 max:(id)arg3 off:(id)arg4 target:(id)arg5 keyPath:(id)arg6 asBytes:(BOOL)arg7 active:(BOOL)arg8;
+ (void)saveState:(long long)arg1 forTarget:(id)arg2 keyPath:(id)arg3;
+ (long long)stateForTarget:(id)arg1 keyPath:(id)arg2;
- (void).cxx_destruct;
- (void)setActive:(BOOL)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)setControl:(id)arg1;
- (id)unswappedString:(id)arg1;
- (id)swappedString:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)dealloc;
- (id)initWithSubstitutions:(id)arg1 min:(id)arg2 max:(id)arg3 off:(id)arg4 target:(id)arg5 keyPath:(id)arg6 asBytes:(BOOL)arg7 active:(BOOL)arg8;

@end