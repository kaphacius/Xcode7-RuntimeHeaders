//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCATRecipeLongPressController : SCATDefaultVsLongPressController
{
    AXSwitchRecipe *_recipe;
    AXSwitchRecipeMapping *_mapping;
}

@property(retain, nonatomic) AXSwitchRecipeMapping *mapping; // @synthesize mapping=_mapping;
@property(retain, nonatomic) AXSwitchRecipe *recipe; // @synthesize recipe=_recipe;
- (id)controllerForLongPress:(_Bool)arg1;
- (id)actionStringForLongPress:(_Bool)arg1;
- (void)dealloc;

@end