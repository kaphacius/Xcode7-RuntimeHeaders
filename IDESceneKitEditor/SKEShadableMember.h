//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEShadableMember : NSObject
{
    NSArray *_shaderModifiersTextStorages;
    id <SCNShadable> _shadableObject;
    DVTDelayedInvocation *_rebuildShaderModifiersInvocation;
}

+ (id)displayNameForShaderModifierEntryPoint:(unsigned long long)arg1;
+ (id)annotationForEntryPoint:(unsigned long long)arg1;
+ (id)shadableMemberForShadableObject:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)entryPointForShaderModifierAtIndex:(unsigned long long)arg1;
- (id)entryPointsWithoutModifier;
@property(readonly) unsigned long long shaderModifiersCount;
- (id)syntaxColoringColorForShaderModifierEntryPoint:(unsigned long long)arg1 proposedColor:(id)arg2 characterIndex:(unsigned long long)arg3 effectiveRange:(struct _NSRange *)arg4;
- (struct _NSRange)willChangeSelectionForShaderModifierEntryPoint:(unsigned long long)arg1 fromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)shouldChangeSourceForShaderModifierEntryPoint:(unsigned long long)arg1 inRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (unsigned long long)effectiveLineForShaderModifierLine:(unsigned long long)arg1 entryPoint:(unsigned long long)arg2;
- (id)annotationContextForShaderModifierEntryPoint:(unsigned long long)arg1;
- (id)textStorageForShaderModifierEntryPoint:(unsigned long long)arg1;
- (void)rebuildShaderModifiers;
- (void)scheduleRebuildShaderModifiersInvocation;
- (id)effectiveShaderModifiersFromEntryPoints;
- (id)effectiveModifierForEntryPoint:(unsigned long long)arg1;
- (id)annotatedModifierForEntryPoint:(unsigned long long)arg1;
- (void)removeShaderModifierForEntryPoint:(unsigned long long)arg1;
- (void)addShaderModifierForEntryPoint:(unsigned long long)arg1;
- (void)setNonAnnotatedModifier:(id)arg1 forEntryPoint:(unsigned long long)arg2;
- (id)nonAnnotatedModifierForEntryPoint:(unsigned long long)arg1;
- (void)dealloc;
@property(readonly) id <SCNShadable> shadableObject;
- (id)initWithShadableObject:(id)arg1;

@end