//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SBUIPasscodeLockViewBaseAccessibility : __SBUIPasscodeLockViewBaseAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)becomeFirstResponder;
- (void)updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (_Bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (_Bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (_Bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (_Bool)_accessibilitySupportsHandwriting;

@end