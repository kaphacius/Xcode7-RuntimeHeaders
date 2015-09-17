//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3BuildPropertyBlueprintColumnContext : Xcode3BuildPropertyColumnContext
{
    id _blueprint;
    id _observerToken;
    long long _blueprintDefinitionLevel;
    Xcode3MacroEditingContext *_macroEditingContext;
    NSMutableDictionary *_macroEditingContextPerConfiguration;
}

@property long long blueprintDefinitionLevel; // @synthesize blueprintDefinitionLevel=_blueprintDefinitionLevel;
@property(retain, nonatomic) id blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
- (void)configureForImplicitlyAddedProjectColumn;
- (void)configureForColumnInLevelsMode:(BOOL)arg1;
- (void)configureForResolvedColumn;
- (void)configureColumnTitleAndImage;
- (id)customTitleForName:(id)arg1;
- (id)allPropertyNamesInAllDictionaries;
- (id)userDefinedNames;
- (BOOL)dictionariesAtConfigurationFileLevel;
- (BOOL)hasDefinitionForBasicModeForRowContext:(id)arg1;
- (id)conditionFlavorsForRowContext:(id)arg1;
- (id)platformSpecificArchitecturesForConfiguration:(id)arg1;
- (id)platformSpecificArchitecturesForRowContext:(id)arg1;
- (id)conditionSetsForRowContext:(id)arg1;
- (BOOL)_hasSubsettingsForConditionSetsForRowContext:(id)arg1;
- (void)setStringValue:(id)arg1 forRowContext:(id)arg2;
- (void)removePropertyForRowContext:(id)arg1;
- (id)expandedValueForString:(id)arg1 forRowContext:(id)arg2 overridingConditionSet:(id)arg3;
- (id)expandedValueForString:(id)arg1 forRowContext:(id)arg2;
- (id)expandedPropertyValueForRowContext:(id)arg1;
- (id)propertyDefinitionValueForRowContext:(id)arg1;
- (BOOL)_isEqualForMultipleValues:(id)arg1 with:(id)arg2;
- (BOOL)allowsPropertyConditionFlavor:(id)arg1 forRowContext:(id)arg2;
- (BOOL)hasDefiningValueForRowContext:(id)arg1;
- (BOOL)hasAssignmentForRowContext:(id)arg1;
- (BOOL)hasChildPropertiesForRowContext:(id)arg1;
- (id)computeValueForRowContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_macroEditingContextForRowContext:(id)arg1;
- (id)_macroEditingContextForConfiguration:(id)arg1;
- (void)updateMacroExpansionContextsForBlueprints:(id)arg1;
- (void)clearMacroEditingContexts;
- (id)deriveMacroEditingContextsFromBlueprintsUsingDictionary:(id)arg1 forBlueprints:(id)arg2;
- (id)deriveMacroEditingContextFromPropertyInfoContexts:(id)arg1;
- (id)pbxBlueprintForBlueprint:(id)arg1;
- (void)startObservingMacroEditingContext:(id)arg1;
- (void)_macroEditingContextChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)stopObserving;
- (void)stopObservingMacroEditingContext:(id)arg1;
- (id)init;

@end