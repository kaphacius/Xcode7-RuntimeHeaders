//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MCQuestionViewAccessibility : __MCQuestionViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (_Bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (_Bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (_Bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (_Bool)_accessibilitySupportsHandwriting;
- (long long)_accessibilityQuestionKeyboardType;
- (id)_accessibilityQuestionTextField;
- (_Bool)_accessibilityIsPasswordQuestion;

@end