//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEPreferencesManager : NSObject
{
}

+ (id)keyPathsForValuesAffectingBakeryNeedsAttenuation;
+ (id)sharedPreferencesManager;
@property(readonly, nonatomic) BOOL bakeryNeedsAttenuation;
@property(nonatomic) float bakeryAttenuationFactor;
@property(nonatomic) float bakeryQuality;
@property(nonatomic) unsigned long long bakeryDestination;
@property(nonatomic) unsigned long long bakeryType;
@property(readonly, nonatomic) BOOL nodeInspectorCoordinatesSystemIsLocal;
@property(readonly, nonatomic) BOOL nodeInspectorCoordinatesSystemIsWorld;
@property(nonatomic) unsigned long long nodeInspectorCoordinatesSystem;

@end