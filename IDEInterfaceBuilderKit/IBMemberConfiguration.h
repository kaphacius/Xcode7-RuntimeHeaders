//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMemberConfiguration : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_variableBindings;
    NSString *_stringRepresentation;
}

+ (id)standardVariableNameAttributesWithFontSize:(double)arg1;
+ (id)standardAbbreviatedDisplayNameSeparator;
+ (id)configurationFromStringRepresentation:(id)arg1 error:(id *)arg2;
+ (id)configurationWithVariableIdentifierBindings:(id)arg1;
+ (id)configurationWithVariableBindings:(id)arg1;
+ (id)emptyConfiguration;
- (void).cxx_destruct;
- (id)allVariables;
- (id)variableBindings;
- (id)abbreviatedDisplayName;
- (id)succinctDisplayName;
- (id)attributedPartiallyAbbreviatedDisplayNameMinimallyCoveringVariables:(id)arg1 separator:(id)arg2 withVariableNameAttributes:(id)arg3 valueAttributes:(id)arg4;
- (id)attributedAbbreviatedDisplayNameMinimallyCoveringVariables:(id)arg1 separator:(id)arg2 withVariableNameAttributes:(id)arg3 valueAttributes:(id)arg4;
- (id)abbreviatedDisplayNameMinimallyCoveringVariables:(id)arg1;
- (id)succinctDisplayNameMinimallyCoveringVariables:(id)arg1;
- (id)attributedDisplayNameMinimallyCoveringVariables:(id)arg1 withSeparator:(id)arg2 namingValuesWithBlock:(CDUnknownBlockType)arg3;
- (id)displayNameMinimallyCoveringVariables:(id)arg1 withSeparator:(id)arg2 namingValuesWithBlock:(CDUnknownBlockType)arg3;
- (id)stringRepresentation;
- (id)variablesInIdentifierOrder;
- (BOOL)isEmptyConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToConfiguration:(id)arg1;
- (id)description;
- (long long)compareEffectiveValuePrecedence:(id)arg1;
- (id)prioritizedVariables;
- (id)variablesSortedByComparator:(CDUnknownBlockType)arg1;
- (BOOL)isLessSpecificThanConfiguration:(id)arg1;
- (BOOL)isLessThanOrAsSpecificAsConfiguration:(id)arg1;
- (long long)numberOfVariableBindings;
- (BOOL)definesValueForVariable:(id)arg1;
- (id)valueForVariableWithIdentifier:(id)arg1;
- (id)valueForVariable:(id)arg1;
- (id)configurationLimitedToVariables:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end